/****************************************************************************
** Meta object code from reading C++ file 'Window.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/Window.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Window.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA6WindowE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::Window::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA6WindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::Window",
        "startDrawing",
        "",
        "shutdown",
        "paused",
        "shaderSelectorAdded",
        "ShaderSelector*",
        "setController",
        "CoreController*",
        "controller",
        "selectROM",
        "bootBIOS",
        "selectROMInArchive",
        "addDirToLibrary",
        "selectSave",
        "temporary",
        "selectState",
        "load",
        "selectPatch",
        "scanCard",
        "parseCard",
        "enterFullScreen",
        "exitFullScreen",
        "toggleFullScreen",
        "loadConfig",
        "reloadConfig",
        "saveConfig",
        "loadCamImage",
        "replaceROM",
        "multiplayerChanged",
        "importSharkport",
        "exportSharkport",
        "openSettingsWindow",
        "SettingsView::Page",
        "startVideoLog",
        "openView",
        "QWidget*",
        "widget",
        "showMenu",
        "consoleOpen",
        "gdbOpen",
        "gameStarted",
        "gameStopped",
        "gameCrashed",
        "gameFailed",
        "unimplementedBiosCall",
        "reloadAudioDriver",
        "reloadDisplayDriver",
        "attachDisplay",
        "changeRenderer",
        "tryMakePortable",
        "mustRestart",
        "mustReset",
        "recordFrame",
        "showFPS",
        "focusCheck",
        "updateFrame",
        "updateMute",
        "setLogo",
        "delayedCleanup"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'startDrawing'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'shutdown'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'paused'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'shaderSelectorAdded'
        QtMocHelpers::SignalData<void(ShaderSelector *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Slot 'setController'
        QtMocHelpers::SlotData<void(CoreController *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'selectROM'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bootBIOS'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectROMInArchive'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addDirToLibrary'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'selectSave'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'selectState'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 17 },
        }}),
        // Slot 'selectPatch'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'scanCard'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'parseCard'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'enterFullScreen'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'exitFullScreen'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleFullScreen'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadConfig'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reloadConfig'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveConfig'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'loadCamImage'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'replaceROM'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'multiplayerChanged'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'importSharkport'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'exportSharkport'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openSettingsWindow'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openSettingsWindow'
        QtMocHelpers::SlotData<void(SettingsView::Page)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 33, 2 },
        }}),
        // Slot 'startVideoLog'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openView'
        QtMocHelpers::SlotData<void(QWidget *)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 36, 37 },
        }}),
        // Slot 'showMenu'
        QtMocHelpers::SlotData<void(bool)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'consoleOpen'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'gdbOpen'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'gameStarted'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'gameStopped'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'gameCrashed'
        QtMocHelpers::SlotData<void(const QString &)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'gameFailed'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'unimplementedBiosCall'
        QtMocHelpers::SlotData<void(int)>(45, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'reloadAudioDriver'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reloadDisplayDriver'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'attachDisplay'
        QtMocHelpers::SlotData<void()>(48, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeRenderer'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'tryMakePortable'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'mustRestart'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'mustReset'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'recordFrame'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showFPS'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'focusCheck'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateFrame'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateMute'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setLogo'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'delayedCleanup'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Window, qt_meta_tag_ZN4QGBA6WindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA6WindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA6WindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA6WindowE_t>.metaTypes,
    nullptr
} };

void QGBA::Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Window *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->startDrawing(); break;
        case 1: _t->shutdown(); break;
        case 2: _t->paused((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->shaderSelectorAdded((*reinterpret_cast<std::add_pointer_t<ShaderSelector*>>(_a[1]))); break;
        case 4: _t->setController((*reinterpret_cast<std::add_pointer_t<CoreController*>>(_a[1]))); break;
        case 5: _t->selectROM(); break;
        case 6: _t->bootBIOS(); break;
        case 7: _t->selectROMInArchive(); break;
        case 8: _t->addDirToLibrary(); break;
        case 9: _t->selectSave((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->selectState((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->selectPatch(); break;
        case 12: _t->scanCard(); break;
        case 13: _t->parseCard(); break;
        case 14: _t->enterFullScreen(); break;
        case 15: _t->exitFullScreen(); break;
        case 16: _t->toggleFullScreen(); break;
        case 17: _t->loadConfig(); break;
        case 18: _t->reloadConfig(); break;
        case 19: _t->saveConfig(); break;
        case 20: _t->loadCamImage(); break;
        case 21: _t->replaceROM(); break;
        case 22: _t->multiplayerChanged(); break;
        case 23: _t->importSharkport(); break;
        case 24: _t->exportSharkport(); break;
        case 25: _t->openSettingsWindow(); break;
        case 26: _t->openSettingsWindow((*reinterpret_cast<std::add_pointer_t<SettingsView::Page>>(_a[1]))); break;
        case 27: _t->startVideoLog(); break;
        case 28: _t->openView((*reinterpret_cast<std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 29: _t->showMenu((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->consoleOpen(); break;
        case 31: _t->gdbOpen(); break;
        case 32: _t->gameStarted(); break;
        case 33: _t->gameStopped(); break;
        case 34: _t->gameCrashed((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 35: _t->gameFailed(); break;
        case 36: _t->unimplementedBiosCall((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 37: _t->reloadAudioDriver(); break;
        case 38: _t->reloadDisplayDriver(); break;
        case 39: _t->attachDisplay(); break;
        case 40: _t->changeRenderer(); break;
        case 41: _t->tryMakePortable(); break;
        case 42: _t->mustRestart(); break;
        case 43: _t->mustReset(); break;
        case 44: _t->recordFrame(); break;
        case 45: _t->showFPS(); break;
        case 46: _t->focusCheck(); break;
        case 47: _t->updateFrame(); break;
        case 48: _t->updateMute(); break;
        case 49: _t->setLogo(); break;
        case 50: _t->delayedCleanup(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ShaderSelector* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::startDrawing, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)()>(_a, &Window::shutdown, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(bool )>(_a, &Window::paused, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Window::*)(ShaderSelector * )>(_a, &Window::shaderSelectorAdded, 3))
            return;
    }
}

const QMetaObject *QGBA::Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA6WindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QGBA::Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void QGBA::Window::startDrawing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGBA::Window::shutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGBA::Window::paused(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void QGBA::Window::shaderSelectorAdded(ShaderSelector * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
namespace {
struct qt_meta_tag_ZN4QGBA16WindowBackgroundE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::WindowBackground::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA16WindowBackgroundE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::WindowBackground"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WindowBackground, qt_meta_tag_ZN4QGBA16WindowBackgroundE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::WindowBackground::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA16WindowBackgroundE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA16WindowBackgroundE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA16WindowBackgroundE_t>.metaTypes,
    nullptr
} };

void QGBA::WindowBackground::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowBackground *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QGBA::WindowBackground::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::WindowBackground::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA16WindowBackgroundE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGBA::WindowBackground::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
