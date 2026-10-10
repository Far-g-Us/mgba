/****************************************************************************
** Meta object code from reading C++ file 'InputController.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/InputController.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InputController.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA15InputControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::InputController::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA15InputControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::InputController",
        "updated",
        "",
        "profileLoaded",
        "profile",
        "luminanceValueChanged",
        "value",
        "testGamepad",
        "uint32_t",
        "type",
        "update",
        "increaseLuminanceLevel",
        "decreaseLuminanceLevel",
        "setLuminanceLevel",
        "level",
        "setLuminanceValue",
        "uint8_t",
        "loadCamImage",
        "path",
        "setCamImage",
        "QImage",
        "image",
        "setCamera",
        "id",
        "setupCam",
        "teardownCam"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'updated'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'profileLoaded'
        QtMocHelpers::SignalData<void(const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Signal 'luminanceValueChanged'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'testGamepad'
        QtMocHelpers::SlotData<void(uint32_t)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'update'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'increaseLuminanceLevel'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'decreaseLuminanceLevel'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setLuminanceLevel'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 14 },
        }}),
        // Slot 'setLuminanceValue'
        QtMocHelpers::SlotData<void(uint8_t)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 6 },
        }}),
        // Slot 'loadCamImage'
        QtMocHelpers::SlotData<void(const QString &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'setCamImage'
        QtMocHelpers::SlotData<void(const QImage &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Slot 'setCamera'
        QtMocHelpers::SlotData<void(const QByteArray &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 23 },
        }}),
        // Slot 'setupCam'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'teardownCam'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<InputController, qt_meta_tag_ZN4QGBA15InputControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::InputController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA15InputControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA15InputControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA15InputControllerE_t>.metaTypes,
    nullptr
} };

void QGBA::InputController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<InputController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updated(); break;
        case 1: _t->profileLoaded((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->luminanceValueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->testGamepad((*reinterpret_cast<std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 4: _t->update(); break;
        case 5: _t->increaseLuminanceLevel(); break;
        case 6: _t->decreaseLuminanceLevel(); break;
        case 7: _t->setLuminanceLevel((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setLuminanceValue((*reinterpret_cast<std::add_pointer_t<uint8_t>>(_a[1]))); break;
        case 9: _t->loadCamImage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->setCamImage((*reinterpret_cast<std::add_pointer_t<QImage>>(_a[1]))); break;
        case 11: _t->setCamera((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 12: _t->setupCam(); break;
        case 13: _t->teardownCam(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (InputController::*)()>(_a, &InputController::updated, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputController::*)(const QString & )>(_a, &InputController::profileLoaded, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (InputController::*)(int )>(_a, &InputController::luminanceValueChanged, 2))
            return;
    }
}

const QMetaObject *QGBA::InputController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::InputController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA15InputControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::InputController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QGBA::InputController::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGBA::InputController::profileLoaded(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QGBA::InputController::luminanceValueChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
