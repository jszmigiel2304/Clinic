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
    QWidget *centralWidget;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QMenu *menuSerwer;
    QMenu *menuUstawienia;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *w_MainWindow)
    {
        if (w_MainWindow->objectName().isEmpty())
            w_MainWindow->setObjectName(QStringLiteral("w_MainWindow"));
        w_MainWindow->resize(800, 600);
        w_MainWindow->setMinimumSize(QSize(0, 0));
        w_MainWindow->setMaximumSize(QSize(800, 600));
        actionServerStart = new QAction(w_MainWindow);
        actionServerStart->setObjectName(QStringLiteral("actionServerStart"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/actions/icons/if_server_run_103341.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionServerStart->setIcon(icon);
        actionServerStop = new QAction(w_MainWindow);
        actionServerStop->setObjectName(QStringLiteral("actionServerStop"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/actions/icons/if_server_stop_103344.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionServerStop->setIcon(icon1);
        actionServerConfigure = new QAction(w_MainWindow);
        actionServerConfigure->setObjectName(QStringLiteral("actionServerConfigure"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/actions/icons/if_server_settings_103343.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionServerConfigure->setIcon(icon2);
        actionClose = new QAction(w_MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionWindowConfigure = new QAction(w_MainWindow);
        actionWindowConfigure->setObjectName(QStringLiteral("actionWindowConfigure"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/actions/icons/if_browser_window_settings_103427.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWindowConfigure->setIcon(icon3);
        actionDataBaseConfigure = new QAction(w_MainWindow);
        actionDataBaseConfigure->setObjectName(QStringLiteral("actionDataBaseConfigure"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/actions/icons/if_032_95930.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDataBaseConfigure->setIcon(icon4);
        centralWidget = new QWidget(w_MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
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
        menuSerwer->setTitle(QApplication::translate("w_MainWindow", "Serwer", nullptr));
        menuUstawienia->setTitle(QApplication::translate("w_MainWindow", "Ustawienia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class w_MainWindow: public Ui_w_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_MAINWINDOW_H
