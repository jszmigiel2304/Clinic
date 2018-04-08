#include "w_loggingdialog.h"
#include "ui_w_loggingdialog.h"

w_LoggingDialog::w_LoggingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::w_LoggingDialog)
{
    ui->setupUi(this);

    this->setWindowTitle(qApp->applicationName());

    ui->w_serverInfoArea->hide();

    this->serverAreaShown = false;

    connect(ui->f_userName, SIGNAL(editingFinished()), this, SLOT(validateUserName()));
    connect(ui->f_password, SIGNAL(editingFinished()), this, SLOT(validateUserPassword()));
}

w_LoggingDialog::~w_LoggingDialog()
{
    delete ui;
}

void w_LoggingDialog::setServerConnectionSettings(QMap<QString, QVariant> settings, bool refresh)
{
    serverAddress = settings["address"].toString();
    serverPort = settings["port"].toInt();

    if(refresh)
        this->refresh();
}

void w_LoggingDialog::setAuthorizationSettings(QMap<QString, QVariant> settings, bool refresh)
{
    userName = settings["name"].toString();
    userPassword = settings["password"].toString();

    if(refresh)
        this->refresh();
}

QMap<QString, QVariant> w_LoggingDialog::ShareProperties(QString sharedData)
{
    QMap<QString, QVariant> map;

    if ( sharedData == "all" || sharedData == "userOnly" )
    {
        map.insert("name", this->userName);
        map.insert("passsword", this->userPassword);
    }

    if ( sharedData == "all" || sharedData == "serverOnly" )
    {
        map.insert("address", this->serverAddress);
        map.insert("port", this->serverPort);
    }


    return map;
}

void w_LoggingDialog::UpdateProperties(QMap<QString, QVariant> map)
{
    if( !map["name"].toString().isEmpty() )
        this->userName = map["name"].toString();

    if( !map["password"].toString().isEmpty() )
        this->userPassword = map["password"].toString();

    if( !map["address"].toString().isEmpty() )
        this->serverAddress = map["address"].toString();

    if( map["port"].toInt() )
        this->serverPort = map["port"].toInt();
}


void w_LoggingDialog::on_b_showHideButton_clicked()
{
    if( this->serverAreaShown ) {
        ui->w_serverInfoArea->hide();

        QIcon icon(":/icons/arrow_down.png");
        ui->b_showHideButton->setIcon(icon);
        ui->b_showHideButton->setIconSize(QSize(16,16));

        this->serverAreaShown = false;
    } else {
        ui->w_serverInfoArea->show();

        QIcon icon(":/icons/arrow_up.png");
        ui->b_showHideButton->setIcon(icon);
        ui->b_showHideButton->setIconSize(QSize(16,16));

        this->serverAreaShown = true;
    }
}

void w_LoggingDialog::refresh()
{
    ui->f_password->setText(this->userPassword);
    ui->f_userName->setText(this->userName);

    ui->l_Address->setText(this->serverAddress);
    ui->l_Port->setText( QString("%1").arg(this->serverPort) );
}

void w_LoggingDialog::on_b_configureButton_clicked()
{
    w_ServerConnectionDialog * newDialog = new w_ServerConnectionDialog(this);
    newDialog->AddWatchedObject("loggingDialog", dynamic_cast<i_Watched *>(this));
    newDialog->update();
    newDialog->show();
}

void w_LoggingDialog::validateUserName()
{
    QString name = ui->f_userName->text();
    QRegExp nameRegExp( "[A-Za-z0-9_]{1,32}" );

    if(nameRegExp.exactMatch(name))
    {
        ui->f_userName->setStyleSheet("");
    }
    else
    {
        ui->f_userName->setStyleSheet("border: 2px solid red;");
    }
}

void w_LoggingDialog::validateUserPassword()
{
    QString password = ui->f_password->text();
    QRegExp passwordRegExp( "[A-Za-z0-9_]{1,32}" );

    if(passwordRegExp.exactMatch(password))
    {
        ui->f_password->setStyleSheet("");
    }
    else
    {
        ui->f_password->setStyleSheet("border: 2px solid red;");
    }
}