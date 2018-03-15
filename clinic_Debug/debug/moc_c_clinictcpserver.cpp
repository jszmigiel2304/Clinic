/****************************************************************************
** Meta object code from reading C++ file 'c_clinictcpserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Clinic_Serwer/c_clinictcpserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'c_clinictcpserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_c_ClinicTcpServer_t {
    QByteArrayData data[8];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_c_ClinicTcpServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_c_ClinicTcpServer_t qt_meta_stringdata_c_ClinicTcpServer = {
    {
QT_MOC_LITERAL(0, 0, 17), // "c_ClinicTcpServer"
QT_MOC_LITERAL(1, 18, 17), // "PropertiesChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "MessageChanged"
QT_MOC_LITERAL(4, 52, 3), // "msg"
QT_MOC_LITERAL(5, 56, 4), // "time"
QT_MOC_LITERAL(6, 61, 16), // "UpdateProperties"
QT_MOC_LITERAL(7, 78, 3) // "map"

    },
    "c_ClinicTcpServer\0PropertiesChanged\0"
    "\0MessageChanged\0msg\0time\0UpdateProperties\0"
    "map"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_c_ClinicTcpServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    2,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantMap,    7,

       0        // eod
};

void c_ClinicTcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        c_ClinicTcpServer *_t = static_cast<c_ClinicTcpServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PropertiesChanged(); break;
        case 1: _t->MessageChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->UpdateProperties((*reinterpret_cast< QMap<QString,QVariant>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (c_ClinicTcpServer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&c_ClinicTcpServer::PropertiesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (c_ClinicTcpServer::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&c_ClinicTcpServer::MessageChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject c_ClinicTcpServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_c_ClinicTcpServer.data,
      qt_meta_data_c_ClinicTcpServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *c_ClinicTcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *c_ClinicTcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_c_ClinicTcpServer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "i_Watched"))
        return static_cast< i_Watched*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int c_ClinicTcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void c_ClinicTcpServer::PropertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void c_ClinicTcpServer::MessageChanged(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
