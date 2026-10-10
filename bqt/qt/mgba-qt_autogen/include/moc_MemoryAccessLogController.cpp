/****************************************************************************
** Meta object code from reading C++ file 'MemoryAccessLogController.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/MemoryAccessLogController.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MemoryAccessLogController.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA25MemoryAccessLogControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::MemoryAccessLogController::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA25MemoryAccessLogControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::MemoryAccessLogController",
        "loaded",
        "",
        "loggingChanged",
        "active",
        "regionMappingChanged",
        "internalName",
        "updateRegion",
        "enable",
        "setFile",
        "path",
        "start",
        "loadExisting",
        "logExtra",
        "stop",
        "load",
        "unload",
        "exportFile",
        "filename"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'loaded'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 1 },
        }}),
        // Signal 'loggingChanged'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'regionMappingChanged'
        QtMocHelpers::SignalData<void(const QString &, bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 }, { QMetaType::Bool, 4 },
        }}),
        // Slot 'updateRegion'
        QtMocHelpers::SlotData<void(const QString &, bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 6 }, { QMetaType::Bool, 8 },
        }}),
        // Slot 'setFile'
        QtMocHelpers::SlotData<void(const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'start'
        QtMocHelpers::SlotData<void(bool, bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 }, { QMetaType::Bool, 13 },
        }}),
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'load'
        QtMocHelpers::SlotData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'unload'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'exportFile'
        QtMocHelpers::SlotData<void(const QString &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MemoryAccessLogController, qt_meta_tag_ZN4QGBA25MemoryAccessLogControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::MemoryAccessLogController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA25MemoryAccessLogControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA25MemoryAccessLogControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA25MemoryAccessLogControllerE_t>.metaTypes,
    nullptr
} };

void QGBA::MemoryAccessLogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MemoryAccessLogController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->loaded((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->loggingChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->regionMappingChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->updateRegion((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->setFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->start((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->stop(); break;
        case 7: _t->load((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->unload(); break;
        case 9: _t->exportFile((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MemoryAccessLogController::*)(bool )>(_a, &MemoryAccessLogController::loaded, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MemoryAccessLogController::*)(bool )>(_a, &MemoryAccessLogController::loggingChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MemoryAccessLogController::*)(const QString & , bool )>(_a, &MemoryAccessLogController::regionMappingChanged, 2))
            return;
    }
}

const QMetaObject *QGBA::MemoryAccessLogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::MemoryAccessLogController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA25MemoryAccessLogControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::MemoryAccessLogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QGBA::MemoryAccessLogController::loaded(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QGBA::MemoryAccessLogController::loggingChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QGBA::MemoryAccessLogController::regionMappingChanged(const QString & _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
QT_WARNING_POP
