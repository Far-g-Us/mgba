/****************************************************************************
** Meta object code from reading C++ file 'DebuggerConsoleController.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/DebuggerConsoleController.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebuggerConsoleController.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA25DebuggerConsoleControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::DebuggerConsoleController::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA25DebuggerConsoleControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::DebuggerConsoleController",
        "log",
        "",
        "lineAppend",
        "enterLine",
        "detach",
        "historyLoad",
        "historySave",
        "doContinue"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'log'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Signal 'lineAppend'
        QtMocHelpers::SignalData<void(const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'enterLine'
        QtMocHelpers::SlotData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'detach'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'historyLoad'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'historySave'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doContinue'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DebuggerConsoleController, qt_meta_tag_ZN4QGBA25DebuggerConsoleControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::DebuggerConsoleController::staticMetaObject = { {
    QMetaObject::SuperData::link<DebuggerController::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA25DebuggerConsoleControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA25DebuggerConsoleControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA25DebuggerConsoleControllerE_t>.metaTypes,
    nullptr
} };

void QGBA::DebuggerConsoleController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DebuggerConsoleController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->log((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->lineAppend((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->enterLine((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->detach(); break;
        case 4: _t->historyLoad(); break;
        case 5: _t->historySave(); break;
        case 6: _t->doContinue(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DebuggerConsoleController::*)(const QString & )>(_a, &DebuggerConsoleController::log, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DebuggerConsoleController::*)(const QString & )>(_a, &DebuggerConsoleController::lineAppend, 1))
            return;
    }
}

const QMetaObject *QGBA::DebuggerConsoleController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::DebuggerConsoleController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA25DebuggerConsoleControllerE_t>.strings))
        return static_cast<void*>(this);
    return DebuggerController::qt_metacast(_clname);
}

int QGBA::DebuggerConsoleController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DebuggerController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QGBA::DebuggerConsoleController::log(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QGBA::DebuggerConsoleController::lineAppend(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
