/****************************************************************************
** Meta object code from reading C++ file 'w_serverconfigurationdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Clinic_Serwer/w_serverconfigurationdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'w_serverconfigurationdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_w_serverConfigurationDialog_t {
    QByteArrayData data[10];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_w_serverConfigurationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_w_serverConfigurationDialog_t qt_meta_stringdata_w_serverConfigurationDialog = {
    {
QT_MOC_LITERAL(0, 0, 27), // "w_serverConfigurationDialog"
QT_MOC_LITERAL(1, 28, 30), // "listeningOptionGroupBoxClicked"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 15), // "settingsChanged"
QT_MOC_LITERAL(4, 76, 15), // "okButtonPressed"
QT_MOC_LITERAL(5, 92, 18), // "resetButtonPressed"
QT_MOC_LITERAL(6, 111, 18), // "applyButtonPressed"
QT_MOC_LITERAL(7, 130, 10), // "closeEvent"
QT_MOC_LITERAL(8, 141, 12), // "QCloseEvent*"
QT_MOC_LITERAL(9, 154, 1) // "e"

    },
    "w_serverConfigurationDialog\0"
    "listeningOptionGroupBoxClicked\0\0"
    "settingsChanged\0okButtonPressed\0"
    "resetButtonPressed\0applyButtonPressed\0"
    "closeEvent\0QCloseEvent*\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_w_serverConfigurationDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       3,    1,   52,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       4,    0,   58,    2, 0x08 /* Private */,
       5,    0,   59,    2, 0x08 /* Private */,
       6,    0,   60,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void w_serverConfigurationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        w_serverConfigurationDialog *_t = static_cast<w_serverConfigurationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listeningOptionGroupBoxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->settingsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->settingsChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->okButtonPressed(); break;
        case 4: _t->resetButtonPressed(); break;
        case 5: _t->applyButtonPressed(); break;
        case 6: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject w_serverConfigurationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_w_serverConfigurationDialog.data,
      qt_meta_data_w_serverConfigurationDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *w_serverConfigurationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *w_serverConfigurationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_w_serverConfigurationDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "i_Observer"))
        return static_cast< i_Observer*>(this);
    return QDialog::qt_metacast(_clname);
}

int w_serverConfigurationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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