/****************************************************************************
** Meta object code from reading C++ file 'Bindings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Bindings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Bindings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Time_t {
    QByteArrayData data[8];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Time_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Time_t qt_meta_stringdata_Time = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Time"
QT_MOC_LITERAL(1, 5, 11), // "hourChanged"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 13), // "minuteChanged"
QT_MOC_LITERAL(4, 32, 13), // "secondChanged"
QT_MOC_LITERAL(5, 46, 4), // "hour"
QT_MOC_LITERAL(6, 51, 6), // "minute"
QT_MOC_LITERAL(7, 58, 6) // "second"

    },
    "Time\0hourChanged\0\0minuteChanged\0"
    "secondChanged\0hour\0minute\0second"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Time[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::UInt, 0x00495801,
       6, QMetaType::UInt, 0x00495801,
       7, QMetaType::UInt, 0x00495801,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Time::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Time *_t = static_cast<Time *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hourChanged(); break;
        case 1: _t->minuteChanged(); break;
        case 2: _t->secondChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Time::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Time::hourChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Time::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Time::minuteChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Time::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Time::secondChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Time *_t = static_cast<Time *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->hour(); break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->minute(); break;
        case 2: *reinterpret_cast< quint32*>(_v) = _t->second(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject Time::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Time.data,
      qt_meta_data_Time,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Time::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Time::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Time.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Time::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Time::hourChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Time::minuteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Time::secondChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
