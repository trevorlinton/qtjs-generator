
#include <QApplication>
#include <QMainWindow>

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/gscopedinterface.h"
#include "cpgf/scriptbind/gv8runner.h"
#include "cpgf/scriptbind/gv8bind.h"

#include <iostream>
#include <string.h>
#include "v8.h"

#include "register_meta_qtcore.h"
#include "register_meta_qtgui.h"
#include "register_meta_qtwidgets.h"
#include "register_meta_qtqml.h"

#include <QtCore/QObject>
#include <QtCore/QSharedPointer>

#include "dynamic_qobject.h"
#include "qmlRegisterType.h"

#include <QDebug>
#include <QFileInfo>
#include <QDir>
#include <QTimer>

#include "eventdispatcherlibuv.h"
#include "uv.h"

#include "../../lib/node/src/env.h"

using namespace cpgf;
using namespace std;

namespace node {
char** Init(int* argc,
            const char** argv,
            int* exec_argc,
            const char*** exec_argv);
v8::Handle<v8::Object> SetupProcessObject(int argc, char *argv[]);
void Load(v8::Handle<v8::Object> process_l);
void EmitExit(Environment* env);
void RunAtExit(Environment* env);
static void InstallEarlyDebugSignalHandler();
Environment* CreateEnvironment(v8::Isolate* isolate,
                                int argc,
                                const char* const* argv,
                                int exec_argc,
                                const char* const* exec_argv);
}

namespace {

int __exitCode = 1;

void setExitCode(int code)
{
    __exitCode = code;
}

struct ExecutionStackNode {
    std::string filename;
};

typedef std::vector<ExecutionStackNode> ExecutionStack;

ExecutionStack executionStack;
GScriptRunner *globalScriptRunnerInstance = nullptr;

const char *currentJsFileName()
{
    assert(executionStack.size());
    return executionStack.back().filename.c_str();
}

void invokeV8Gc()
{
    while (!v8::V8::IdleNotification());
}

QString makeIncludePathAbsolute(QString fileName)
{
    if (QFileInfo(fileName).isRelative()) {
        QDir baseDir;
        if (executionStack.size()) {
            baseDir = QFileInfo(currentJsFileName()).absoluteDir();
        } else {
            baseDir = QDir::current();
        }
        return baseDir.absoluteFilePath(fileName);
    }
    return fileName;
}

bool includeJsFile(QString fileName) {
    if (!globalScriptRunnerInstance) {
        throw std::logic_error("a global script runner has to be registered before including js files");
    }

    fileName = makeIncludePathAbsolute(fileName);
    executionStack.push_back({fileName.toLatin1().constData()});
    int ret = globalScriptRunnerInstance->executeFile(fileName.toLatin1().constData());
    executionStack.pop_back();
    return ret;
}

void registerQt(GDefineMetaNamespace &define)
{
    meta_qtcore::registerMain_QtCore(define);
    meta_qtgui::registerMain_QtGui(define);
    meta_qtwidgets::registerMain_QtWidgets(define);
    meta_qtqml::registerMain_QtQml(define);

    define._class(qtjs_binder::createDynamicObjectsMetaClasses());
    define._method("finalizeAndRegisterMetaObjectBuilderToQml", &qtjs_binder::finalizeAndRegisterMetaObjectBuilderToQml);

    qtjs_binder::QtSignalConnectorBinder::reset(new qtjs_binder::QtSignalConnector());
    define._method("connect", &qtjs_binder::QtSignalConnectorBinder::connect);
    define._method("setExitCode", &setExitCode);
    define._method("include", &includeJsFile);
    define._method("__fileName__", &currentJsFileName);
    define._method("makeIncludePathAbsolute", &makeIncludePathAbsolute);
    define._method("invokeV8Gc", &invokeV8Gc);
}

struct CpgfBinder {
    GDefineMetaNamespace define;
    GScopedInterface<IMetaService> service;
    GScopedPointer<GScriptRunner> runner;
    GScopedInterface<IScriptObject> scriptObject;
    GScopedInterface<IMetaClass> metaClass;

    CpgfBinder(v8::Handle<v8::Context> ctx)
        : define(GDefineMetaNamespace::declare("qt")),
          service(createDefaultMetaService()),
          runner(createV8ScriptRunner(service.get(), ctx)),
          scriptObject(runner->getScripeObject()),
          metaClass(static_cast<IMetaClass *>(metaItemToInterface(define.getMetaClass())))
    {
        registerQt(define);
        scriptObject->bindCoreService("cpgf", NULL);
        scriptSetValue(scriptObject.get(), "qt", GScriptValue::fromClass(metaClass.get()));
        globalScriptRunnerInstance = runner.get();
    }

    ~CpgfBinder()
    {
        globalScriptRunnerInstance = nullptr;
        invokeV8Gc();
        clearV8DataPool();
        qtjs_binder::QtSignalConnectorBinder::reset();
        qtjs_binder::dynamicMetaObjects.dispose();
    }
};

static char **copy_argv(int argc, char **argv) {
  size_t strlen_sum;
  char **argv_copy;
  char *argv_data;
  size_t len;
  int i;

  strlen_sum = 0;
  for(i = 0; i < argc; i++) {
    strlen_sum += strlen(argv[i]) + 1;
  }

  argv_copy = (char **) malloc(sizeof(char *) * (argc + 1) + strlen_sum);
  if (!argv_copy) {
    return NULL;
  }

  argv_data = (char *) argv_copy + sizeof(char *) * (argc + 1);

  for(i = 0; i < argc; i++) {
    argv_copy[i] = argv_data;
    len = strlen(argv[i]) + 1;
    memcpy(argv_data, argv[i], len);
    argv_data += len;
  }

  argv_copy[argc] = NULL;

  return argv_copy;
}


} // namespace



int main(int argc, char * argv[])
{
//#if !defined(_WIN32)
//  // Try hard not to lose SIGUSR1 signals during the bootstrap process.
//  node::InstallEarlyDebugSignalHandler();
//#endif

  assert(argc > 0);

  // Hack around with the argv pointer. Used for process.title = "blah".
  argv = uv_setup_args(argc, argv);


  auto ev_dispatcher = new qtjs::EventDispatcherLibUv();
  QCoreApplication::setEventDispatcher(ev_dispatcher);
  QApplication app(argc, argv);

  if ((argc > 1) && (!strcmp("-v", argv[1]))) {
      cout << "v8 version: "<<v8::V8::GetVersion() << endl;
      return 0;
  }


  // This needs to run *before* V8::Initialize().  The const_cast is not
  // optional, in case you're wondering.
  int exec_argc;
  const char** exec_argv;
  node::Init(&argc, const_cast<const char**>(argv), &exec_argc, &exec_argv);

//#if HAVE_OPENSSL
//  // V8 on Windows doesn't have a good source of entropy. Seed it from
//  // OpenSSL's pool.
//  V8::SetEntropySource(crypto::EntropySource);
//#endif

  v8::V8::Initialize();
  {
    v8::Isolate* node_isolate = NULL;

    v8::Locker locker(node_isolate);
    node::Environment* env = node::CreateEnvironment(node_isolate, argc, argv, exec_argc, exec_argv);
    v8::Context::Scope context_scope(env->context());
    v8::HandleScope handle_scope(env->isolate());

    CpgfBinder cpgfBinder(env->context());

    bool appHadQuitRequest = false;
    QObject::connect(&app, &QCoreApplication::aboutToQuit, [&appHadQuitRequest]{
        appHadQuitRequest = true;
    });

    //    uv_run(env->event_loop(), UV_RUN_DEFAULT);
    if (!appHadQuitRequest) {
        ev_dispatcher->finalize = true;
        app.exec();
    }

    node::EmitExit(env);
    node::RunAtExit(env);
    env->Dispose();
    env = NULL;
  }

#ifndef NDEBUG
  // Clean up. Not strictly necessary.
  v8::V8::Dispose();
#endif  // NDEBUG

  delete[] exec_argv;
  exec_argv = NULL;

  return __exitCode;
}

