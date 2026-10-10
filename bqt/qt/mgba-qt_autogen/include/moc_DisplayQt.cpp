/****************************************************************************
** Meta object code from reading C++ file 'DisplayQt.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/DisplayQt.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DisplayQt.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA9DisplayQtE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::DisplayQt::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA9DisplayQtE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::DisplayQt",
        "stopDrawing",
        "",
        "pauseDrawing",
        "unpauseDrawing",
        "forceDraw",
        "lockAspectRatio",
        "lock",
        "lockIntegerScaling",
        "interframeBlending",
        "enable",
        "swapInterval",
        "filter",
        "framePosted",
        "setShaders",
        "VDir*",
        "clearShaders",
        "resizeContext",
        "setBackgroundImage",
        "QImage"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'stopDrawing'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pauseDrawing'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'unpauseDrawing'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'forceDraw'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'lockAspectRatio'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'lockIntegerScaling'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'interframeBlending'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'swapInterval'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'filter'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'framePosted'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setShaders'
        QtMocHelpers::SlotData<bool(VDir *)>(14, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'clearShaders'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resizeContext'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setBackgroundImage'
        QtMocHelpers::SlotData<void(const QImage &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 19, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DisplayQt, qt_meta_tag_ZN4QGBA9DisplayQtE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::DisplayQt::staticMetaObject = { {
    QMetaObject::SuperData::link<Display::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9DisplayQtE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9DisplayQtE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA9DisplayQtE_t>.metaTypes,
    nullptr
} };

void QGBA::DisplayQt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DisplayQt *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->stopDrawing(); break;
        case 1: _t->pauseDrawing(); break;
        case 2: _t->unpauseDrawing(); break;
        case 3: _t->forceDraw(); break;
        case 4: _t->lockAspectRatio((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->lockIntegerScaling((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->interframeBlending((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->swapInterval((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->filter((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->framePosted(); break;
        case 10: { bool _r = _t->setShaders((*reinterpret_cast<std::add_pointer_t<VDir*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->clearShaders(); break;
        case 12: _t->resizeContext(); break;
        case 13: _t->setBackgroundImage((*reinterpret_cast<std::add_pointer_t<QImage>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QGBA::DisplayQt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::DisplayQt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9DisplayQtE_t>.strings))
        return static_cast<void*>(this);
    return Display::qt_metacast(_clname);
}

int QGBA::DisplayQt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Display::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
