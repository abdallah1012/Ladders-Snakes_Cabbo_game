/****************************************************************************
** Meta object code from reading C++ file 'game1_scene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "game1_scene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game1_scene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_game1_scene_t {
    QByteArrayData data[15];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_game1_scene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_game1_scene_t qt_meta_stringdata_game1_scene = {
    {
QT_MOC_LITERAL(0, 0, 11), // "game1_scene"
QT_MOC_LITERAL(1, 12, 5), // "check"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "players*"
QT_MOC_LITERAL(4, 28, 6), // "player"
QT_MOC_LITERAL(5, 35, 4), // "Move"
QT_MOC_LITERAL(6, 40, 7), // "SetUser"
QT_MOC_LITERAL(7, 48, 1), // "a"
QT_MOC_LITERAL(8, 50, 1), // "b"
QT_MOC_LITERAL(9, 52, 1), // "c"
QT_MOC_LITERAL(10, 54, 1), // "d"
QT_MOC_LITERAL(11, 56, 1), // "z"
QT_MOC_LITERAL(12, 58, 14), // "AddLadderSnake"
QT_MOC_LITERAL(13, 73, 8), // "cellFrom"
QT_MOC_LITERAL(14, 82, 6) // "cellTo"

    },
    "game1_scene\0check\0\0players*\0player\0"
    "Move\0SetUser\0a\0b\0c\0d\0z\0AddLadderSnake\0"
    "cellFrom\0cellTo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_game1_scene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    2,   37,    2, 0x0a /* Public */,
       6,    5,   42,    2, 0x0a /* Public */,
      12,    2,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,

       0        // eod
};

void game1_scene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        game1_scene *_t = static_cast<game1_scene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->check((*reinterpret_cast< players*(*)>(_a[1]))); break;
        case 1: _t->Move((*reinterpret_cast< players*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->SetUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 3: _t->AddLadderSnake((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< players* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< players* >(); break;
            }
            break;
        }
    }
}

const QMetaObject game1_scene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_game1_scene.data,
      qt_meta_data_game1_scene,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *game1_scene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *game1_scene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_game1_scene.stringdata0))
        return static_cast<void*>(const_cast< game1_scene*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int game1_scene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
