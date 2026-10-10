/****************************************************************************
** Meta object code from reading C++ file 'MemoryModel.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/MemoryModel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MemoryModel.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA11MemoryModelE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::MemoryModel::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA11MemoryModelE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::MemoryModel",
        "selectionChanged",
        "",
        "uint32_t",
        "start",
        "end",
        "jumpToAddress",
        "hex",
        "loadTBLFromPath",
        "path",
        "loadTBL",
        "copy",
        "paste",
        "save",
        "load"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'selectionChanged'
        QtMocHelpers::SignalData<void(uint32_t, uint32_t)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 },
        }}),
        // Slot 'jumpToAddress'
        QtMocHelpers::SlotData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'jumpToAddress'
        QtMocHelpers::SlotData<void(uint32_t)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'loadTBLFromPath'
        QtMocHelpers::SlotData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'loadTBL'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copy'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'paste'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'load'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MemoryModel, qt_meta_tag_ZN4QGBA11MemoryModelE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::MemoryModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA11MemoryModelE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA11MemoryModelE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA11MemoryModelE_t>.metaTypes,
    nullptr
} };

void QGBA::MemoryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MemoryModel *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[2]))); break;
        case 1: _t->jumpToAddress((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->jumpToAddress((*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 3: _t->loadTBLFromPath((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->loadTBL(); break;
        case 5: _t->copy(); break;
        case 6: _t->paste(); break;
        case 7: _t->save(); break;
        case 8: _t->load(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MemoryModel::*)(uint32_t , uint32_t )>(_a, &MemoryModel::selectionChanged, 0))
            return;
    }
}

const QMetaObject *QGBA::MemoryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::MemoryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA11MemoryModelE_t>.strings))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QGBA::MemoryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QGBA::MemoryModel::selectionChanged(uint32_t _t1, uint32_t _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}
QT_WARNING_POP
