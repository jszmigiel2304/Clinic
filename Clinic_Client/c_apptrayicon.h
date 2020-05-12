#ifndef C_APPTRAYICON_H
#define C_APPTRAYICON_H

#include "i_observer.h"
#include "w_mainwindow.h"
#include "w_loggingdialog.h"
#include "c_settingscontroller.h"
#include "c_modulescontroller.h"
#include "c_loggeduser.h"
#include "w_logswindow.h"
#include "c_connectiontoservercontroller.h"

#include <QApplication>
#include <QObject>
#include <QSystemTrayIcon>
#include <QActionGroup>
#include <QMenu>
#include <QJsonDocument>
#include <QJsonObject>

class c_AppTrayIcon : public QSystemTrayIcon, public i_Watched
{
    Q_OBJECT
public:
    static c_AppTrayIcon *Instance();
    ~c_AppTrayIcon();
    void createActions();
    void createMenu();
    void createConnections();

    w_MainWindow *getMainWindow() const;
    void setMainWindow(w_MainWindow *value);

    void run();

    c_modulesController *getModCtrlr() const;
    void setModCtrlr(c_modulesController *value);

    bool getUserIsLogged() const;
    void setUserIsLogged(bool value);

    w_logsWindow * logWindow;

public slots:
    void mainWindowStateChanged(Qt::WindowStates states);
    void mainWindowStateChanged(Qt::WindowStates states, bool appIsClosing);

private:
    explicit c_AppTrayIcon(QObject * parent = nullptr);

    void hideAllWindows();

    w_MainWindow * mainWindow;

    QActionGroup * actions;
    QMenu * menu;

    c_SettingsController * settCtrlr;
    c_modulesController * modCtrlr;
    c_connectionToServerController * connectionCtrlr;

    c_loggedUser * user;


private slots:
    void actionTriggered(QAction * action);
    void closeActionTriggered(bool);
    void raiseActionTriggered(bool);
    void hideActionTriggered(bool);
    void logInActionTriggered(bool);
    void logOutActionTriggered(bool);

};

#endif // C_APPTRAYICON_H
