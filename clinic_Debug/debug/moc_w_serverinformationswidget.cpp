/****************************************************************************
** Meta object code from reading C++ file 'w_serverinformationswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Clinic_Serwer/w_serverinformationswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'w_serverinformationswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_w_ServerInformationsWidget_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_w_ServerInformationsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_w_ServerInformationsWidget_t qt_meta_stringdata_w_ServerInformationsWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "w_ServerInformationsWidget"
QT_MOC_LITERAL(1, 27, 7), // "refresh"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "w_ServerInformationsWidget\0refresh\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_w_ServerInformationsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void w_ServerInformationsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        w_ServerInformationsWidget *_t = static_cast<w_ServerInformationsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refresh(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject w_ServerInformationsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_w_ServerInformationsWidget.data,
      qt_meta_data_w_ServerInformationsWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *w_ServerInformationsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *w_ServerInformationsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_w_ServerInformationsWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "i_Observer"))
        return static_cast< i_Observer*>(this);
    return QWidget::qt_metacast(_clname);
}

int w_ServerInformationsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
