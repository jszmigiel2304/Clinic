#include "w_serverinformationswidget.h"
#include "ui_w_serverinformationswidget.h"

w_ServerInformationsWidget::w_ServerInformationsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::w_ServerInformationsWidget)
{
    ui->setupUi(this);
}

w_ServerInformationsWidget::~w_ServerInformationsWidget()
{
    delete ui;
}

void w_ServerInformationsWidget::refresh()
{
    QMap<QString, QVariant> map = this->GetWatchedObjectProperties("server");

    ui->f_address->setText(map["address"].toString());
    ui->f_serverStatus->setText(map["isListening"].toBool() ? "UP" : "DOWN");
    ui->f_port->setText(map["port"].toString());
}

void w_ServerInformationsWidget::refreshInformations(QMap<QString, QVariant> map)
{
    ui->f_address->setText(map["address"].toString());
    ui->f_serverStatus->setText(map["isListening"].toBool() ? "UP" : "DOWN");
    ui->f_port->setText(map["port"].toString());
}
