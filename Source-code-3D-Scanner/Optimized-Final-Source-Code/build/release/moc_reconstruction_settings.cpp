/****************************************************************************
** Meta object code from reading C++ file 'reconstruction_settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../reconstruction_settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reconstruction_settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_reconstruction_settings_t {
    QByteArrayData data[13];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_reconstruction_settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_reconstruction_settings_t qt_meta_stringdata_reconstruction_settings = {
    {
QT_MOC_LITERAL(0, 0, 23), // "reconstruction_settings"
QT_MOC_LITERAL(1, 24, 28), // "on_searchRadius_valueChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 4), // "arg1"
QT_MOC_LITERAL(4, 59, 29), // "on_densityAdjust_valueChanged"
QT_MOC_LITERAL(5, 89, 32), // "on_nearestNeighbors_valueChanged"
QT_MOC_LITERAL(6, 122, 28), // "on_surfaceAngle_valueChanged"
QT_MOC_LITERAL(7, 151, 32), // "on_minTriangleAngle_valueChanged"
QT_MOC_LITERAL(8, 184, 32), // "on_maxTriangleAngle_valueChanged"
QT_MOC_LITERAL(9, 217, 28), // "on_normalConsistency_toggled"
QT_MOC_LITERAL(10, 246, 7), // "checked"
QT_MOC_LITERAL(11, 254, 20), // "on_greedyBtn_clicked"
QT_MOC_LITERAL(12, 275, 21) // "on_poissonBtn_clicked"

    },
    "reconstruction_settings\0"
    "on_searchRadius_valueChanged\0\0arg1\0"
    "on_densityAdjust_valueChanged\0"
    "on_nearestNeighbors_valueChanged\0"
    "on_surfaceAngle_valueChanged\0"
    "on_minTriangleAngle_valueChanged\0"
    "on_maxTriangleAngle_valueChanged\0"
    "on_normalConsistency_toggled\0checked\0"
    "on_greedyBtn_clicked\0on_poissonBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_reconstruction_settings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       5,    1,   65,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       7,    1,   71,    2, 0x08 /* Private */,
       8,    1,   74,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void reconstruction_settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        reconstruction_settings *_t = static_cast<reconstruction_settings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_searchRadius_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->on_densityAdjust_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->on_nearestNeighbors_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_surfaceAngle_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_minTriangleAngle_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_maxTriangleAngle_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_normalConsistency_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_greedyBtn_clicked(); break;
        case 8: _t->on_poissonBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject reconstruction_settings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_reconstruction_settings.data,
      qt_meta_data_reconstruction_settings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *reconstruction_settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *reconstruction_settings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_reconstruction_settings.stringdata0))
        return static_cast<void*>(const_cast< reconstruction_settings*>(this));
    return QWidget::qt_metacast(_clname);
}

int reconstruction_settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
