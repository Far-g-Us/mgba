/****************************************************************************
** Meta object code from reading C++ file 'KeyEditor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/KeyEditor.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KeyEditor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA9KeyEditorE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::KeyEditor::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA9KeyEditorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::KeyEditor",
        "valueChanged",
        "",
        "key",
        "axisChanged",
        "axis",
        "direction",
        "hatChanged",
        "hat",
        "setValue",
        "setValueKey",
        "setValueButton",
        "button",
        "setValueAxis",
        "GamepadAxisEvent::Direction",
        "value",
        "setValueHat",
        "GamepadHatEvent::Direction",
        "clearButton",
        "clearAxis",
        "clearHat"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'valueChanged'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'axisChanged'
        QtMocHelpers::SignalData<void(int, int)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 }, { QMetaType::Int, 6 },
        }}),
        // Signal 'hatChanged'
        QtMocHelpers::SignalData<void(int, int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 }, { QMetaType::Int, 6 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'setValueKey'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'setValueButton'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 12 },
        }}),
        // Slot 'setValueAxis'
        QtMocHelpers::SlotData<void(int, GamepadAxisEvent::Direction)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 5 }, { 0x80000000 | 14, 15 },
        }}),
        // Slot 'setValueHat'
        QtMocHelpers::SlotData<void(int, GamepadHatEvent::Direction)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 }, { 0x80000000 | 17, 15 },
        }}),
        // Slot 'clearButton'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearAxis'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearHat'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KeyEditor, qt_meta_tag_ZN4QGBA9KeyEditorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::KeyEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9KeyEditorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9KeyEditorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA9KeyEditorE_t>.metaTypes,
    nullptr
} };

void QGBA::KeyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KeyEditor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->axisChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->hatChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->setValue((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setValueKey((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setValueButton((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setValueAxis((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<GamepadAxisEvent::Direction>>(_a[2]))); break;
        case 7: _t->setValueHat((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<GamepadHatEvent::Direction>>(_a[2]))); break;
        case 8: _t->clearButton(); break;
        case 9: _t->clearAxis(); break;
        case 10: _t->clearHat(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (KeyEditor::*)(int )>(_a, &KeyEditor::valueChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (KeyEditor::*)(int , int )>(_a, &KeyEditor::axisChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (KeyEditor::*)(int , int )>(_a, &KeyEditor::hatChanged, 2))
            return;
    }
}

const QMetaObject *QGBA::KeyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::KeyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9KeyEditorE_t>.strings))
        return static_cast<void*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int QGBA::KeyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QGBA::KeyEditor::valueChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QGBA::KeyEditor::axisChanged(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void QGBA::KeyEditor::hatChanged(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
QT_WARNING_POP
