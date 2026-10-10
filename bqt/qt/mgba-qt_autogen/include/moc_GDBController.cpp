/****************************************************************************
** Meta object code from reading C++ file 'GDBController.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/GDBController.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GDBController.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA13GDBControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::GDBController::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA13GDBControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::GDBController",
        "listening",
        "",
        "listenFailed",
        "setPort",
        "port",
        "setBindAddress",
        "Address",
        "setWatchpointsBehavior",
        "watchpointsBehaviorId",
        "listen"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'listening'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'listenFailed'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setPort'
        QtMocHelpers::SlotData<void(ushort)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UShort, 5 },
        }}),
        // Slot 'setBindAddress'
        QtMocHelpers::SlotData<void(const Address &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 2 },
        }}),
        // Slot 'setWatchpointsBehavior'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'listen'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GDBController, qt_meta_tag_ZN4QGBA13GDBControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::GDBController::staticMetaObject = { {
    QMetaObject::SuperData::link<DebuggerController::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA13GDBControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA13GDBControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA13GDBControllerE_t>.metaTypes,
    nullptr
} };

void QGBA::GDBController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GDBController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->listening(); break;
        case 1: _t->listenFailed(); break;
        case 2: _t->setPort((*reinterpret_cast<std::add_pointer_t<ushort>>(_a[1]))); break;
        case 3: _t->setBindAddress((*reinterpret_cast<std::add_pointer_t<Address>>(_a[1]))); break;
        case 4: _t->setWatchpointsBehavior((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->listen(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GDBController::*)()>(_a, &GDBController::listening, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GDBController::*)()>(_a, &GDBController::listenFailed, 1))
            return;
    }
}

const QMetaObject *QGBA::GDBController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::GDBController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA13GDBControllerE_t>.strings))
        return static_cast<void*>(this);
    return DebuggerController::qt_metacast(_clname);
}

int QGBA::GDBController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DebuggerController::qt_metacall(_c, _id, _a);
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
void QGBA::GDBController::listening()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGBA::GDBController::listenFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
