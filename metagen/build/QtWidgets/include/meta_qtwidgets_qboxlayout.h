// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QBOXLAYOUT_H
#define CPGF_META_QTWIDGETS_QBOXLAYOUT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QBoxLayout(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QBoxLayout::Direction, QWidget *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("direction", &D::ClassType::direction);
    _d.CPGF_MD_TEMPLATE _method("setDirection", &D::ClassType::setDirection);
    _d.CPGF_MD_TEMPLATE _method("addSpacing", &D::ClassType::addSpacing);
    _d.CPGF_MD_TEMPLATE _method("addStretch", &D::ClassType::addStretch)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("addSpacerItem", &D::ClassType::addSpacerItem);
    _d.CPGF_MD_TEMPLATE _method("addWidget", &D::ClassType::addWidget)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("addLayout", &D::ClassType::addLayout)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("addStrut", &D::ClassType::addStrut);
    _d.CPGF_MD_TEMPLATE _method("addItem", &D::ClassType::addItem);
    _d.CPGF_MD_TEMPLATE _method("insertSpacing", &D::ClassType::insertSpacing);
    _d.CPGF_MD_TEMPLATE _method("insertStretch", &D::ClassType::insertStretch)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("insertSpacerItem", &D::ClassType::insertSpacerItem);
    _d.CPGF_MD_TEMPLATE _method("insertWidget", &D::ClassType::insertWidget)
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("insertLayout", &D::ClassType::insertLayout)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("insertItem", &D::ClassType::insertItem);
    _d.CPGF_MD_TEMPLATE _method("spacing", &D::ClassType::spacing);
    _d.CPGF_MD_TEMPLATE _method("setSpacing", &D::ClassType::setSpacing);
    _d.CPGF_MD_TEMPLATE _method("setStretchFactor", (bool (D::ClassType::*) (QWidget *, int))&D::ClassType::setStretchFactor);
    _d.CPGF_MD_TEMPLATE _method("setStretchFactor", (bool (D::ClassType::*) (QLayout *, int))&D::ClassType::setStretchFactor);
    _d.CPGF_MD_TEMPLATE _method("setStretch", &D::ClassType::setStretch);
    _d.CPGF_MD_TEMPLATE _method("stretch", &D::ClassType::stretch);
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("minimumSize", &D::ClassType::minimumSize);
    _d.CPGF_MD_TEMPLATE _method("maximumSize", &D::ClassType::maximumSize);
    _d.CPGF_MD_TEMPLATE _method("hasHeightForWidth", &D::ClassType::hasHeightForWidth);
    _d.CPGF_MD_TEMPLATE _method("heightForWidth", &D::ClassType::heightForWidth);
    _d.CPGF_MD_TEMPLATE _method("minimumHeightForWidth", &D::ClassType::minimumHeightForWidth);
    _d.CPGF_MD_TEMPLATE _method("expandingDirections", &D::ClassType::expandingDirections);
    _d.CPGF_MD_TEMPLATE _method("invalidate", &D::ClassType::invalidate);
    _d.CPGF_MD_TEMPLATE _method("itemAt", &D::ClassType::itemAt);
    _d.CPGF_MD_TEMPLATE _method("takeAt", &D::ClassType::takeAt);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("setGeometry", &D::ClassType::setGeometry);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Direction>("Direction")
        ._element("LeftToRight", D::ClassType::LeftToRight)
        ._element("RightToLeft", D::ClassType::RightToLeft)
        ._element("TopToBottom", D::ClassType::TopToBottom)
        ._element("BottomToTop", D::ClassType::BottomToTop)
        ._element("Down", D::ClassType::Down)
        ._element("Up", D::ClassType::Up)
    ;
}


class QBoxLayoutWrapper : public QBoxLayout, public cpgf::GScriptWrapper {
public:
    
    QBoxLayoutWrapper(QBoxLayout::Direction __arg0, QWidget * parent = 0)
        : QBoxLayout(__arg0, parent) {}
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    void childEvent(QChildEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QLayout::childEvent(e);
    }
    void super_childEvent(QChildEvent * e)
    {
        QLayout::childEvent(e);
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QBoxLayout::sizeHint();
    }
    
    void widgetEvent(QEvent * __arg0)
    {
        QLayout::widgetEvent(__arg0);
    }
    
    QRect geometry() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("geometry"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::geometry();
    }
    QRect super_geometry() const
    {
        return QLayout::geometry();
    }
    
    QSize maximumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::maximumSize();
    }
    QSize super_maximumSize() const
    {
        return QBoxLayout::maximumSize();
    }
    
    QRect alignmentRect(const QRect & __arg0) const
    {
        return QLayout::alignmentRect(__arg0);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QBoxLayout::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QBoxLayout::qt_metacast(__arg0);
    }
    
    int minimumHeightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QBoxLayout::minimumHeightForWidth(__arg0);
    }
    int super_minimumHeightForWidth(int __arg0) const
    {
        return QBoxLayout::minimumHeightForWidth(__arg0);
    }
    
    QSpacerItem * spacerItem()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("spacerItem"));
        if(func)
        {
            return cpgf::fromVariant<QSpacerItem * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayoutItem::spacerItem();
    }
    QSpacerItem * super_spacerItem()
    {
        return QLayoutItem::spacerItem();
    }
    
    bool isEmpty() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isEmpty"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::isEmpty();
    }
    bool super_isEmpty() const
    {
        return QLayout::isEmpty();
    }
    
    int count() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("count"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::count();
    }
    int super_count() const
    {
        return QBoxLayout::count();
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    QWidget * widget()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("widget"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayoutItem::widget();
    }
    QWidget * super_widget()
    {
        return QLayoutItem::widget();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void setGeometry(const QRect & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QBoxLayout::setGeometry(__arg0);
    }
    void super_setGeometry(const QRect & __arg0)
    {
        QBoxLayout::setGeometry(__arg0);
    }
    
    void invalidate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidate"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QBoxLayout::invalidate();
    }
    void super_invalidate()
    {
        QBoxLayout::invalidate();
    }
    
    bool adoptLayout(QLayout * layout)
    {
        return QLayout::adoptLayout(layout);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QBoxLayout::hasHeightForWidth();
    }
    
    void addChildWidget(QWidget * w)
    {
        QLayout::addChildWidget(w);
    }
    
    QLayoutItem * takeAt(int __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("takeAt"));
        if(func)
        {
            return cpgf::fromVariant<QLayoutItem * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QBoxLayout::takeAt(__arg0);
    }
    QLayoutItem * super_takeAt(int __arg0)
    {
        return QBoxLayout::takeAt(__arg0);
    }
    
    int indexOf(QWidget * __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOf"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QLayout::indexOf(__arg0);
    }
    int super_indexOf(QWidget * __arg0) const
    {
        return QLayout::indexOf(__arg0);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1));
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QBoxLayout::metaObject();
    }
    
    QSize minimumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::minimumSize();
    }
    QSize super_minimumSize() const
    {
        return QBoxLayout::minimumSize();
    }
    
    Qt::Orientations expandingDirections() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("expandingDirections"));
        if(func)
        {
            return cpgf::fromVariant<Qt::Orientations >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::expandingDirections();
    }
    Qt::Orientations super_expandingDirections() const
    {
        return QBoxLayout::expandingDirections();
    }
    
    QSizePolicy::ControlTypes controlTypes() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("controlTypes"));
        if(func)
        {
            return cpgf::fromVariant<QSizePolicy::ControlTypes >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::controlTypes();
    }
    QSizePolicy::ControlTypes super_controlTypes() const
    {
        return QLayout::controlTypes();
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    void addItem(QLayoutItem * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("addItem"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QBoxLayout::addItem(__arg0);
    }
    void super_addItem(QLayoutItem * __arg0)
    {
        QBoxLayout::addItem(__arg0);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QBoxLayout::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QBoxLayout::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    QLayout * layout()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("layout"));
        if(func)
        {
            return cpgf::fromVariant<QLayout * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::layout();
    }
    QLayout * super_layout()
    {
        return QLayout::layout();
    }
    
    void addChildLayout(QLayout * l)
    {
        QLayout::addChildLayout(l);
    }
    
    QLayoutItem * itemAt(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemAt"));
        if(func)
        {
            return cpgf::fromVariant<QLayoutItem * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QBoxLayout::itemAt(__arg0);
    }
    QLayoutItem * super_itemAt(int __arg0) const
    {
        return QBoxLayout::itemAt(__arg0);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QBoxLayout::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QBoxLayout::heightForWidth(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("widgetEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::widgetEvent);
        _d.CPGF_MD_TEMPLATE _method("alignmentRect", (QRect (D::ClassType::*) (const QRect &) const)&D::ClassType::alignmentRect);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("adoptLayout", (bool (D::ClassType::*) (QLayout *))&D::ClassType::adoptLayout);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("addChildWidget", (void (D::ClassType::*) (QWidget *))&D::ClassType::addChildWidget);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("addChildLayout", (void (D::ClassType::*) (QLayout *))&D::ClassType::addChildLayout);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_geometry", (QRect (D::ClassType::*) () const)&D::ClassType::super_geometry);
        _d.CPGF_MD_TEMPLATE _method("super_maximumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_maximumSize);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_minimumHeightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_minimumHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_spacerItem", (QSpacerItem * (D::ClassType::*) ())&D::ClassType::super_spacerItem);
        _d.CPGF_MD_TEMPLATE _method("super_isEmpty", (bool (D::ClassType::*) () const)&D::ClassType::super_isEmpty);
        _d.CPGF_MD_TEMPLATE _method("super_count", (int (D::ClassType::*) () const)&D::ClassType::super_count);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_widget", (QWidget * (D::ClassType::*) ())&D::ClassType::super_widget);
        _d.CPGF_MD_TEMPLATE _method("super_setGeometry", (void (D::ClassType::*) (const QRect &))&D::ClassType::super_setGeometry);
        _d.CPGF_MD_TEMPLATE _method("super_invalidate", (void (D::ClassType::*) ())&D::ClassType::super_invalidate);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_takeAt", (QLayoutItem * (D::ClassType::*) (int))&D::ClassType::super_takeAt);
        _d.CPGF_MD_TEMPLATE _method("super_indexOf", (int (D::ClassType::*) (QWidget *) const)&D::ClassType::super_indexOf);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_minimumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSize);
        _d.CPGF_MD_TEMPLATE _method("super_expandingDirections", (Qt::Orientations (D::ClassType::*) () const)&D::ClassType::super_expandingDirections);
        _d.CPGF_MD_TEMPLATE _method("super_controlTypes", (QSizePolicy::ControlTypes (D::ClassType::*) () const)&D::ClassType::super_controlTypes);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_addItem", (void (D::ClassType::*) (QLayoutItem *))&D::ClassType::super_addItem);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_layout", (QLayout * (D::ClassType::*) ())&D::ClassType::super_layout);
        _d.CPGF_MD_TEMPLATE _method("super_itemAt", (QLayoutItem * (D::ClassType::*) (int) const)&D::ClassType::super_itemAt);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
    }
};


template <typename D>
void buildMetaClass_QBoxLayoutWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QBoxLayoutWrapper::cpgf__register(_d);
    
    buildMetaClass_QBoxLayout<D>(_d);
}


template <typename D>
void buildMetaClass_QHBoxLayout(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QHBoxLayoutWrapper : public QHBoxLayout, public cpgf::GScriptWrapper {
public:
    
    QHBoxLayoutWrapper()
        : QHBoxLayout() {}
    
    QHBoxLayoutWrapper(QWidget * parent)
        : QHBoxLayout(parent) {}
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    void childEvent(QChildEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QLayout::childEvent(e);
    }
    void super_childEvent(QChildEvent * e)
    {
        QLayout::childEvent(e);
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QBoxLayout::sizeHint();
    }
    
    void widgetEvent(QEvent * __arg0)
    {
        QLayout::widgetEvent(__arg0);
    }
    
    QRect geometry() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("geometry"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::geometry();
    }
    QRect super_geometry() const
    {
        return QLayout::geometry();
    }
    
    QSize maximumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::maximumSize();
    }
    QSize super_maximumSize() const
    {
        return QBoxLayout::maximumSize();
    }
    
    QRect alignmentRect(const QRect & __arg0) const
    {
        return QLayout::alignmentRect(__arg0);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QHBoxLayout::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QHBoxLayout::qt_metacast(__arg0);
    }
    
    int minimumHeightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QBoxLayout::minimumHeightForWidth(__arg0);
    }
    int super_minimumHeightForWidth(int __arg0) const
    {
        return QBoxLayout::minimumHeightForWidth(__arg0);
    }
    
    QSpacerItem * spacerItem()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("spacerItem"));
        if(func)
        {
            return cpgf::fromVariant<QSpacerItem * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayoutItem::spacerItem();
    }
    QSpacerItem * super_spacerItem()
    {
        return QLayoutItem::spacerItem();
    }
    
    bool isEmpty() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isEmpty"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::isEmpty();
    }
    bool super_isEmpty() const
    {
        return QLayout::isEmpty();
    }
    
    int count() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("count"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::count();
    }
    int super_count() const
    {
        return QBoxLayout::count();
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    QWidget * widget()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("widget"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayoutItem::widget();
    }
    QWidget * super_widget()
    {
        return QLayoutItem::widget();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void setGeometry(const QRect & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QBoxLayout::setGeometry(__arg0);
    }
    void super_setGeometry(const QRect & __arg0)
    {
        QBoxLayout::setGeometry(__arg0);
    }
    
    void invalidate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidate"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QBoxLayout::invalidate();
    }
    void super_invalidate()
    {
        QBoxLayout::invalidate();
    }
    
    bool adoptLayout(QLayout * layout)
    {
        return QLayout::adoptLayout(layout);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QBoxLayout::hasHeightForWidth();
    }
    
    void addChildWidget(QWidget * w)
    {
        QLayout::addChildWidget(w);
    }
    
    QLayoutItem * takeAt(int __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("takeAt"));
        if(func)
        {
            return cpgf::fromVariant<QLayoutItem * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QBoxLayout::takeAt(__arg0);
    }
    QLayoutItem * super_takeAt(int __arg0)
    {
        return QBoxLayout::takeAt(__arg0);
    }
    
    int indexOf(QWidget * __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOf"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QLayout::indexOf(__arg0);
    }
    int super_indexOf(QWidget * __arg0) const
    {
        return QLayout::indexOf(__arg0);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1));
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QHBoxLayout::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QHBoxLayout::metaObject();
    }
    
    QSize minimumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::minimumSize();
    }
    QSize super_minimumSize() const
    {
        return QBoxLayout::minimumSize();
    }
    
    Qt::Orientations expandingDirections() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("expandingDirections"));
        if(func)
        {
            return cpgf::fromVariant<Qt::Orientations >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::expandingDirections();
    }
    Qt::Orientations super_expandingDirections() const
    {
        return QBoxLayout::expandingDirections();
    }
    
    QSizePolicy::ControlTypes controlTypes() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("controlTypes"));
        if(func)
        {
            return cpgf::fromVariant<QSizePolicy::ControlTypes >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::controlTypes();
    }
    QSizePolicy::ControlTypes super_controlTypes() const
    {
        return QLayout::controlTypes();
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    void addItem(QLayoutItem * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("addItem"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QBoxLayout::addItem(__arg0);
    }
    void super_addItem(QLayoutItem * __arg0)
    {
        QBoxLayout::addItem(__arg0);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QHBoxLayout::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QHBoxLayout::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    QLayout * layout()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("layout"));
        if(func)
        {
            return cpgf::fromVariant<QLayout * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::layout();
    }
    QLayout * super_layout()
    {
        return QLayout::layout();
    }
    
    void addChildLayout(QLayout * l)
    {
        QLayout::addChildLayout(l);
    }
    
    QLayoutItem * itemAt(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemAt"));
        if(func)
        {
            return cpgf::fromVariant<QLayoutItem * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QBoxLayout::itemAt(__arg0);
    }
    QLayoutItem * super_itemAt(int __arg0) const
    {
        return QBoxLayout::itemAt(__arg0);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QBoxLayout::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QBoxLayout::heightForWidth(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("widgetEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::widgetEvent);
        _d.CPGF_MD_TEMPLATE _method("alignmentRect", (QRect (D::ClassType::*) (const QRect &) const)&D::ClassType::alignmentRect);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("adoptLayout", (bool (D::ClassType::*) (QLayout *))&D::ClassType::adoptLayout);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("addChildWidget", (void (D::ClassType::*) (QWidget *))&D::ClassType::addChildWidget);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("addChildLayout", (void (D::ClassType::*) (QLayout *))&D::ClassType::addChildLayout);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_geometry", (QRect (D::ClassType::*) () const)&D::ClassType::super_geometry);
        _d.CPGF_MD_TEMPLATE _method("super_maximumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_maximumSize);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_minimumHeightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_minimumHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_spacerItem", (QSpacerItem * (D::ClassType::*) ())&D::ClassType::super_spacerItem);
        _d.CPGF_MD_TEMPLATE _method("super_isEmpty", (bool (D::ClassType::*) () const)&D::ClassType::super_isEmpty);
        _d.CPGF_MD_TEMPLATE _method("super_count", (int (D::ClassType::*) () const)&D::ClassType::super_count);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_widget", (QWidget * (D::ClassType::*) ())&D::ClassType::super_widget);
        _d.CPGF_MD_TEMPLATE _method("super_setGeometry", (void (D::ClassType::*) (const QRect &))&D::ClassType::super_setGeometry);
        _d.CPGF_MD_TEMPLATE _method("super_invalidate", (void (D::ClassType::*) ())&D::ClassType::super_invalidate);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_takeAt", (QLayoutItem * (D::ClassType::*) (int))&D::ClassType::super_takeAt);
        _d.CPGF_MD_TEMPLATE _method("super_indexOf", (int (D::ClassType::*) (QWidget *) const)&D::ClassType::super_indexOf);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_minimumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSize);
        _d.CPGF_MD_TEMPLATE _method("super_expandingDirections", (Qt::Orientations (D::ClassType::*) () const)&D::ClassType::super_expandingDirections);
        _d.CPGF_MD_TEMPLATE _method("super_controlTypes", (QSizePolicy::ControlTypes (D::ClassType::*) () const)&D::ClassType::super_controlTypes);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_addItem", (void (D::ClassType::*) (QLayoutItem *))&D::ClassType::super_addItem);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_layout", (QLayout * (D::ClassType::*) ())&D::ClassType::super_layout);
        _d.CPGF_MD_TEMPLATE _method("super_itemAt", (QLayoutItem * (D::ClassType::*) (int) const)&D::ClassType::super_itemAt);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
    }
};


template <typename D>
void buildMetaClass_QHBoxLayoutWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QHBoxLayoutWrapper::cpgf__register(_d);
    
    buildMetaClass_QHBoxLayout<D>(_d);
}


template <typename D>
void buildMetaClass_QVBoxLayout(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QVBoxLayoutWrapper : public QVBoxLayout, public cpgf::GScriptWrapper {
public:
    
    QVBoxLayoutWrapper()
        : QVBoxLayout() {}
    
    QVBoxLayoutWrapper(QWidget * parent)
        : QVBoxLayout(parent) {}
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    void childEvent(QChildEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QLayout::childEvent(e);
    }
    void super_childEvent(QChildEvent * e)
    {
        QLayout::childEvent(e);
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QBoxLayout::sizeHint();
    }
    
    void widgetEvent(QEvent * __arg0)
    {
        QLayout::widgetEvent(__arg0);
    }
    
    QRect geometry() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("geometry"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::geometry();
    }
    QRect super_geometry() const
    {
        return QLayout::geometry();
    }
    
    QSize maximumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("maximumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::maximumSize();
    }
    QSize super_maximumSize() const
    {
        return QBoxLayout::maximumSize();
    }
    
    QRect alignmentRect(const QRect & __arg0) const
    {
        return QLayout::alignmentRect(__arg0);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QVBoxLayout::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QVBoxLayout::qt_metacast(__arg0);
    }
    
    int minimumHeightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QBoxLayout::minimumHeightForWidth(__arg0);
    }
    int super_minimumHeightForWidth(int __arg0) const
    {
        return QBoxLayout::minimumHeightForWidth(__arg0);
    }
    
    QSpacerItem * spacerItem()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("spacerItem"));
        if(func)
        {
            return cpgf::fromVariant<QSpacerItem * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayoutItem::spacerItem();
    }
    QSpacerItem * super_spacerItem()
    {
        return QLayoutItem::spacerItem();
    }
    
    bool isEmpty() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isEmpty"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::isEmpty();
    }
    bool super_isEmpty() const
    {
        return QLayout::isEmpty();
    }
    
    int count() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("count"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::count();
    }
    int super_count() const
    {
        return QBoxLayout::count();
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    QWidget * widget()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("widget"));
        if(func)
        {
            return cpgf::fromVariant<QWidget * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayoutItem::widget();
    }
    QWidget * super_widget()
    {
        return QLayoutItem::widget();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void setGeometry(const QRect & __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGeometry"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QBoxLayout::setGeometry(__arg0);
    }
    void super_setGeometry(const QRect & __arg0)
    {
        QBoxLayout::setGeometry(__arg0);
    }
    
    void invalidate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidate"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QBoxLayout::invalidate();
    }
    void super_invalidate()
    {
        QBoxLayout::invalidate();
    }
    
    bool adoptLayout(QLayout * layout)
    {
        return QLayout::adoptLayout(layout);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QBoxLayout::hasHeightForWidth();
    }
    
    void addChildWidget(QWidget * w)
    {
        QLayout::addChildWidget(w);
    }
    
    QLayoutItem * takeAt(int __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("takeAt"));
        if(func)
        {
            return cpgf::fromVariant<QLayoutItem * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QBoxLayout::takeAt(__arg0);
    }
    QLayoutItem * super_takeAt(int __arg0)
    {
        return QBoxLayout::takeAt(__arg0);
    }
    
    int indexOf(QWidget * __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexOf"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QLayout::indexOf(__arg0);
    }
    int super_indexOf(QWidget * __arg0) const
    {
        return QLayout::indexOf(__arg0);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1));
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QVBoxLayout::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QVBoxLayout::metaObject();
    }
    
    QSize minimumSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSize"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::minimumSize();
    }
    QSize super_minimumSize() const
    {
        return QBoxLayout::minimumSize();
    }
    
    Qt::Orientations expandingDirections() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("expandingDirections"));
        if(func)
        {
            return cpgf::fromVariant<Qt::Orientations >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QBoxLayout::expandingDirections();
    }
    Qt::Orientations super_expandingDirections() const
    {
        return QBoxLayout::expandingDirections();
    }
    
    QSizePolicy::ControlTypes controlTypes() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("controlTypes"));
        if(func)
        {
            return cpgf::fromVariant<QSizePolicy::ControlTypes >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::controlTypes();
    }
    QSizePolicy::ControlTypes super_controlTypes() const
    {
        return QLayout::controlTypes();
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    void addItem(QLayoutItem * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("addItem"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QBoxLayout::addItem(__arg0);
    }
    void super_addItem(QLayoutItem * __arg0)
    {
        QBoxLayout::addItem(__arg0);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QVBoxLayout::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QVBoxLayout::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    QLayout * layout()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("layout"));
        if(func)
        {
            return cpgf::fromVariant<QLayout * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QLayout::layout();
    }
    QLayout * super_layout()
    {
        return QLayout::layout();
    }
    
    void addChildLayout(QLayout * l)
    {
        QLayout::addChildLayout(l);
    }
    
    QLayoutItem * itemAt(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemAt"));
        if(func)
        {
            return cpgf::fromVariant<QLayoutItem * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QBoxLayout::itemAt(__arg0);
    }
    QLayoutItem * super_itemAt(int __arg0) const
    {
        return QBoxLayout::itemAt(__arg0);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QBoxLayout::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QBoxLayout::heightForWidth(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("widgetEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::widgetEvent);
        _d.CPGF_MD_TEMPLATE _method("alignmentRect", (QRect (D::ClassType::*) (const QRect &) const)&D::ClassType::alignmentRect);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("adoptLayout", (bool (D::ClassType::*) (QLayout *))&D::ClassType::adoptLayout);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("addChildWidget", (void (D::ClassType::*) (QWidget *))&D::ClassType::addChildWidget);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("addChildLayout", (void (D::ClassType::*) (QLayout *))&D::ClassType::addChildLayout);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_geometry", (QRect (D::ClassType::*) () const)&D::ClassType::super_geometry);
        _d.CPGF_MD_TEMPLATE _method("super_maximumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_maximumSize);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_minimumHeightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_minimumHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_spacerItem", (QSpacerItem * (D::ClassType::*) ())&D::ClassType::super_spacerItem);
        _d.CPGF_MD_TEMPLATE _method("super_isEmpty", (bool (D::ClassType::*) () const)&D::ClassType::super_isEmpty);
        _d.CPGF_MD_TEMPLATE _method("super_count", (int (D::ClassType::*) () const)&D::ClassType::super_count);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_widget", (QWidget * (D::ClassType::*) ())&D::ClassType::super_widget);
        _d.CPGF_MD_TEMPLATE _method("super_setGeometry", (void (D::ClassType::*) (const QRect &))&D::ClassType::super_setGeometry);
        _d.CPGF_MD_TEMPLATE _method("super_invalidate", (void (D::ClassType::*) ())&D::ClassType::super_invalidate);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_takeAt", (QLayoutItem * (D::ClassType::*) (int))&D::ClassType::super_takeAt);
        _d.CPGF_MD_TEMPLATE _method("super_indexOf", (int (D::ClassType::*) (QWidget *) const)&D::ClassType::super_indexOf);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_minimumSize", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSize);
        _d.CPGF_MD_TEMPLATE _method("super_expandingDirections", (Qt::Orientations (D::ClassType::*) () const)&D::ClassType::super_expandingDirections);
        _d.CPGF_MD_TEMPLATE _method("super_controlTypes", (QSizePolicy::ControlTypes (D::ClassType::*) () const)&D::ClassType::super_controlTypes);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_addItem", (void (D::ClassType::*) (QLayoutItem *))&D::ClassType::super_addItem);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_layout", (QLayout * (D::ClassType::*) ())&D::ClassType::super_layout);
        _d.CPGF_MD_TEMPLATE _method("super_itemAt", (QLayoutItem * (D::ClassType::*) (int) const)&D::ClassType::super_itemAt);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
    }
};


template <typename D>
void buildMetaClass_QVBoxLayoutWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QVBoxLayoutWrapper::cpgf__register(_d);
    
    buildMetaClass_QVBoxLayout<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
