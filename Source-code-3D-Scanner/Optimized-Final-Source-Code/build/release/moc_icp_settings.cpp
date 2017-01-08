/****************************************************************************
** Meta object code from reading C++ file 'icp_settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../icp_settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'icp_settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_icp_settings_t {
    QByteArrayData data[11];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_icp_settings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_icp_settings_t qt_meta_stringdata_icp_settings = {
    {
QT_MOC_LITERAL(0, 0, 12), // "icp_settings"
QT_MOC_LITERAL(1, 13, 24), // "on_leafSize_valueChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "arg1"
QT_MOC_LITERAL(4, 44, 29), // "on_numIterations_valueChanged"
QT_MOC_LITERAL(5, 74, 28), // "on_corrDistance_valueChanged"
QT_MOC_LITERAL(6, 103, 24), // "on_epsilon1_valueChanged"
QT_MOC_LITERAL(7, 128, 24), // "on_epsilon2_valueChanged"
QT_MOC_LITERAL(8, 153, 31), // "on_ransacThreshold_valueChanged"
QT_MOC_LITERAL(9, 185, 31), // "on_smoothingRadius_valueChanged"
QT_MOC_LITERAL(10, 217, 17) // "on_ICPBtn_clicked"

    },
    "icp_settings\0on_leafSize_valueChanged\0"
    "\0arg1\0on_numIterations_valueChanged\0"
    "on_corrDistance_valueChanged\0"
    "on_epsilon1_valueChanged\0"
    "on_epsilon2_valueChanged\0"
    "on_ransacThreshold_valueChanged\0"
    "on_smoothingRadius_valueChanged\0"
    "on_ICPBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_icp_settings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,

       0        // eod
};

void icp_settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        icp_settings *_t = static_cast<icp_settings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_leafSize_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->on_numIterations_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_corrDistance_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_epsilon1_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->on_epsilon2_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_ransacThreshold_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_smoothingRadius_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_ICPBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject icp_settings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_icp_settings.data,
      qt_meta_data_icp_settings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *icp_settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *icp_settings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_icp_settings.stringdata0))
        return static_cast<void*>(const_cast< icp_settings*>(this));
    return QWidget::qt_metacast(_clname);
}

int icp_settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
