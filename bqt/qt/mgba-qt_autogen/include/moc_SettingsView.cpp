/****************************************************************************
** Meta object code from reading C++ file 'SettingsView.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/SettingsView.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsView.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA12SettingsViewE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::SettingsView::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA12SettingsViewE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::SettingsView",
        "biosLoaded",
        "",
        "platform",
        "audioDriverChanged",
        "displayDriverChanged",
        "cameraDriverChanged",
        "cameraChanged",
        "videoRendererChanged",
        "pathsChanged",
        "languageChanged",
        "libraryCleared",
        "saveSettingsRequested",
        "openAutorunScripts",
        "selectPage",
        "Page",
        "setShaderSelector",
        "ShaderSelector*",
        "shaderSelector",
        "selectBios",
        "QLineEdit*",
        "selectPath",
        "QCheckBox*",
        "selectImage",
        "updateConfig",
        "reloadConfig",
        "updateChecked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'biosLoaded'
        QtMocHelpers::SignalData<void(int, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::QString, 2 },
        }}),
        // Signal 'audioDriverChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'displayDriverChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cameraDriverChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'cameraChanged'
        QtMocHelpers::SignalData<void(const QByteArray &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 2 },
        }}),
        // Signal 'videoRendererChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pathsChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'languageChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'libraryCleared'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'saveSettingsRequested'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'openAutorunScripts'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectPage'
        QtMocHelpers::SlotData<void(enum Page)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 2 },
        }}),
        // Slot 'setShaderSelector'
        QtMocHelpers::SlotData<void(ShaderSelector *)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'selectBios'
        QtMocHelpers::SlotData<void(QLineEdit *)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 20, 2 },
        }}),
        // Slot 'selectPath'
        QtMocHelpers::SlotData<void(QLineEdit *, QCheckBox *)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 20, 2 }, { 0x80000000 | 22, 2 },
        }}),
        // Slot 'selectImage'
        QtMocHelpers::SlotData<void(QLineEdit *)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 20, 2 },
        }}),
        // Slot 'updateConfig'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reloadConfig'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateChecked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SettingsView, qt_meta_tag_ZN4QGBA12SettingsViewE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::SettingsView::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA12SettingsViewE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA12SettingsViewE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA12SettingsViewE_t>.metaTypes,
    nullptr
} };

void QGBA::SettingsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SettingsView *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->biosLoaded((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->audioDriverChanged(); break;
        case 2: _t->displayDriverChanged(); break;
        case 3: _t->cameraDriverChanged(); break;
        case 4: _t->cameraChanged((*reinterpret_cast<std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 5: _t->videoRendererChanged(); break;
        case 6: _t->pathsChanged(); break;
        case 7: _t->languageChanged(); break;
        case 8: _t->libraryCleared(); break;
        case 9: _t->saveSettingsRequested(); break;
        case 10: _t->openAutorunScripts(); break;
        case 11: _t->selectPage((*reinterpret_cast<std::add_pointer_t<enum Page>>(_a[1]))); break;
        case 12: _t->setShaderSelector((*reinterpret_cast<std::add_pointer_t<ShaderSelector*>>(_a[1]))); break;
        case 13: _t->selectBios((*reinterpret_cast<std::add_pointer_t<QLineEdit*>>(_a[1]))); break;
        case 14: _t->selectPath((*reinterpret_cast<std::add_pointer_t<QLineEdit*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QCheckBox*>>(_a[2]))); break;
        case 15: _t->selectImage((*reinterpret_cast<std::add_pointer_t<QLineEdit*>>(_a[1]))); break;
        case 16: _t->updateConfig(); break;
        case 17: _t->reloadConfig(); break;
        case 18: _t->updateChecked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ShaderSelector* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SettingsView::*)(int , const QString & )>(_a, &SettingsView::biosLoaded, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsView::*)()>(_a, &SettingsView::audioDriverChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsView::*)()>(_a, &SettingsView::displayDriverChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsView::*)()>(_a, &SettingsView::cameraDriverChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsView::*)(const QByteArray & )>(_a, &SettingsView::cameraChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsView::*)()>(_a, &SettingsView::videoRendererChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsView::*)()>(_a, &SettingsView::pathsChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsView::*)()>(_a, &SettingsView::languageChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsView::*)()>(_a, &SettingsView::libraryCleared, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsView::*)()>(_a, &SettingsView::saveSettingsRequested, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (SettingsView::*)()>(_a, &SettingsView::openAutorunScripts, 10))
            return;
    }
}

const QMetaObject *QGBA::SettingsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::SettingsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA12SettingsViewE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QGBA::SettingsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void QGBA::SettingsView::biosLoaded(int _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QGBA::SettingsView::audioDriverChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGBA::SettingsView::displayDriverChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGBA::SettingsView::cameraDriverChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGBA::SettingsView::cameraChanged(const QByteArray & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void QGBA::SettingsView::videoRendererChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QGBA::SettingsView::pathsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QGBA::SettingsView::languageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QGBA::SettingsView::libraryCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QGBA::SettingsView::saveSettingsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void QGBA::SettingsView::openAutorunScripts()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
