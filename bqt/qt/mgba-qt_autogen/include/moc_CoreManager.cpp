/****************************************************************************
** Meta object code from reading C++ file 'CoreManager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/platform/qt/CoreManager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CoreManager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4QGBA11CoreManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto QGBA::CoreManager::qt_create_metaobjectdata<qt_meta_tag_ZN4QGBA11CoreManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGBA::CoreManager",
        "coreLoaded",
        "",
        "CoreController*",
        "loadGame",
        "path",
        "VFile*",
        "vf",
        "base",
        "loadBIOS",
        "platform"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'coreLoaded'
        QtMocHelpers::SignalData<void(CoreController *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
        // Slot 'loadGame'
        QtMocHelpers::SlotData<CoreController *(const QString &)>(4, 2, QMC::AccessPublic, 0x80000000 | 3, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'loadGame'
        QtMocHelpers::SlotData<CoreController *(VFile *, const QString &, const QString &)>(4, 2, QMC::AccessPublic, 0x80000000 | 3, {{
            { 0x80000000 | 6, 7 }, { QMetaType::QString, 5 }, { QMetaType::QString, 8 },
        }}),
        // Slot 'loadBIOS'
        QtMocHelpers::SlotData<CoreController *(int, const QString &)>(9, 2, QMC::AccessPublic, 0x80000000 | 3, {{
            { QMetaType::Int, 10 }, { QMetaType::QString, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<CoreManager, qt_meta_tag_ZN4QGBA11CoreManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGBA::CoreManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA11CoreManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA11CoreManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN4QGBA11CoreManagerE_t>.metaTypes,
    nullptr
} };

void QGBA::CoreManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CoreManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->coreLoaded((*reinterpret_cast<std::add_pointer_t<CoreController*>>(_a[1]))); break;
        case 1: { CoreController* _r = _t->loadGame((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast<CoreController**>(_a[0]) = std::move(_r); }  break;
        case 2: { CoreController* _r = _t->loadGame((*reinterpret_cast<std::add_pointer_t<VFile*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast<CoreController**>(_a[0]) = std::move(_r); }  break;
        case 3: { CoreController* _r = _t->loadBIOS((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast<CoreController**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CoreManager::*)(CoreController * )>(_a, &CoreManager::coreLoaded, 0))
            return;
    }
}

const QMetaObject *QGBA::CoreManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGBA::CoreManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN4QGBA11CoreManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGBA::CoreManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QGBA::CoreManager::coreLoaded(CoreController * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
