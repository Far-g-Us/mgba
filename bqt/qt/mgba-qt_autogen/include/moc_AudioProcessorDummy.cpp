/****************************************************************************
** Meta object code from reading C++ file 'AudioProcessorDummy.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/AudioProcessorDummy.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioProcessorDummy.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA19AudioProcessorDummyE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::AudioProcessorDummy::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA19AudioProcessorDummyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::AudioProcessorDummy",
        "stop",
        "",
        "start",
        "pause",
        "setBufferSamples",
        "samples",
        "inputParametersChanged",
        "requestSampleRate",
        "refresh"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'start'
        QtMocHelpers::SlotData<bool()>(3, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'pause'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setBufferSamples'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'inputParametersChanged'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestSampleRate'
        QtMocHelpers::SlotData<void(unsigned )>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 2 },
        }}),
        // Slot 'refresh'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AudioProcessorDummy, qt_meta_tag_ZN4QGBA19AudioProcessorDummyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::AudioProcessorDummy::staticMetaObject = { {
    QMetaObject::SuperData::link<AudioProcessor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA19AudioProcessorDummyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA19AudioProcessorDummyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA19AudioProcessorDummyE_t>.metaTypes,
    nullptr
} };

void QGBA::AudioProcessorDummy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AudioProcessorDummy *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->stop(); break;
        case 1: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->pause(); break;
        case 3: _t->setBufferSamples((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->inputParametersChanged(); break;
        case 5: _t->requestSampleRate((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 6: _t->refresh(); break;
        default: ;
        }
    }
}

const QMetaObject *QGBA::AudioProcessorDummy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::AudioProcessorDummy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA19AudioProcessorDummyE_t>.strings))
        return static_cast<void*>(this);
    return AudioProcessor::qt_metacast(_clname);
}

int QGBA::AudioProcessorDummy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioProcessor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
