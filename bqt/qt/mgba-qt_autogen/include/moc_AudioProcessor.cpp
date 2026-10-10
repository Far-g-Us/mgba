/****************************************************************************
** Meta object code from reading C++ file 'AudioProcessor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/AudioProcessor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioProcessor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA14AudioProcessorE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::AudioProcessor::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA14AudioProcessorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::AudioProcessor",
        "setInput",
        "",
        "std::shared_ptr<CoreController>",
        "stop",
        "start",
        "pause",
        "setBufferSamples",
        "samples",
        "inputParametersChanged",
        "requestSampleRate"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setInput'
        QtMocHelpers::SlotData<void(std::shared_ptr<CoreController>)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'start'
        QtMocHelpers::SlotData<bool()>(5, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'pause'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setBufferSamples'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'inputParametersChanged'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestSampleRate'
        QtMocHelpers::SlotData<void(unsigned )>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AudioProcessor, qt_meta_tag_ZN4QGBA14AudioProcessorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::AudioProcessor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA14AudioProcessorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA14AudioProcessorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA14AudioProcessorE_t>.metaTypes,
    nullptr
} };

void QGBA::AudioProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AudioProcessor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setInput((*reinterpret_cast<std::add_pointer_t<std::shared_ptr<CoreController>>>(_a[1]))); break;
        case 1: _t->stop(); break;
        case 2: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->pause(); break;
        case 4: _t->setBufferSamples((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->inputParametersChanged(); break;
        case 6: _t->requestSampleRate((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QGBA::AudioProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::AudioProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA14AudioProcessorE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::AudioProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
