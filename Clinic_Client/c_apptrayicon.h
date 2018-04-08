#ifndef C_APPTRAYICON_H
#define C_APPTRAYICON_H

#include "i_observer.h"
#include "w_mainwindow.h"

#include <QApplication>
#include <QObject>
#include <QSystemTrayIcon>
#include <QActionGroup>
#include <QMenu>

class c_AppTrayIcon : public QSystemTrayIcon, public i_Observer, public i_Watched
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

public slots:
    void mainWindowStateChanged(Qt::WindowStates states);

private:
    explicit c_AppTrayIcon(QObject * parent = nullptr);

    w_MainWindow * mainWindow;
    QActionGroup * actions;
    QMenu * menu;

private slots:
    void actionTriggered(QAction * action);
    void closeActionTriggered(bool);

};

#endif // C_APPTRAYICON_H
