#-------------------------------------------------
#
# Project created by QtCreator 2018-01-28T13:48:23
#
#-------------------------------------------------

QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Clinic_Serwer
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        w_mainwindow.cpp \
    c_clinictcpserver.cpp \
    w_serverconfigurationdialog.cpp \
    i_observer.cpp \
    i_watched.cpp \
    c_settingscontroller.cpp \
    w_initializedialog.cpp \
    w_interfaceinformationswidget.cpp \
    w_serverinformationswidget.cpp \
    w_databaseinformationswidget.cpp \
    c_mysqldatabasecontroller.cpp \
    w_windowconfigurationdialog.cpp

HEADERS += \
        w_mainwindow.h \
    c_clinictcpserver.h \
    w_serverconfigurationdialog.h \
    i_observer.h \
    i_watched.h \
    c_settingscontroller.h \
    m_fileMacros.h \
    w_initializedialog.h \
    m_defaultinifile.h \
    w_interfaceinformationswidget.h \
    w_serverinformationswidget.h \
    w_databaseinformationswidget.h \
    c_mysqldatabasecontroller.h \
    w_windowconfigurationdialog.h

FORMS += \
        w_mainwindow.ui \
    w_serverconfigurationdialog.ui \
    w_initializedialog.ui \
    w_interfaceinformationswidget.ui \
    w_serverinformationswidget.ui \
    w_databaseinformationswidget.ui \
    w_windowconfigurationdialog.ui

DISTFILES += \
    styles.css \
    config2.ini \
    config.ini

RESOURCES += \
    icons.qrc \
    gifs.qrc
