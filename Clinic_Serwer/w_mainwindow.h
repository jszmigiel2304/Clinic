#ifndef W_MAINWINDOW_H
#define W_MAINWINDOW_H

#include "i_watched.h"
#include "i_observer.h"
#include "w_serverconfigurationdialog.h"
#include "c_clinictcpserver.h"

#include <QMainWindow>

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

    void refresh();
    void shareServerPointer();

private slots:
    void on_actionServerConfigure_triggered();

    void on_actionServerStart_triggered();

    void on_actionServerStop_triggered();

private:
    Ui::w_MainWindow *ui;
    bool startMinimize;
};

#endif // W_MAINWINDOW_H
