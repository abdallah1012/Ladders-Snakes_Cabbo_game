/****************************************************************************
** Meta object code from reading C++ file 'registermenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "registermenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registermenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RegisterMenu_t {
    QByteArrayData data[14];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RegisterMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RegisterMenu_t qt_meta_stringdata_RegisterMenu = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RegisterMenu"
QT_MOC_LITERAL(1, 13, 12), // "RegisterUser"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "GetImg"
QT_MOC_LITERAL(4, 34, 6), // "goBack"
QT_MOC_LITERAL(5, 41, 13), // "CheckPassword"
QT_MOC_LITERAL(6, 55, 6), // "update"
QT_MOC_LITERAL(7, 62, 7), // "findAge"
QT_MOC_LITERAL(8, 70, 12), // "current_date"
QT_MOC_LITERAL(9, 83, 13), // "current_month"
QT_MOC_LITERAL(10, 97, 12), // "current_year"
QT_MOC_LITERAL(11, 110, 10), // "birth_date"
QT_MOC_LITERAL(12, 121, 11), // "birth_month"
QT_MOC_LITERAL(13, 133, 10) // "birth_year"

    },
    "RegisterMenu\0RegisterUser\0\0GetImg\0"
    "goBack\0CheckPassword\0update\0findAge\0"
    "current_date\0current_month\0current_year\0"
    "birth_date\0birth_month\0birth_year"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RegisterMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x0a /* Public */,
       7,    6,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,   11,   12,   13,

       0        // eod
};

void RegisterMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RegisterMenu *_t = static_cast<RegisterMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RegisterUser(); break;
        case 1: _t->GetImg(); break;
        case 2: _t->goBack(); break;
        case 3: { int _r = _t->CheckPassword((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->update(); break;
        case 5: { int _r = _t->findAge((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject RegisterMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RegisterMenu.data,
      qt_meta_data_RegisterMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RegisterMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RegisterMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RegisterMenu.stringdata0))
        return static_cast<void*>(const_cast< RegisterMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int RegisterMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
