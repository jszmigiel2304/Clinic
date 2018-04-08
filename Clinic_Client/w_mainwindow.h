#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "i_watched.h"
#include "i_observer.h"

#include <QMainWindow>

namespace Ui {
class w_MainWindow;
}

class w_MainWindow : public QMainWindow, public i_Observer
{
    Q_OBJECT

public:    
    static w_MainWindow * Instance();
    void loadSettings(QMap<QString, QVariant> settings);
    ~w_MainWindow();

    bool getMinimizeToTrayOnClose() const;
    void setMinimizeToTrayOnClose(bool value);

    bool getMinimizeToTrayOnStart() const;
    void setMinimizeToTrayOnStart(bool value);

private:
    explicit w_MainWindow(QWidget *parent = 0);
    void closeEvent(QCloseEvent * event);
    Ui::w_MainWindow *ui;


    bool minimizeToTrayOnClose;
    bool minimizeToTrayOnStart;


signals:
    void stateChanged(Qt::WindowStates);
};

#endif // MAINWINDOW_H
