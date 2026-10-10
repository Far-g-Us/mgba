/****************************************************************************
** Meta object code from reading C++ file 'GBAApp.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/GBAApp.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GBAApp.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA12GameDBParserE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::GameDBParser::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA12GameDBParserE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::GameDBParser",
        "parseNoIntroDB",
        ""
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'parseNoIntroDB'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GameDBParser, qt_meta_tag_ZN4QGBA12GameDBParserE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::GameDBParser::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA12GameDBParserE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA12GameDBParserE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA12GameDBParserE_t>.metaTypes,
    nullptr
} };

void QGBA::GameDBParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GameDBParser *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->parseNoIntroDB(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *QGBA::GameDBParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::GameDBParser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA12GameDBParserE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::GameDBParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN4QGBA6GBAAppE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::GBAApp::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA6GBAAppE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::GBAApp",
        "jobFinished",
        "",
        "jobId",
        "restartForUpdate",
        "newWindow",
        "Window*",
        "suspendScreensaver",
        "resumeScreensaver",
        "setScreensaverSuspendable",
        "finishJob",
        "cleanup"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'jobFinished'
        QtMocHelpers::SignalData<void(qint64)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 3 },
        }}),
        // Slot 'restartForUpdate'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'newWindow'
        QtMocHelpers::SlotData<Window *()>(5, 2, QMC::AccessPublic, 0x80000000 | 6),
        // Slot 'suspendScreensaver'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resumeScreensaver'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setScreensaverSuspendable'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'finishJob'
        QtMocHelpers::SlotData<void(qint64)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 3 },
        }}),
        // Slot 'cleanup'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GBAApp, qt_meta_tag_ZN4QGBA6GBAAppE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::GBAApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QApplication::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA6GBAAppE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA6GBAAppE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA6GBAAppE_t>.metaTypes,
    nullptr
} };

void QGBA::GBAApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GBAApp *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->jobFinished((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 1: _t->restartForUpdate(); break;
        case 2: { Window* _r = _t->newWindow();
            if (_a[0]) *reinterpret_cast<Window**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->suspendScreensaver(); break;
        case 4: _t->resumeScreensaver(); break;
        case 5: _t->setScreensaverSuspendable((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->finishJob((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 7: _t->cleanup(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GBAApp::*)(qint64 )>(_a, &GBAApp::jobFinished, 0))
            return;
    }
}

const QMetaObject *QGBA::GBAApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::GBAApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA6GBAAppE_t>.strings))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int QGBA::GBAApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
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
void QGBA::GBAApp::jobFinished(qint64 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
