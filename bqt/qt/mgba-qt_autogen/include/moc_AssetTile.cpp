/****************************************************************************
** Meta object code from reading C++ file 'AssetTile.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/AssetTile.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetTile.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA9AssetTileE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::AssetTile::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA9AssetTileE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::AssetTile",
        "setPalette",
        "",
        "setBoundary",
        "boundary",
        "set0",
        "set1",
        "selectIndex",
        "setFlip",
        "h",
        "v",
        "selectColor",
        "setMaxTile"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setPalette'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setBoundary'
        QtMocHelpers::SlotData<void(int, int, int)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { QMetaType::Int, 5 }, { QMetaType::Int, 6 },
        }}),
        // Slot 'selectIndex'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setFlip'
        QtMocHelpers::SlotData<void(bool, bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 }, { QMetaType::Bool, 10 },
        }}),
        // Slot 'selectColor'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setMaxTile'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AssetTile, qt_meta_tag_ZN4QGBA9AssetTileE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::AssetTile::staticMetaObject = { {
    QMetaObject::SuperData::link<AssetInfo::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9AssetTileE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9AssetTileE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA9AssetTileE_t>.metaTypes,
    nullptr
} };

void QGBA::AssetTile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AssetTile *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setPalette((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->setBoundary((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->selectIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setFlip((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->selectColor((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setMaxTile((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QGBA::AssetTile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::AssetTile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9AssetTileE_t>.strings))
        return static_cast<void*>(this);
    return AssetInfo::qt_metacast(_clname);
}

int QGBA::AssetTile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AssetInfo::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
