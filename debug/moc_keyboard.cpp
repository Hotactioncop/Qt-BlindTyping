/****************************************************************************
** Meta object code from reading C++ file 'keyboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../keyboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Keyboard_t {
    QByteArrayData data[8];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Keyboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Keyboard_t qt_meta_stringdata_Keyboard = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Keyboard"
QT_MOC_LITERAL(1, 9, 8), // "sendWord"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "sendSignal"
QT_MOC_LITERAL(4, 30, 11), // "correctChar"
QT_MOC_LITERAL(5, 42, 12), // "sendProgress"
QT_MOC_LITERAL(6, 55, 9), // "startGame"
QT_MOC_LITERAL(7, 65, 9) // "nextLevel"

    },
    "Keyboard\0sendWord\0\0sendSignal\0correctChar\0"
    "sendProgress\0startGame\0nextLevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Keyboard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   56,    2, 0x0a /* Public */,
       7,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Keyboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Keyboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendWord((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->correctChar((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->sendProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->startGame(); break;
        case 5: _t->nextLevel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Keyboard::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Keyboard::sendWord)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Keyboard::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Keyboard::sendSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Keyboard::*)(uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Keyboard::correctChar)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Keyboard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Keyboard::sendProgress)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Keyboard::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Keyboard.data,
    qt_meta_data_Keyboard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Keyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Keyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Keyboard.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Keyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Keyboard::sendWord(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Keyboard::sendSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Keyboard::correctChar(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Keyboard::sendProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
