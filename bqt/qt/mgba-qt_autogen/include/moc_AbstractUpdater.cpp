/****************************************************************************
** Meta object code from reading C++ file 'AbstractUpdater.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/AbstractUpdater.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractUpdater.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA15AbstractUpdaterE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::AbstractUpdater::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA15AbstractUpdaterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::AbstractUpdater",
        "updateAvailable",
        "",
        "updateDone",
        "updateProgress",
        "done",
        "checkUpdate",
        "downloadUpdate",
        "progress",
        "max"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'updateAvailable'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'updateDone'
        QtMocHelpers::SignalData<void(bool)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'updateProgress'
        QtMocHelpers::SignalData<void(float)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 5 },
        }}),
        // Slot 'checkUpdate'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'downloadUpdate'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'progress'
        QtMocHelpers::SlotData<void(qint64, qint64)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 8 }, { QMetaType::LongLong, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AbstractUpdater, qt_meta_tag_ZN4QGBA15AbstractUpdaterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::AbstractUpdater::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA15AbstractUpdaterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA15AbstractUpdaterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA15AbstractUpdaterE_t>.metaTypes,
    nullptr
} };

void QGBA::AbstractUpdater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AbstractUpdater *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateAvailable((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->updateDone((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->updateProgress((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 3: _t->checkUpdate(); break;
        case 4: _t->downloadUpdate(); break;
        case 5: _t->progress((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AbstractUpdater::*)(bool )>(_a, &AbstractUpdater::updateAvailable, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractUpdater::*)(bool )>(_a, &AbstractUpdater::updateDone, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AbstractUpdater::*)(float )>(_a, &AbstractUpdater::updateProgress, 2))
            return;
    }
}

const QMetaObject *QGBA::AbstractUpdater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::AbstractUpdater::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA15AbstractUpdaterE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::AbstractUpdater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QGBA::AbstractUpdater::updateAvailable(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QGBA::AbstractUpdater::updateDone(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QGBA::AbstractUpdater::updateProgress(float _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}
QT_WARNING_POP
