#include "w_mainwindow.h"
#include "ui_w_mainwindow.h"

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



    ui->actionServerConfigure->setEnabled(true);
    ui->actionServerStart->setEnabled(true);
    ui->actionServerStop->setEnabled(false);


}

w_MainWindow::~w_MainWindow()
{
    delete ui;
}

void w_MainWindow::refresh()
{
    ui->interfaceInfoArea->refresh();
    ui->serverInfoArea->refresh();
}

void w_MainWindow::shareServerPointer()
{
    this->ShareWatchedObject("server", dynamic_cast<i_Observer *>(ui->interfaceInfoArea));
    connect(
            dynamic_cast<c_ClinicTcpServer *>(ui->interfaceInfoArea->watchedObjectsList["server"]),
            SIGNAL(PropertiesChanged(QMap<QString,QVariant>)),
            ui->interfaceInfoArea,
            SLOT(refreshInformations(QMap<QString, QVariant>))
            );

    this->ShareWatchedObject("server", dynamic_cast<i_Observer *>(ui->serverInfoArea));
    connect(
            dynamic_cast<c_ClinicTcpServer *>(ui->interfaceInfoArea->watchedObjectsList["server"]),
            SIGNAL(PropertiesChanged(QMap<QString,QVariant>)),
            ui->serverInfoArea,
            SLOT(refreshInformations(QMap<QString, QVariant>))
            );
}

void w_MainWindow::on_actionServerConfigure_triggered()
{
    if((this->watchedObjectsList["server"]->ShareProperties())["isListening"].toBool())
    {
        QMessageBox::information(
                this,
                tr("Informacja"),
                tr("Server jest w trybie nasłuchiwania.\nZatrzymaj zanim zaczniesz konfigurację.") );
    } else
    {
        w_serverConfigurationDialog * wnd = new w_serverConfigurationDialog(this);
        //wnd->AddWatchedObject("server", this->watchedObjectsList["server"]);
        this->ShareWatchedObject("server", wnd);
        wnd->update();
        wnd->show();
    }
}

void w_MainWindow::on_actionServerStart_triggered()
{
    (dynamic_cast<c_ClinicTcpServer *>(this->watchedObjectsList["server"]))->listen();
    ui->actionServerStart->setEnabled(false);
    ui->actionServerStop->setEnabled(true);
    ui->actionServerConfigure->setEnabled(false);
    emit (dynamic_cast<c_ClinicTcpServer *>(this->watchedObjectsList["server"]))->PropertiesChanged();
}

void w_MainWindow::on_actionServerStop_triggered()
{
    (dynamic_cast<c_ClinicTcpServer *>(this->watchedObjectsList["server"]))->close();
    ui->actionServerStart->setEnabled(true);
    ui->actionServerConfigure->setEnabled(true);
    ui->actionServerStop->setEnabled(false);
    emit (dynamic_cast<c_ClinicTcpServer *>(this->watchedObjectsList["server"]))->PropertiesChanged();
}
