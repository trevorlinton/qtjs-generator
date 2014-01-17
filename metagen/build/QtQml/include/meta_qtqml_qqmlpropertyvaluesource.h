// Auto generated file, don't modify.

#ifndef __META_QTQML_QQMLPROPERTYVALUESOURCE_H
#define __META_QTQML_QQMLPROPERTYVALUESOURCE_H


#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace meta_qtqml { 


template <typename D>
void buildMetaClass_Global_qqmlpropertyvaluesource(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtQml_20")
        ._element("QQmlPropertyValueSource_iid", QQmlPropertyValueSource_iid)
    ;
}


template <typename D>
void buildMetaClass_QQmlPropertyValueSource(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setTarget", &D::ClassType::setTarget, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


class QQmlPropertyValueSourceWrapper : public QQmlPropertyValueSource, public cpgf::GScriptWrapper {
public:
    
    QQmlPropertyValueSourceWrapper()
        : QQmlPropertyValueSource() {}
    
    void setTarget(const QQmlProperty & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setTarget"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        throw "Abstract method";
    }
    void super_setTarget(const QQmlProperty & __arg0)
    {
        throw "Abstract method";
    }
};


template <typename D>
void buildMetaClass_QQmlPropertyValueSourceWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    _d.CPGF_MD_TEMPLATE _method("super_setTarget", (void (D::ClassType::*) (const QQmlProperty &))&D::ClassType::super_setTarget, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    
    buildMetaClass_QQmlPropertyValueSource<D>(config, _d);
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
