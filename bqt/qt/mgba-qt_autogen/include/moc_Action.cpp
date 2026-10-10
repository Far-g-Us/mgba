/****************************************************************************
** Meta object code from reading C++ file 'Action.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/Action.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Action.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA6ActionE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::Action::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA6ActionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::Action",
        "enabled",
        "",
        "activated",
        "trigger",
        "setEnabled",
        "setActive"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'enabled'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'activated'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'trigger'
        QtMocHelpers::SlotData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'trigger'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'setEnabled'
        QtMocHelpers::SlotData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setEnabled'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'setActive'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setActive'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Action, qt_meta_tag_ZN4QGBA6ActionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::Action::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA6ActionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA6ActionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA6ActionE_t>.metaTypes,
    nullptr
} };

void QGBA::Action::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Action *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->enabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->activated((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->trigger((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->trigger(); break;
        case 4: _t->setEnabled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setEnabled(); break;
        case 6: _t->setActive((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setActive(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Action::*)(bool )>(_a, &Action::enabled, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Action::*)(bool )>(_a, &Action::activated, 1))
            return;
    }
}

const QMetaObject *QGBA::Action::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::Action::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA6ActionE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::Action::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QGBA::Action::enabled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QGBA::Action::activated(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
