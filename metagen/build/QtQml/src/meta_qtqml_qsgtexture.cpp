// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQuick/qsgtexture.h>

#include "meta_qtqml_qsgtexture.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QSGDynamicTexture()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QSGDynamicTexture, QSGTexture> _nd = GDefineMetaClass<QSGDynamicTexture, QSGTexture>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QSGDynamicTexture");
        buildMetaClass_QSGDynamicTexture(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QSGDynamicTextureWrapper, QSGDynamicTexture> _nd = GDefineMetaClass<QSGDynamicTextureWrapper, QSGDynamicTexture>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QSGDynamicTextureWrapper");
        buildMetaClass_QSGDynamicTextureWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QSGTexture()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QSGTexture, QObject> _nd = GDefineMetaClass<QSGTexture, QObject>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QSGTexture");
        buildMetaClass_QSGTexture(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QSGTextureWrapper, QSGTexture> _nd = GDefineMetaClass<QSGTextureWrapper, QSGTexture>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QSGTextureWrapper");
        buildMetaClass_QSGTextureWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml


