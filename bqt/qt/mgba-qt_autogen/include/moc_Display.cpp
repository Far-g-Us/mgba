/****************************************************************************
** Meta object code from reading C++ file 'Display.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/Display.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Display.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA7DisplayE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::Display::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA7DisplayE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::Display",
        "drawingStarted",
        "",
        "showCursor",
        "hideCursor",
        "contentSizeChanged",
        "QSize",
        "stopDrawing",
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
        "showMessage",
        "message"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'drawingStarted'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'showCursor'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'hideCursor'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'contentSizeChanged'
        QtMocHelpers::SignalData<void(const QSize &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 2 },
        }}),
        // Slot 'stopDrawing'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pauseDrawing'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'unpauseDrawing'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'forceDraw'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'lockAspectRatio'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'lockIntegerScaling'
        QtMocHelpers::SlotData<void(bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'interframeBlending'
        QtMocHelpers::SlotData<void(bool)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'showOSDMessages'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'showFrameCounter'
        QtMocHelpers::SlotData<void(bool)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 15 },
        }}),
        // Slot 'filter'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 18 },
        }}),
        // Slot 'swapInterval'
        QtMocHelpers::SlotData<void(int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 20 },
        }}),
        // Slot 'framePosted'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setShaders'
        QtMocHelpers::SlotData<bool(VDir *)>(22, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 23, 2 },
        }}),
        // Slot 'clearShaders'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resizeContext'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'showMessage'
        QtMocHelpers::SlotData<void(const QString &)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Display, qt_meta_tag_ZN4QGBA7DisplayE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::Display::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA7DisplayE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA7DisplayE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA7DisplayE_t>.metaTypes,
    nullptr
} };

void QGBA::Display::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Display *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->drawingStarted(); break;
        case 1: _t->showCursor(); break;
        case 2: _t->hideCursor(); break;
        case 3: _t->contentSizeChanged((*reinterpret_cast<std::add_pointer_t<QSize>>(_a[1]))); break;
        case 4: _t->stopDrawing(); break;
        case 5: _t->pauseDrawing(); break;
        case 6: _t->unpauseDrawing(); break;
        case 7: _t->forceDraw(); break;
        case 8: _t->lockAspectRatio((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->lockIntegerScaling((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->interframeBlending((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->showOSDMessages((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->showFrameCounter((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->filter((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->swapInterval((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->framePosted(); break;
        case 16: { bool _r = _t->setShaders((*reinterpret_cast<std::add_pointer_t<VDir*>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->clearShaders(); break;
        case 18: _t->resizeContext(); break;
        case 19: _t->showMessage((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Display::*)()>(_a, &Display::drawingStarted, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Display::*)()>(_a, &Display::showCursor, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Display::*)()>(_a, &Display::hideCursor, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Display::*)(const QSize & )>(_a, &Display::contentSizeChanged, 3))
            return;
    }
}

const QMetaObject *QGBA::Display::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::Display::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA7DisplayE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGBA::Display::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void QGBA::Display::drawingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGBA::Display::showCursor()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGBA::Display::hideCursor()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGBA::Display::contentSizeChanged(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
