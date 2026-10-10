/****************************************************************************
** Meta object code from reading C++ file 'FrameView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/FrameView.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrameView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN4QGBA9FrameViewE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::FrameView::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA9FrameViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::FrameView",
        "selectLayer",
        "",
        "QPointF",
        "coord",
        "disableLayer",
        "exportFrame",
        "reset",
        "invalidateQueue",
        "QSize",
        "updateRendered",
        "refreshVl",
        "newVl"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'selectLayer'
        QtMocHelpers::SlotData<void(const QPointF &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'disableLayer'
        QtMocHelpers::SlotData<void(const QPointF &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'exportFrame'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reset'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'invalidateQueue'
        QtMocHelpers::SlotData<void(const QSize &)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 9, 2 },
        }}),
        // Slot 'invalidateQueue'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'updateRendered'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'refreshVl'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newVl'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FrameView, qt_meta_tag_ZN4QGBA9FrameViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::FrameView::staticMetaObject = { {
    QMetaObject::SuperData::link<AssetView::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9FrameViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9FrameViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA9FrameViewE_t>.metaTypes,
    nullptr
} };

void QGBA::FrameView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FrameView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectLayer((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 1: _t->disableLayer((*reinterpret_cast<std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 2: _t->exportFrame(); break;
        case 3: _t->reset(); break;
        case 4: _t->invalidateQueue((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 5: _t->invalidateQueue(); break;
        case 6: _t->updateRendered(); break;
        case 7: _t->refreshVl(); break;
        case 8: _t->newVl(); break;
        default: ;
        }
    }
}

const QMetaObject *QGBA::FrameView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::FrameView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9FrameViewE_t>.strings))
        return static_cast<void*>(this);
    return AssetView::qt_metacast(_clname);
}

int QGBA::FrameView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AssetView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
