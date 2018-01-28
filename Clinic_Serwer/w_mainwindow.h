#ifndef W_MAINWINDOW_H
#define W_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class w_MainWindow;
}

class w_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit w_MainWindow(QWidget *parent = 0);
    ~w_MainWindow();

private:
    Ui::w_MainWindow *ui;
};

#endif // W_MAINWINDOW_H
