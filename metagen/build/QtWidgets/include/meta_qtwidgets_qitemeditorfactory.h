// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QITEMEDITORFACTORY_H
#define __META_QTWIDGETS_QITEMEDITORFACTORY_H


#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace meta_qtwidgets { 


template <typename D, class T>
void buildMetaClass_QItemEditorCreator(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("createWidget", &D::ClassType::createWidget);
    _d.CPGF_MD_TEMPLATE _method("valuePropertyName", &D::ClassType::valuePropertyName);
}


template <typename D>
void buildMetaClass_QItemEditorCreatorBase(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("createWidget", &D::ClassType::createWidget);
    _d.CPGF_MD_TEMPLATE _method("valuePropertyName", &D::ClassType::valuePropertyName);
}


class QItemEditorCreatorBaseWrapper : public QItemEditorCreatorBase, public cpgf::GScriptWrapper {
public:
    
    QWidget * createWidget(QWidget * parent) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createWidget"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunction(func.get(), this, parent));
        }
        throw "Abstract method";
    }
    QWidget * super_createWidget(QWidget * parent) const
    {
        throw "Abstract method";
    }
    
    QByteArray valuePropertyName() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("valuePropertyName"));
        if(func)
        {
            return cpgf::fromVariant<QByteArray >(cpgf::invokeScriptFunction(func.get(), this));
        }
        throw "Abstract method";
    }
    QByteArray super_valuePropertyName() const
    {
        throw "Abstract method";
    }
};


template <typename D>
void buildMetaClass_QItemEditorCreatorBaseWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    _d.CPGF_MD_TEMPLATE _method("super_createWidget", (QWidget * (D::ClassType::*) (QWidget *) const)&D::ClassType::super_createWidget);
    _d.CPGF_MD_TEMPLATE _method("super_valuePropertyName", (QByteArray (D::ClassType::*) () const)&D::ClassType::super_valuePropertyName);
    
    buildMetaClass_QItemEditorCreatorBase<D>(config, _d);
}


template <typename D>
void buildMetaClass_QItemEditorFactory(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("createEditor", &D::ClassType::createEditor);
    _d.CPGF_MD_TEMPLATE _method("valuePropertyName", &D::ClassType::valuePropertyName);
    _d.CPGF_MD_TEMPLATE _method("registerEditor", &D::ClassType::registerEditor);
    _d.CPGF_MD_TEMPLATE _method("defaultFactory", &D::ClassType::defaultFactory);
    _d.CPGF_MD_TEMPLATE _method("setDefaultFactory", &D::ClassType::setDefaultFactory);
}


class QItemEditorFactoryWrapper : public QItemEditorFactory, public cpgf::GScriptWrapper {
public:
    
    QItemEditorFactoryWrapper()
        : QItemEditorFactory() {}
    
    QWidget * createEditor(int userType, QWidget * parent) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createEditor"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunction(func.get(), this, userType, parent));
        }
        return QItemEditorFactory::createEditor(userType, parent);
    }
    QWidget * super_createEditor(int userType, QWidget * parent) const
    {
        return QItemEditorFactory::createEditor(userType, parent);
    }
    
    QByteArray valuePropertyName(int userType) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("valuePropertyName"));
        if(func)
        {
            return cpgf::fromVariant<QByteArray >(cpgf::invokeScriptFunction(func.get(), this, userType));
        }
        return QItemEditorFactory::valuePropertyName(userType);
    }
    QByteArray super_valuePropertyName(int userType) const
    {
        return QItemEditorFactory::valuePropertyName(userType);
    }
};


template <typename D>
void buildMetaClass_QItemEditorFactoryWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    _d.CPGF_MD_TEMPLATE _method("super_createEditor", (QWidget * (D::ClassType::*) (int, QWidget *) const)&D::ClassType::super_createEditor);
    _d.CPGF_MD_TEMPLATE _method("super_valuePropertyName", (QByteArray (D::ClassType::*) (int) const)&D::ClassType::super_valuePropertyName);
    
    buildMetaClass_QItemEditorFactory<D>(config, _d);
}


template <typename D, class T>
void buildMetaClass_QStandardItemEditorCreator(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("createWidget", &D::ClassType::createWidget);
    _d.CPGF_MD_TEMPLATE _method("valuePropertyName", &D::ClassType::valuePropertyName);
}


} // namespace meta_qtwidgets




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif