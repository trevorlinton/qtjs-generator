// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qaccessiblebridge.h>

#include "meta_qtgui_qaccessiblebridge.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qaccessiblebridge()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qaccessiblebridge(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QAccessibleBridgePlugin()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QAccessibleBridgePlugin, QObject> _nd = GDefineMetaClass<QAccessibleBridgePlugin, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QAccessibleBridgePlugin");
        buildMetaClass_QAccessibleBridgePlugin(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QAccessibleBridgePluginWrapper, QAccessibleBridgePlugin> _nd = GDefineMetaClass<QAccessibleBridgePluginWrapper, QAccessibleBridgePlugin>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QAccessibleBridgePluginWrapper");
        buildMetaClass_QAccessibleBridgePluginWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


