/****************************************************************************
** Meta object code from reading C++ file 'w_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Clinic_Serwer/w_mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'w_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_w_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_w_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_w_MainWindow_t qt_meta_stringdata_w_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "w_MainWindow"
QT_MOC_LITERAL(1, 13, 17), // "PropertiesChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "refresh"
QT_MOC_LITERAL(4, 40, 22), // "changeStatusBarMessage"
QT_MOC_LITERAL(5, 63, 3), // "msg"
QT_MOC_LITERAL(6, 67, 4), // "time"
QT_MOC_LITERAL(7, 72, 34), // "on_actionServerConfigure_trig..."
QT_MOC_LITERAL(8, 107, 30), // "on_actionServerStart_triggered"
QT_MOC_LITERAL(9, 138, 29), // "on_actionServerStop_triggered"
QT_MOC_LITERAL(10, 168, 34), // "on_actionWindowConfigure_trig..."
QT_MOC_LITERAL(11, 203, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(12, 227, 21), // "on_trayIcon_activated"
QT_MOC_LITERAL(13, 249, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(14, 283, 6), // "reason"
QT_MOC_LITERAL(15, 290, 24), // "on_actionClose_triggered"
QT_MOC_LITERAL(16, 315, 36) // "on_actionDataBaseConfigure_tr..."

    },
    "w_MainWindow\0PropertiesChanged\0\0refresh\0"
    "changeStatusBarMessage\0msg\0time\0"
    "on_actionServerConfigure_triggered\0"
    "on_actionServerStart_triggered\0"
    "on_actionServerStop_triggered\0"
    "on_actionWindowConfigure_triggered\0"
    "on_actionOpen_triggered\0on_trayIcon_activated\0"
    "QSystemTrayIcon::ActivationReason\0"
    "reason\0on_actionClose_triggered\0"
    "on_actionDataBaseConfigure_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_w_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x0a /* Public */,
       4,    2,   71,    2, 0x0a /* Public */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void w_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        w_MainWindow *_t = static_cast<w_MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PropertiesChanged(); break;
        case 1: _t->refresh(); break;
        case 2: _t->changeStatusBarMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_actionServerConfigure_triggered(); break;
        case 4: _t->on_actionServerStart_triggered(); break;
        case 5: _t->on_actionServerStop_triggered(); break;
        case 6: _t->on_actionWindowConfigure_triggered(); break;
        case 7: _t->on_actionOpen_triggered(); break;
        case 8: _t->on_trayIcon_activated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 9: _t->on_actionClose_triggered(); break;
        case 10: _t->on_actionDataBaseConfigure_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (w_MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&w_MainWindow::PropertiesChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject w_MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_w_MainWindow.data,
      qt_meta_data_w_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *w_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *w_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_w_MainWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "i_Watched"))
        return static_cast< i_Watched*>(this);
    if (!strcmp(_clname, "i_Observer"))
        return static_cast< i_Observer*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int w_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void w_MainWindow::PropertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
