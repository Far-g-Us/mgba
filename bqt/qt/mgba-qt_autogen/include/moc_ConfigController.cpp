/****************************************************************************
** Meta object code from reading C++ file 'ConfigController.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/ConfigController.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConfigController.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA12ConfigOptionE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::ConfigOption::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA12ConfigOptionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::ConfigOption",
        "valueChanged",
        "",
        "QVariant",
        "value",
        "setValue",
        "const char*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(const QVariant &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(unsigned )>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 4 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(const char *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 4 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(const QVariant &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ConfigOption, qt_meta_tag_ZN4QGBA12ConfigOptionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::ConfigOption::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA12ConfigOptionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA12ConfigOptionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA12ConfigOptionE_t>.metaTypes,
    nullptr
} };

void QGBA::ConfigOption::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ConfigOption *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setValue((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 4: _t->setValue((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1]))); break;
        case 5: _t->setValue((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ConfigOption::*)(const QVariant & )>(_a, &ConfigOption::valueChanged, 0))
            return;
    }
}

const QMetaObject *QGBA::ConfigOption::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::ConfigOption::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA12ConfigOptionE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::ConfigOption::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QGBA::ConfigOption::valueChanged(const QVariant & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4QGBA16ConfigControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::ConfigController::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA16ConfigControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::ConfigController",
        "setOption",
        "",
        "const char*",
        "key",
        "value",
        "QVariant",
        "setQtOption",
        "group",
        "setMRU",
        "mru",
        "MRU",
        "setList",
        "QList<QVariant>",
        "list",
        "makePortable",
        "write"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setOption'
        QtMocHelpers::SlotData<void(const char *, bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Bool, 5 },
        }}),
        // Slot 'setOption'
        QtMocHelpers::SlotData<void(const char *, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::Int, 5 },
        }}),
        // Slot 'setOption'
        QtMocHelpers::SlotData<void(const char *, unsigned )>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::UInt, 5 },
        }}),
        // Slot 'setOption'
        QtMocHelpers::SlotData<void(const char *, const char *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 3, 5 },
        }}),
        // Slot 'setOption'
        QtMocHelpers::SlotData<void(const char *, const QVariant &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 6, 5 },
        }}),
        // Slot 'setQtOption'
        QtMocHelpers::SlotData<void(const QString &, const QVariant &, const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { 0x80000000 | 6, 5 }, { QMetaType::QString, 8 },
        }}),
        // Slot 'setQtOption'
        QtMocHelpers::SlotData<void(const QString &, const QVariant &)>(7, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 4 }, { 0x80000000 | 6, 5 },
        }}),
        // Slot 'setMRU'
        QtMocHelpers::SlotData<void(const QStringList &, enum MRU)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 10 }, { 0x80000000 | 11, 2 },
        }}),
        // Slot 'setMRU'
        QtMocHelpers::SlotData<void(const QStringList &)>(9, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QStringList, 10 },
        }}),
        // Slot 'setList'
        QtMocHelpers::SlotData<void(const QString &, const QList<QVariant> &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 8 }, { 0x80000000 | 13, 14 },
        }}),
        // Slot 'makePortable'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'write'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ConfigController, qt_meta_tag_ZN4QGBA16ConfigControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::ConfigController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA16ConfigControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA16ConfigControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA16ConfigControllerE_t>.metaTypes,
    nullptr
} };

void QGBA::ConfigController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ConfigController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setOption((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->setOption((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->setOption((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2]))); break;
        case 3: _t->setOption((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<const char*>>(_a[2]))); break;
        case 4: _t->setOption((*reinterpret_cast<std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 5: _t->setQtOption((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 6: _t->setQtOption((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 7: _t->setMRU((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<enum MRU>>(_a[2]))); break;
        case 8: _t->setMRU((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 9: _t->setList((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QList<QVariant>>>(_a[2]))); break;
        case 10: _t->makePortable(); break;
        case 11: _t->write(); break;
        default: ;
        }
    }
}

const QMetaObject *QGBA::ConfigController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::ConfigController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA16ConfigControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::ConfigController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
