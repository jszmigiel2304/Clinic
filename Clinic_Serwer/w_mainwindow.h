#ifndef W_MAINWINDOW_H
#define W_MAINWINDOW_H

#include <QMainWindow>

#include "i_watched.h"
#include "i_observer.h"


namespace Ui {
class w_MainWindow;
}

class w_MainWindow : public QMainWindow, public i_Watched, public i_Observer
{
    Q_OBJECT

public:
    explicit w_MainWindow(QWidget *parent = 0);
    ~w_MainWindow();

    void update(QMap<QString, QVariant> data);

private slots:
    void on_actionServerConfigure_triggered();

private:
    Ui::w_MainWindow *ui;
};

#endif // W_MAINWINDOW_H
