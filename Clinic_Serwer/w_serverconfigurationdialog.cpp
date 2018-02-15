#include "w_serverconfigurationdialog.h"
#include "ui_w_serverconfigurationdialog.h"

#include <QNetworkInterface>
#include <QRadioButton>

w_serverConfigurationDialog::w_serverConfigurationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::w_serverConfigurationDialog)
{
    ui->setupUi(this);


    QList<QRadioButton *> interfacesRadioButtonList;

    QList<QNetworkInterface> interfaces;
    foreach (QNetworkInterface interface, QNetworkInterface::allInterfaces()) {
        if(interface.IsUp)
            interfaces.push_back(interface);
    }

    foreach (QNetworkInterface interface, interfaces) {
        QRadioButton * radio = new QRadioButton(ui->interfaceListGroupBox);
        radio->setText(interface.name());
        radio->setGeometry(10, (20 + interfacesRadioButtonList.length() * 20), 350, 20);
        interfacesRadioButtonList.push_back(radio);

    }
}

w_serverConfigurationDialog::~w_serverConfigurationDialog()
{
    delete ui;
}
