/****************************************************************************
** Meta object code from reading C++ file 'ForwarderController.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/ForwarderController.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ForwarderController.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA19ForwarderControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::ForwarderController::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA19ForwarderControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::ForwarderController",
        "buildStarted",
        "",
        "needsForwarderKit",
        "downloadStarted",
        "Download",
        "which",
        "downloadComplete",
        "downloadProgress",
        "bytesGotten",
        "bytesTotal",
        "buildComplete",
        "buildFailed",
        "startBuild",
        "outFilename",
        "gotManifest",
        "QNetworkReply*",
        "gotBuild",
        "gotForwarderKit"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'buildStarted'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Signal 'downloadStarted'
        QtMocHelpers::SignalData<void(enum Download)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'downloadComplete'
        QtMocHelpers::SignalData<void(enum Download)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'downloadProgress'
        QtMocHelpers::SignalData<void(enum Download, qint64, qint64)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { QMetaType::LongLong, 9 }, { QMetaType::LongLong, 10 },
        }}),
        // Signal 'buildComplete'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'buildFailed'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'startBuild'
        QtMocHelpers::SlotData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 14 },
        }}),
        // Slot 'gotManifest'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 2 },
        }}),
        // Slot 'gotBuild'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 2 },
        }}),
        // Slot 'gotForwarderKit'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ForwarderController, qt_meta_tag_ZN4QGBA19ForwarderControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::ForwarderController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA19ForwarderControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA19ForwarderControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA19ForwarderControllerE_t>.metaTypes,
    nullptr
} };

void QGBA::ForwarderController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ForwarderController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->buildStarted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->downloadStarted((*reinterpret_cast<std::add_pointer_t<enum Download>>(_a[1]))); break;
        case 2: _t->downloadComplete((*reinterpret_cast<std::add_pointer_t<enum Download>>(_a[1]))); break;
        case 3: _t->downloadProgress((*reinterpret_cast<std::add_pointer_t<enum Download>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[3]))); break;
        case 4: _t->buildComplete(); break;
        case 5: _t->buildFailed(); break;
        case 6: _t->startBuild((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->gotManifest((*reinterpret_cast<std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 8: _t->gotBuild((*reinterpret_cast<std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 9: _t->gotForwarderKit((*reinterpret_cast<std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ForwarderController::*)(bool )>(_a, &ForwarderController::buildStarted, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ForwarderController::*)(Download )>(_a, &ForwarderController::downloadStarted, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ForwarderController::*)(Download )>(_a, &ForwarderController::downloadComplete, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ForwarderController::*)(Download , qint64 , qint64 )>(_a, &ForwarderController::downloadProgress, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ForwarderController::*)()>(_a, &ForwarderController::buildComplete, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ForwarderController::*)()>(_a, &ForwarderController::buildFailed, 5))
            return;
    }
}

const QMetaObject *QGBA::ForwarderController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::ForwarderController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA19ForwarderControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::ForwarderController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QGBA::ForwarderController::buildStarted(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QGBA::ForwarderController::downloadStarted(Download _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QGBA::ForwarderController::downloadComplete(Download _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void QGBA::ForwarderController::downloadProgress(Download _t1, qint64 _t2, qint64 _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3);
}

// SIGNAL 4
void QGBA::ForwarderController::buildComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QGBA::ForwarderController::buildFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
