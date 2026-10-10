/****************************************************************************
** Meta object code from reading C++ file 'ShaderSelector.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/ShaderSelector.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShaderSelector.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA14ShaderSelectorE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::ShaderSelector::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA14ShaderSelectorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::ShaderSelector",
        "saveSettingsRequested",
        "",
        "reset",
        "resetToDefault",
        "saveSettings",
        "refreshShaders",
        "clear",
        "revert",
        "selectShader",
        "loadShader",
        "path",
        "saveToSettings",
        "clearShader",
        "buttonPressed",
        "QAbstractButton*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'saveSettingsRequested'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'reset'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resetToDefault'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveSettings'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'refreshShaders'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clear'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'revert'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectShader'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'loadShader'
        QtMocHelpers::SlotData<void(const QString &, bool)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 11 }, { QMetaType::Bool, 12 },
        }}),
        // Slot 'loadShader'
        QtMocHelpers::SlotData<void(const QString &)>(10, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Slot 'clearShader'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'clearShader'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'buttonPressed'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ShaderSelector, qt_meta_tag_ZN4QGBA14ShaderSelectorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::ShaderSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA14ShaderSelectorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA14ShaderSelectorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA14ShaderSelectorE_t>.metaTypes,
    nullptr
} };

void QGBA::ShaderSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ShaderSelector *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->saveSettingsRequested(); break;
        case 1: _t->reset(); break;
        case 2: _t->resetToDefault(); break;
        case 3: _t->saveSettings(); break;
        case 4: _t->refreshShaders(); break;
        case 5: _t->clear(); break;
        case 6: _t->revert(); break;
        case 7: _t->selectShader(); break;
        case 8: _t->loadShader((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 9: _t->loadShader((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->clearShader((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->clearShader(); break;
        case 12: _t->buttonPressed((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ShaderSelector::*)()>(_a, &ShaderSelector::saveSettingsRequested, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShaderSelector::*)()>(_a, &ShaderSelector::reset, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ShaderSelector::*)()>(_a, &ShaderSelector::resetToDefault, 2))
            return;
    }
}

const QMetaObject *QGBA::ShaderSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::ShaderSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA14ShaderSelectorE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QGBA::ShaderSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QGBA::ShaderSelector::saveSettingsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGBA::ShaderSelector::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGBA::ShaderSelector::resetToDefault()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
