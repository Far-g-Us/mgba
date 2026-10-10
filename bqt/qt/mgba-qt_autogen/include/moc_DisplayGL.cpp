/****************************************************************************
** Meta object code from reading C++ file 'DisplayGL.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/DisplayGL.h"
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DisplayGL.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA9mGLWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::mGLWidget::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA9mGLWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::mGLWidget"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<mGLWidget, qt_meta_tag_ZN4QGBA9mGLWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::mGLWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9mGLWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9mGLWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA9mGLWidgetE_t>.metaTypes,
    nullptr
} };

void QGBA::mGLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<mGLWidget *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QGBA::mGLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::mGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9mGLWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int QGBA::mGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_tag_ZN4QGBA9DisplayGLE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::DisplayGL::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA9DisplayGLE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::DisplayGL",
        "stopDrawing",
        "",
        "pauseDrawing",
        "unpauseDrawing",
        "forceDraw",
        "lockAspectRatio",
        "lock",
        "lockIntegerScaling",
        "interframeBlending",
        "enable",
        "showOSDMessages",
        "showFrameCounter",
        "filter",
        "swapInterval",
        "interval",
        "framePosted",
        "setShaders",
        "VDir*",
        "clearShaders",
        "resizeContext",
        "setVideoScale",
        "scale",
        "setBackgroundImage",
        "QImage",
        "setContentSize",
        "QSize"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'stopDrawing'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pauseDrawing'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'unpauseDrawing'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'forceDraw'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'lockAspectRatio'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'lockIntegerScaling'
        QtMocHelpers::SlotData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'interframeBlending'
        QtMocHelpers::SlotData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'showOSDMessages'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'showFrameCounter'
        QtMocHelpers::SlotData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'filter'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Slot 'swapInterval'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 },
        }}),
        // Slot 'framePosted'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setShaders'
        QtMocHelpers::SlotData<bool(VDir *)>(17, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 18, 2 },
        }}),
        // Slot 'clearShaders'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resizeContext'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setVideoScale'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'setBackgroundImage'
        QtMocHelpers::SlotData<void(const QImage &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 24, 2 },
        }}),
        // Slot 'setContentSize'
        QtMocHelpers::SlotData<void(const QSize &)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 26, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DisplayGL, qt_meta_tag_ZN4QGBA9DisplayGLE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::DisplayGL::staticMetaObject = { {
    QMetaObject::SuperData::link<Display::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9DisplayGLE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9DisplayGLE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA9DisplayGLE_t>.metaTypes,
    nullptr
} };

void QGBA::DisplayGL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DisplayGL *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->stopDrawing(); break;
        case 1: _t->pauseDrawing(); break;
        case 2: _t->unpauseDrawing(); break;
        case 3: _t->forceDraw(); break;
        case 4: _t->lockAspectRatio((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->lockIntegerScaling((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->interframeBlending((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->showOSDMessages((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->showFrameCounter((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->filter((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->swapInterval((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->framePosted(); break;
        case 12: { bool _r = _t->setShaders((*reinterpret_cast<std::add_pointer_t<VDir*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->clearShaders(); break;
        case 14: _t->resizeContext(); break;
        case 15: _t->setVideoScale((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->setBackgroundImage((*reinterpret_cast<std::add_pointer_t<QImage>>(_a[1]))); break;
        case 17: _t->setContentSize((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QGBA::DisplayGL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::DisplayGL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9DisplayGLE_t>.strings))
        return static_cast<void*>(this);
    return Display::qt_metacast(_clname);
}

int QGBA::DisplayGL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Display::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
namespace {
struct qt_meta_tag_ZN4QGBA9PainterGLE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::PainterGL::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA9PainterGLE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::PainterGL",
        "created",
        "",
        "started",
        "texSwapped",
        "contentSizeChanged",
        "QSize",
        "create",
        "destroy",
        "forceDraw",
        "draw",
        "start",
        "pause",
        "unpause",
        "resize",
        "size",
        "setMaximumSize",
        "setMaximumScale",
        "scale",
        "lockAspectRatio",
        "lock",
        "lockIntegerScaling",
        "interframeBlending",
        "enable",
        "showOSD",
        "showFrameCounter",
        "filter",
        "swapInterval",
        "interval",
        "resizeContext",
        "setBackgroundImage",
        "QImage",
        "setShaders",
        "VDir*",
        "clearShaders",
        "shaders",
        "VideoShader*",
        "doStop"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'created'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'started'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'texSwapped'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'contentSizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Slot 'create'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'destroy'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'forceDraw'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'draw'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'start'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pause'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'unpause'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resize'
        QtMocHelpers::SlotData<void(const QSize &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 15 },
        }}),
        // Slot 'setMaximumSize'
        QtMocHelpers::SlotData<void(const QSize &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 15 },
        }}),
        // Slot 'setMaximumScale'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Slot 'lockAspectRatio'
        QtMocHelpers::SlotData<void(bool)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 20 },
        }}),
        // Slot 'lockIntegerScaling'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 20 },
        }}),
        // Slot 'interframeBlending'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'showOSD'
        QtMocHelpers::SlotData<void(bool)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'showFrameCounter'
        QtMocHelpers::SlotData<void(bool)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'filter'
        QtMocHelpers::SlotData<void(bool)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 26 },
        }}),
        // Slot 'swapInterval'
        QtMocHelpers::SlotData<void(int)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 28 },
        }}),
        // Slot 'resizeContext'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setBackgroundImage'
        QtMocHelpers::SlotData<void(const QImage &)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 31, 2 },
        }}),
        // Slot 'setShaders'
        QtMocHelpers::SlotData<bool(VDir *)>(32, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 33, 2 },
        }}),
        // Slot 'clearShaders'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'shaders'
        QtMocHelpers::SlotData<VideoShader *()>(35, 2, QMC::AccessPublic, 0x80000000 | 36),
        // Slot 'doStop'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PainterGL, qt_meta_tag_ZN4QGBA9PainterGLE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::PainterGL::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9PainterGLE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9PainterGLE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA9PainterGLE_t>.metaTypes,
    nullptr
} };

void QGBA::PainterGL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PainterGL *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->created(); break;
        case 1: _t->started(); break;
        case 2: _t->texSwapped(); break;
        case 3: _t->contentSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 4: _t->create(); break;
        case 5: _t->destroy(); break;
        case 6: _t->forceDraw(); break;
        case 7: _t->draw(); break;
        case 8: _t->start(); break;
        case 9: _t->pause(); break;
        case 10: _t->unpause(); break;
        case 11: _t->resize((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 12: _t->setMaximumSize((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 13: _t->setMaximumScale((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->lockAspectRatio((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->lockIntegerScaling((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->interframeBlending((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->showOSD((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->showFrameCounter((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->filter((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 20: _t->swapInterval((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->resizeContext(); break;
        case 22: _t->setBackgroundImage((*reinterpret_cast<std::add_pointer_t<QImage>>(_a[1]))); break;
        case 23: { bool _r = _t->setShaders((*reinterpret_cast<std::add_pointer_t<VDir*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->clearShaders(); break;
        case 25: { VideoShader* _r = _t->shaders();
            if (_a[0]) *reinterpret_cast<VideoShader**>(_a[0]) = std::move(_r); }  break;
        case 26: _t->doStop(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PainterGL::*)()>(_a, &PainterGL::created, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PainterGL::*)()>(_a, &PainterGL::started, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PainterGL::*)()>(_a, &PainterGL::texSwapped, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PainterGL::*)(const QSize & )>(_a, &PainterGL::contentSizeChanged, 3))
            return;
    }
}

const QMetaObject *QGBA::PainterGL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::PainterGL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA9PainterGLE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::PainterGL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void QGBA::PainterGL::created()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGBA::PainterGL::started()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGBA::PainterGL::texSwapped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGBA::PainterGL::contentSizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
