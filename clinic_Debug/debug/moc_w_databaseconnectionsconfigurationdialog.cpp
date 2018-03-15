/****************************************************************************
** Meta object code from reading C++ file 'w_databaseconnectionsconfigurationdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Clinic_Serwer/w_databaseconnectionsconfigurationdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'w_databaseconnectionsconfigurationdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_w_DatabaseConnectionsConfigurationDialog_t {
    QByteArrayData data[9];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_w_DatabaseConnectionsConfigurationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_w_DatabaseConnectionsConfigurationDialog_t qt_meta_stringdata_w_DatabaseConnectionsConfigurationDialog = {
    {
QT_MOC_LITERAL(0, 0, 40), // "w_DatabaseConnectionsConfigur..."
QT_MOC_LITERAL(1, 41, 15), // "settingsChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 15), // "okButtonPressed"
QT_MOC_LITERAL(4, 74, 18), // "resetButtonPressed"
QT_MOC_LITERAL(5, 93, 18), // "applyButtonPressed"
QT_MOC_LITERAL(6, 112, 10), // "closeEvent"
QT_MOC_LITERAL(7, 123, 12), // "QCloseEvent*"
QT_MOC_LITERAL(8, 136, 1) // "e"

    },
    "w_DatabaseConnectionsConfigurationDialog\0"
    "settingsChanged\0\0okButtonPressed\0"
    "resetButtonPressed\0applyButtonPressed\0"
    "closeEvent\0QCloseEvent*\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_w_DatabaseConnectionsConfigurationDialog[] = {

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
       1,    1,   44,    2, 0x08 /* Private */,
       1,    1,   47,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void w_DatabaseConnectionsConfigurationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        w_DatabaseConnectionsConfigurationDialog *_t = static_cast<w_DatabaseConnectionsConfigurationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->settingsChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->okButtonPressed(); break;
        case 3: _t->resetButtonPressed(); break;
        case 4: _t->applyButtonPressed(); break;
        case 5: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject w_DatabaseConnectionsConfigurationDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_w_DatabaseConnectionsConfigurationDialog.data,
      qt_meta_data_w_DatabaseConnectionsConfigurationDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *w_DatabaseConnectionsConfigurationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *w_DatabaseConnectionsConfigurationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_w_DatabaseConnectionsConfigurationDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "i_Observer"))
        return static_cast< i_Observer*>(this);
    return QDialog::qt_metacast(_clname);
}

int w_DatabaseConnectionsConfigurationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
