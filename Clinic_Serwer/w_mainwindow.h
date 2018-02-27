#ifndef W_MAINWINDOW_H
#define W_MAINWINDOW_H

#include "i_watched.h"
#include "i_observer.h"
#include "w_serverconfigurationdialog.h"
#include "c_clinictcpserver.h"
#include "c_mysqldatabasecontroller.h"
#include "w_windowconfigurationdialog.h"

#include <QMainWindow>
#include <QSystemTrayIcon>

namespace Ui {
class w_MainWindow;
}

class w_MainWindow : public QMainWindow, public i_Watched, public i_Observer
{
    Q_OBJECT

public:
    explicit w_MainWindow(QWidget *parent = 0);    
    explicit w_MainWindow(QMap<QString, QVariant> settings, QWidget *parent = 0);
    ~w_MainWindow();
    QMap<QString, QVariant> ShareProperties();
    void UpdateProperties(QMap<QString, QVariant> map);

    void refresh();
    void shareServerPointer();
    void shareDbContrPointer();

    void MyShow();

private slots:
    void on_actionServerConfigure_triggered();

    void on_actionServerStart_triggered();

    void on_actionServerStop_triggered();

    void on_actionWindowConfigure_triggered();

    void on_actionOpen_triggered();

    void on_trayIcon_activated(QSystemTrayIcon::ActivationReason reason);

    void on_actionClose_triggered();

private:
    void createTrayIcon();
    void closeEvent(QCloseEvent * event);

    Ui::w_MainWindow *ui;
    bool startMinimize;
    bool minimizeToTrayOnClose;

    QSystemTrayIcon * trayIcon;
    QMenu * trayIconMenu;

signals:
    void PropertiesChanged();
};

#endif // W_MAINWINDOW_H
