/********************************************************************************
** Form generated from reading UI file 'w_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_MAINWINDOW_H
#define UI_W_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "w_databaseinformationswidget.h"
#include "w_interfaceinformationswidget.h"
#include "w_serverinformationswidget.h"

QT_BEGIN_NAMESPACE

class Ui_w_MainWindow
{
public:
    QAction *actionServerStart;
    QAction *actionServerStop;
    QAction *actionServerConfigure;
    QAction *actionClose;
    QAction *actionWindowConfigure;
    QAction *actionDataBaseConfigure;
    QAction *actionOpen;
    QWidget *centralWidget;
    w_InterfaceInformationsWidget *interfaceInfoArea;
    w_ServerInformationsWidget *serverInfoArea;
    w_DatabaseInformationsWidget *authDbInfoArea;
    w_DatabaseInformationsWidget *clinicDbInfoArea;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QMenu *menuSerwer;
    QMenu *menuUstawienia;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *w_MainWindow)
    {
        if (w_MainWindow->objectName().isEmpty())
            w_MainWindow->setObjectName(QStringLiteral("w_MainWindow"));
        w_MainWindow->resize(800, 630);
        w_MainWindow->setMinimumSize(QSize(800, 630));
        w_MainWindow->setMaximumSize(QSize(800, 630));
        QIcon icon;
        icon.addFile(QStringLiteral(":/actions/icons/appIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        w_MainWindow->setWindowIcon(icon);
        actionServerStart = new QAction(w_MainWindow);
        actionServerStart->setObjectName(QStringLiteral("actionServerStart"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/actions/icons/if_server_run_103341.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionServerStart->setIcon(icon1);
        actionServerStop = new QAction(w_MainWindow);
        actionServerStop->setObjectName(QStringLiteral("actionServerStop"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/actions/icons/if_server_stop_103344.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionServerStop->setIcon(icon2);
        actionServerConfigure = new QAction(w_MainWindow);
        actionServerConfigure->setObjectName(QStringLiteral("actionServerConfigure"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/actions/icons/if_server_settings_103343.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionServerConfigure->setIcon(icon3);
        actionClose = new QAction(w_MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionWindowConfigure = new QAction(w_MainWindow);
        actionWindowConfigure->setObjectName(QStringLiteral("actionWindowConfigure"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/actions/icons/if_browser_window_settings_103427.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWindowConfigure->setIcon(icon4);
        actionDataBaseConfigure = new QAction(w_MainWindow);
        actionDataBaseConfigure->setObjectName(QStringLiteral("actionDataBaseConfigure"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/actions/icons/if_032_95930.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDataBaseConfigure->setIcon(icon5);
        actionOpen = new QAction(w_MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        centralWidget = new QWidget(w_MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        interfaceInfoArea = new w_InterfaceInformationsWidget(centralWidget);
        interfaceInfoArea->setObjectName(QStringLiteral("interfaceInfoArea"));
        interfaceInfoArea->setGeometry(QRect(10, 150, 781, 231));
        serverInfoArea = new w_ServerInformationsWidget(centralWidget);
        serverInfoArea->setObjectName(QStringLiteral("serverInfoArea"));
        serverInfoArea->setGeometry(QRect(10, 10, 781, 130));
        authDbInfoArea = new w_DatabaseInformationsWidget(centralWidget);
        authDbInfoArea->setObjectName(QStringLiteral("authDbInfoArea"));
        authDbInfoArea->setGeometry(QRect(10, 390, 380, 150));
        clinicDbInfoArea = new w_DatabaseInformationsWidget(centralWidget);
        clinicDbInfoArea->setObjectName(QStringLiteral("clinicDbInfoArea"));
        clinicDbInfoArea->setGeometry(QRect(411, 390, 380, 150));
        w_MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(w_MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        w_MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(w_MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuSerwer = new QMenu(menuBar);
        menuSerwer->setObjectName(QStringLiteral("menuSerwer"));
        menuUstawienia = new QMenu(menuBar);
        menuUstawienia->setObjectName(QStringLiteral("menuUstawienia"));
        w_MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(w_MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        w_MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actionServerStart);
        mainToolBar->addAction(actionServerStop);
        mainToolBar->addAction(actionServerConfigure);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDataBaseConfigure);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionWindowConfigure);
        menuBar->addAction(menuSerwer->menuAction());
        menuBar->addAction(menuUstawienia->menuAction());
        menuSerwer->addAction(actionServerStart);
        menuSerwer->addAction(actionServerStop);
        menuSerwer->addSeparator();
        menuSerwer->addAction(actionClose);
        menuUstawienia->addAction(actionWindowConfigure);
        menuUstawienia->addAction(actionServerConfigure);
        menuUstawienia->addAction(actionDataBaseConfigure);

        retranslateUi(w_MainWindow);

        QMetaObject::connectSlotsByName(w_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *w_MainWindow)
    {
        w_MainWindow->setWindowTitle(QApplication::translate("w_MainWindow", "Przychodnia - Serwer", nullptr));
        actionServerStart->setText(QApplication::translate("w_MainWindow", "Start", nullptr));
        actionServerStop->setText(QApplication::translate("w_MainWindow", "Stop", nullptr));
        actionServerConfigure->setText(QApplication::translate("w_MainWindow", "Serwer", nullptr));
#ifndef QT_NO_TOOLTIP
        actionServerConfigure->setToolTip(QApplication::translate("w_MainWindow", "Ustawienia serwera", nullptr));
#endif // QT_NO_TOOLTIP
        actionClose->setText(QApplication::translate("w_MainWindow", "Zako\305\204cz", nullptr));
        actionWindowConfigure->setText(QApplication::translate("w_MainWindow", "Okno", nullptr));
#ifndef QT_NO_TOOLTIP
        actionWindowConfigure->setToolTip(QApplication::translate("w_MainWindow", "Ustawienia okna", nullptr));
#endif // QT_NO_TOOLTIP
        actionDataBaseConfigure->setText(QApplication::translate("w_MainWindow", "Baza danych", nullptr));
#ifndef QT_NO_TOOLTIP
        actionDataBaseConfigure->setToolTip(QApplication::translate("w_MainWindow", "Ustawienia bazy danych", nullptr));
#endif // QT_NO_TOOLTIP
        actionOpen->setText(QApplication::translate("w_MainWindow", "Otw\303\263rz", nullptr));
        menuSerwer->setTitle(QApplication::translate("w_MainWindow", "Serwer", nullptr));
        menuUstawienia->setTitle(QApplication::translate("w_MainWindow", "Ustawienia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class w_MainWindow: public Ui_w_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_MAINWINDOW_H
