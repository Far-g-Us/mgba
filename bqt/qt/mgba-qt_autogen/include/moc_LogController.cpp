/****************************************************************************
** Meta object code from reading C++ file 'LogController.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/LogController.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogController.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA13LogControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::LogController::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA13LogControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::LogController",
        "logPosted",
        "",
        "level",
        "category",
        "log",
        "levelsSet",
        "levels",
        "levelsEnabled",
        "levelsDisabled",
        "postLog",
        "string",
        "setLevels",
        "enableLevels",
        "disableLevels",
        "clearLevels",
        "logToFile",
        "logToStdout",
        "setLogFile"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'logPosted'
        QtMocHelpers::SignalData<void(int, int, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 }, { QMetaType::QString, 5 },
        }}),
        // Signal 'levelsSet'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Signal 'levelsEnabled'
        QtMocHelpers::SignalData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Signal 'levelsDisabled'
        QtMocHelpers::SignalData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Signal 'levelsSet'
        QtMocHelpers::SignalData<void(int, int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 4 },
        }}),
        // Signal 'levelsEnabled'
        QtMocHelpers::SignalData<void(int, int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 4 },
        }}),
        // Signal 'levelsDisabled'
        QtMocHelpers::SignalData<void(int, int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 4 },
        }}),
        // Slot 'postLog'
        QtMocHelpers::SlotData<void(int, int, const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 }, { QMetaType::QString, 11 },
        }}),
        // Slot 'setLevels'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'enableLevels'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'disableLevels'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'setLevels'
        QtMocHelpers::SlotData<void(int, int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 4 },
        }}),
        // Slot 'enableLevels'
        QtMocHelpers::SlotData<void(int, int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 4 },
        }}),
        // Slot 'disableLevels'
        QtMocHelpers::SlotData<void(int, int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 4 },
        }}),
        // Slot 'clearLevels'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'logToFile'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'logToStdout'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setLogFile'
        QtMocHelpers::SlotData<void(const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<LogController, qt_meta_tag_ZN4QGBA13LogControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::LogController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA13LogControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA13LogControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA13LogControllerE_t>.metaTypes,
    nullptr
} };

void QGBA::LogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LogController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->logPosted((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->levelsSet((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->levelsEnabled((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->levelsDisabled((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->levelsSet((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->levelsEnabled((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->levelsDisabled((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->postLog((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 8: _t->setLevels((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->enableLevels((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->disableLevels((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->setLevels((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 12: _t->enableLevels((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 13: _t->disableLevels((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 14: _t->clearLevels((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->logToFile((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->logToStdout((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->setLogFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LogController::*)(int , int , const QString & )>(_a, &LogController::logPosted, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogController::*)(int )>(_a, &LogController::levelsSet, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogController::*)(int )>(_a, &LogController::levelsEnabled, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogController::*)(int )>(_a, &LogController::levelsDisabled, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogController::*)(int , int )>(_a, &LogController::levelsSet, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogController::*)(int , int )>(_a, &LogController::levelsEnabled, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogController::*)(int , int )>(_a, &LogController::levelsDisabled, 6))
            return;
    }
}

const QMetaObject *QGBA::LogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::LogController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA13LogControllerE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Log"))
        return static_cast< Log*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::LogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void QGBA::LogController::logPosted(int _t1, int _t2, const QString & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 1
void QGBA::LogController::levelsSet(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QGBA::LogController::levelsEnabled(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void QGBA::LogController::levelsDisabled(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void QGBA::LogController::levelsSet(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void QGBA::LogController::levelsEnabled(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void QGBA::LogController::levelsDisabled(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}
QT_WARNING_POP
