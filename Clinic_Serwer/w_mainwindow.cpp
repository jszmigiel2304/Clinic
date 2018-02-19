#include "w_mainwindow.h"
#include "ui_w_mainwindow.h"
#include "w_serverconfigurationdialog.h"

w_MainWindow::w_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::w_MainWindow)
{
    ui->setupUi(this);
}

w_MainWindow::w_MainWindow(QMap<QString, QVariant> settings, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::w_MainWindow)
{
    ui->setupUi(this);
    this->startMinimize = settings["start_minimize"].toBool();
}

w_MainWindow::~w_MainWindow()
{
    delete ui;
}

void w_MainWindow::update(QMap<QString, QVariant> data)
{

}

void w_MainWindow::on_actionServerConfigure_triggered()
{
    w_serverConfigurationDialog * wnd = new w_serverConfigurationDialog(this);
    wnd->AddWatchedObject("server", this->watchedObjectsList["server"]);
    wnd->update();
    wnd->show();
}
