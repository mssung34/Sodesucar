/****************************************************************************
** Meta object code from reading C++ file 'car.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Sodesucar_serv/car.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'car.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_car_t {
    QByteArrayData data[9];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_car_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_car_t qt_meta_stringdata_car = {
    {
QT_MOC_LITERAL(0, 0, 3), // "car"
QT_MOC_LITERAL(1, 4, 18), // "on_out_btn_clicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 18), // "on_fix_btn_clicked"
QT_MOC_LITERAL(4, 43, 14), // "on_all_clicked"
QT_MOC_LITERAL(5, 58, 19), // "on_gasoline_clicked"
QT_MOC_LITERAL(6, 78, 16), // "on_disel_clicked"
QT_MOC_LITERAL(7, 95, 15), // "on_elec_clicked"
QT_MOC_LITERAL(8, 111, 14) // "on_lpg_clicked"

    },
    "car\0on_out_btn_clicked\0\0on_fix_btn_clicked\0"
    "on_all_clicked\0on_gasoline_clicked\0"
    "on_disel_clicked\0on_elec_clicked\0"
    "on_lpg_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_car[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void car::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<car *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_out_btn_clicked(); break;
        case 1: _t->on_fix_btn_clicked(); break;
        case 2: _t->on_all_clicked(); break;
        case 3: _t->on_gasoline_clicked(); break;
        case 4: _t->on_disel_clicked(); break;
        case 5: _t->on_elec_clicked(); break;
        case 6: _t->on_lpg_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject car::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_car.data,
    qt_meta_data_car,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *car::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *car::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_car.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int car::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
