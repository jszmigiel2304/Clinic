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

    this->createTrayIcon();

    this->startMinimize = settings["startMinimize"].toBool();
    this->minimizeToTrayOnClose = settings["minimizeToTrayOnClose"].toBool();

    ui->actionServerConfigure->setEnabled(true);
    ui->actionServerStart->setEnabled(true);
    ui->actionServerStop->setEnabled(false);

    ui->authDbInfoArea->setName("Authorization database");
    ui->clinicDbInfoArea->setName("Clinic database");

    this->trayIcon->show();
}

w_MainWindow::~w_MainWindow()
{
    delete ui;
}

QMap<QString, QVariant> w_MainWindow::ShareProperties()
{
    QMap<QString, QVariant> map;

    map.insert("startMinimize", this->startMinimize);
    map.insert("minimizeToTrayOnClose", this->minimizeToTrayOnClose);

    return map;
}

void w_MainWindow::UpdateProperties(QMap<QString, QVariant> map)
{
    this->minimizeToTrayOnClose = map["minimizeToTrayOnClose"].toBool();
    this->startMinimize = map["startMinimize"].toBool();

    emit this->PropertiesChanged();
}

void w_MainWindow::refresh()
{
    ui->interfaceInfoArea->refresh();
    ui->serverInfoArea->refresh();
    ui->authDbInfoArea->refresh();
    ui->clinicDbInfoArea->refresh();
}

void w_MainWindow::shareServerPointer()
{
    this->ShareWatchedObject("server", dynamic_cast<i_Observer *>(ui->interfaceInfoArea));
    connect(
            dynamic_cast<c_ClinicTcpServer *>(ui->interfaceInfoArea->watchedObjectsList["server"]),
            SIGNAL(PropertiesChanged()),
            ui->interfaceInfoArea,
            SLOT(refresh())
            );

    this->ShareWatchedObject("server", dynamic_cast<i_Observer *>(ui->serverInfoArea));
    connect(
            dynamic_cast<c_ClinicTcpServer *>(ui->interfaceInfoArea->watchedObjectsList["server"]),
            SIGNAL(PropertiesChanged()),
            ui->serverInfoArea,
            SLOT(refresh())
            );
}

void w_MainWindow::shareDbContrPointer()
{
    this->ShareWatchedObject("databaseController", dynamic_cast<i_Observer *>(ui->serverInfoArea));
    connect(
            dynamic_cast<c_MySqlDatabaseController *>(ui->serverInfoArea->watchedObjectsList["databaseController"]),
            SIGNAL(PropertiesChanged()),
            ui->serverInfoArea,
            SLOT(refresh())
            );

    this->ShareWatchedObject("databaseController", dynamic_cast<i_Observer *>(ui->authDbInfoArea));
    connect(
            dynamic_cast<c_MySqlDatabaseController *>(ui->authDbInfoArea->watchedObjectsList["databaseController"]),
            SIGNAL(PropertiesChanged()),
            ui->authDbInfoArea,
            SLOT(refresh())
            );

    this->ShareWatchedObject("databaseController", dynamic_cast<i_Observer *>(ui->clinicDbInfoArea));
    connect(
            dynamic_cast<c_MySqlDatabaseController *>(ui->clinicDbInfoArea->watchedObjectsList["databaseController"]),
            SIGNAL(PropertiesChanged()),
            ui->clinicDbInfoArea,
            SLOT(refresh())
            );
}

void w_MainWindow::MyShow()
{
    if(this->startMinimize)
    {
        QIcon icon(":/actions/icons/appIcon.png");
        this->trayIcon->showMessage("Przychodnia - Serwer", "Zminimalizowano do zasobnika systemowego.", icon ,1500);
    }
    else
        this->show();
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

    (dynamic_cast<c_MySqlDatabaseController *>(this->watchedObjectsList["databaseController"]))->AddDatabase("Authorization", "QPSQL");
    (dynamic_cast<c_MySqlDatabaseController *>(this->watchedObjectsList["databaseController"]))->AddDatabase("Clinic", "QPSQL");
    (dynamic_cast<c_MySqlDatabaseController *>(this->watchedObjectsList["databaseController"]))->SetUpDatabase("Authorization");
    (dynamic_cast<c_MySqlDatabaseController *>(this->watchedObjectsList["databaseController"]))->SetUpDatabase("Clinic");


    emit (dynamic_cast<c_ClinicTcpServer *>(this->watchedObjectsList["server"]))->PropertiesChanged();
    emit (dynamic_cast<c_MySqlDatabaseController *>(this->watchedObjectsList["databaseController"]))->PropertiesChanged();
}

void w_MainWindow::on_actionServerStop_triggered()
{
    (dynamic_cast<c_ClinicTcpServer *>(this->watchedObjectsList["server"]))->close();
    (dynamic_cast<c_MySqlDatabaseController *>(this->watchedObjectsList["databaseController"]))->RemoveAllDatabases();
    ui->actionServerStart->setEnabled(true);
    ui->actionServerConfigure->setEnabled(true);
    ui->actionServerStop->setEnabled(false);
    emit (dynamic_cast<c_ClinicTcpServer *>(this->watchedObjectsList["server"]))->PropertiesChanged();
    emit (dynamic_cast<c_MySqlDatabaseController *>(this->watchedObjectsList["databaseController"]))->PropertiesChanged();
}

void w_MainWindow::on_actionWindowConfigure_triggered()
{
        w_windowConfigurationDialog * wnd = new w_windowConfigurationDialog(this);
        //wnd->AddWatchedObject("server", this->watchedObjectsList["server"]);
        wnd->AddWatchedObject("appWindow", dynamic_cast<i_Watched *>(this));
        wnd->update();
        wnd->show();
}

void w_MainWindow::createTrayIcon()
{
    this->trayIcon = new QSystemTrayIcon(this);


    QIcon icon(":/actions/icons/appIcon.png");
    this->trayIcon->setIcon(icon);

    this->trayIconMenu = new QMenu();
    trayIconMenu->addAction(ui->actionOpen);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(ui->actionServerStart);
    trayIconMenu->addAction(ui->actionServerStop);
    trayIconMenu->addAction(ui->actionServerConfigure);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(ui->actionDataBaseConfigure);
    trayIconMenu->addSeparator();
    trayIconMenu->addAction(ui->actionClose);

    trayIconMenu->setDefaultAction(ui->actionOpen);


    trayIcon->setContextMenu(trayIconMenu);

    connect(trayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(on_trayIcon_activated(QSystemTrayIcon::ActivationReason)));
}

void w_MainWindow::closeEvent(QCloseEvent *event)
{
    if(this->minimizeToTrayOnClose)
    {
        this->hide();

        QIcon icon(":/actions/icons/appIcon.png");
        this->trayIcon->showMessage("Przychodnia - Serwer", "Zminimalizowano do zasobnika systemowego.", icon ,1500);
        this->on_actionServerStop_triggered();
        event->ignore();
    }
    else
    {
        QIcon icon(":/actions/icons/appIcon.png");
        this->trayIcon->showMessage("Przychodnia - Serwer", "Trwa zamykanie.", icon ,1000);
        event->accept();
    }
}


void w_MainWindow::on_actionOpen_triggered()
{
    this->show();
}

void w_MainWindow::on_trayIcon_activated(QSystemTrayIcon::ActivationReason reason)
{
    if(reason == QSystemTrayIcon::DoubleClick)
        this->on_actionOpen_triggered();
}

void w_MainWindow::on_actionClose_triggered()
{
    this->minimizeToTrayOnClose = false;
    this->close();
}
