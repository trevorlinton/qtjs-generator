// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qabstracttextdocumentlayout.h>

#include "meta_qtgui_qabstracttextdocumentlayout.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QAbstractTextDocumentLayout()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QAbstractTextDocumentLayout, QObject> _nd = GDefineMetaClass<QAbstractTextDocumentLayout, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QAbstractTextDocumentLayout");
        buildMetaClass_QAbstractTextDocumentLayout(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QAbstractTextDocumentLayoutWrapper, QAbstractTextDocumentLayout> _nd = GDefineMetaClass<QAbstractTextDocumentLayoutWrapper, QAbstractTextDocumentLayout>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QAbstractTextDocumentLayoutWrapper");
        buildMetaClass_QAbstractTextDocumentLayoutWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QTextObjectInterface()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QTextObjectInterface> _nd = GDefineMetaClass<QTextObjectInterface>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QTextObjectInterface");
        buildMetaClass_QTextObjectInterface(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QTextObjectInterfaceWrapper, QTextObjectInterface> _nd = GDefineMetaClass<QTextObjectInterfaceWrapper, QTextObjectInterface>::declare("QTextObjectInterfaceWrapper");
        buildMetaClass_QTextObjectInterfaceWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui

