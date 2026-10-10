/****************************************************************************
** Meta object code from reading C++ file 'ShortcutController.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/ShortcutController.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShortcutController.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA8ShortcutE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::Shortcut::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA8ShortcutE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::Shortcut",
        "shortcutChanged",
        "",
        "sequence",
        "buttonChanged",
        "button",
        "axisChanged",
        "axis",
        "GamepadAxisEvent::Direction",
        "direction",
        "setShortcut",
        "setButton",
        "setAxis"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'shortcutChanged'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'buttonChanged'
        QtMocHelpers::SignalData<void(int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Signal 'axisChanged'
        QtMocHelpers::SignalData<void(int, GamepadAxisEvent::Direction)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Slot 'setShortcut'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'setButton'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'setAxis'
        QtMocHelpers::SlotData<void(int, GamepadAxisEvent::Direction)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { 0x80000000 | 8, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Shortcut, qt_meta_tag_ZN4QGBA8ShortcutE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::Shortcut::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA8ShortcutE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA8ShortcutE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA8ShortcutE_t>.metaTypes,
    nullptr
} };

void QGBA::Shortcut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Shortcut *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->shortcutChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->buttonChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->axisChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<GamepadAxisEvent::Direction>>(_a[2]))); break;
        case 3: _t->setShortcut((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setButton((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setAxis((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<GamepadAxisEvent::Direction>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Shortcut::*)(int )>(_a, &Shortcut::shortcutChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Shortcut::*)(int )>(_a, &Shortcut::buttonChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Shortcut::*)(int , GamepadAxisEvent::Direction )>(_a, &Shortcut::axisChanged, 2))
            return;
    }
}

const QMetaObject *QGBA::Shortcut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::Shortcut::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA8ShortcutE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::Shortcut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QGBA::Shortcut::shortcutChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QGBA::Shortcut::buttonChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QGBA::Shortcut::axisChanged(int _t1, GamepadAxisEvent::Direction _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
namespace {
struct qt_meta_tag_ZN4QGBA18ShortcutControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::ShortcutController::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA18ShortcutControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::ShortcutController",
        "shortcutAdded",
        "",
        "name",
        "menuCleared",
        "loadProfile",
        "profile",
        "rebuildItems"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'shortcutAdded'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'menuCleared'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'loadProfile'
        QtMocHelpers::SlotData<void(const QString &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 },
        }}),
        // Slot 'rebuildItems'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ShortcutController, qt_meta_tag_ZN4QGBA18ShortcutControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::ShortcutController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA18ShortcutControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA18ShortcutControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA18ShortcutControllerE_t>.metaTypes,
    nullptr
} };

void QGBA::ShortcutController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ShortcutController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->shortcutAdded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->menuCleared((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->loadProfile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->rebuildItems(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ShortcutController::*)(const QString & )>(_a, &ShortcutController::shortcutAdded, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShortcutController::*)(const QString & )>(_a, &ShortcutController::menuCleared, 1))
            return;
    }
}

const QMetaObject *QGBA::ShortcutController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::ShortcutController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA18ShortcutControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::ShortcutController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QGBA::ShortcutController::shortcutAdded(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QGBA::ShortcutController::menuCleared(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
