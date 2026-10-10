/****************************************************************************
** Meta object code from reading C++ file 'ForwarderGenerator3DS.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/ForwarderGenerator3DS.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ForwarderGenerator3DS.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA21ForwarderGenerator3DSE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::ForwarderGenerator3DS::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA21ForwarderGenerator3DSE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::ForwarderGenerator3DS",
        "extractCia",
        "",
        "extractCxi",
        "extractExefs",
        "processCxi",
        "prepareRomfs",
        "buildRomfs",
        "buildSmdh",
        "buildBanner",
        "buildExefs",
        "buildCxi",
        "buildCia",
        "cleanup"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'extractCia'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'extractCxi'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'extractExefs'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'processCxi'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'prepareRomfs'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'buildRomfs'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'buildSmdh'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'buildBanner'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'buildExefs'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'buildCxi'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'buildCia'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'cleanup'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ForwarderGenerator3DS, qt_meta_tag_ZN4QGBA21ForwarderGenerator3DSE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::ForwarderGenerator3DS::staticMetaObject = { {
    QMetaObject::SuperData::link<ForwarderGenerator::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA21ForwarderGenerator3DSE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA21ForwarderGenerator3DSE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA21ForwarderGenerator3DSE_t>.metaTypes,
    nullptr
} };

void QGBA::ForwarderGenerator3DS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ForwarderGenerator3DS *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->extractCia(); break;
        case 1: _t->extractCxi(); break;
        case 2: _t->extractExefs(); break;
        case 3: _t->processCxi(); break;
        case 4: _t->prepareRomfs(); break;
        case 5: _t->buildRomfs(); break;
        case 6: _t->buildSmdh(); break;
        case 7: _t->buildBanner(); break;
        case 8: _t->buildExefs(); break;
        case 9: _t->buildCxi(); break;
        case 10: _t->buildCia(); break;
        case 11: _t->cleanup(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *QGBA::ForwarderGenerator3DS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::ForwarderGenerator3DS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA21ForwarderGenerator3DSE_t>.strings))
        return static_cast<void*>(this);
    return ForwarderGenerator::qt_metacast(_clname);
}

int QGBA::ForwarderGenerator3DS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ForwarderGenerator::qt_metacall(_c, _id, _a);
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
