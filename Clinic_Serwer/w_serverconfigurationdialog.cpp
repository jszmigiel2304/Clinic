#include "w_serverconfigurationdialog.h"
#include "ui_w_serverconfigurationdialog.h"

#include <QNetworkInterface>
#include <QRadioButton>
#include <QPushButton>

w_serverConfigurationDialog::w_serverConfigurationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::w_serverConfigurationDialog)
{
    ui->setupUi(this);




    QList<QNetworkInterface> interfaces;
    foreach (QNetworkInterface interface, QNetworkInterface::allInterfaces()) {
        if(interface.IsUp)
            interfaces.push_back(interface);
    }

    foreach (QNetworkInterface interface, interfaces) {
        QRadioButton * radio = new QRadioButton(ui->interfaceListGroupBox);
        radio->setText(interface.name());
        radio->setGeometry(10, (20 + interfacesRadioButtonList.length() * 20), 350, 20);        
        connect(radio, SIGNAL(clicked(bool)), this, SLOT(settingsChanged(bool)));
        this->interfacesRadioButtonList.push_back(radio);

    }

    connect(ui->interfaceRadioButton, SIGNAL(clicked(bool)), this, SLOT(listeningOptionGroupBoxClicked(bool)));
    connect(ui->allRadioButton, SIGNAL(clicked(bool)), this, SLOT(listeningOptionGroupBoxClicked(bool)));

    connect(ui->allRadioButton, SIGNAL(clicked(bool)), this, SLOT(settingsChanged(bool)));
    connect(ui->interfaceRadioButton, SIGNAL(clicked(bool)), this, SLOT(settingsChanged(bool)));
    connect(ui->allRadioButton, SIGNAL(clicked(bool)), this, SLOT(settingsChanged(bool)));

    QPushButton * okButton = new QPushButton();
    QPushButton * cancelButton = new QPushButton();
    QPushButton * applyButton = new QPushButton();

    okButton->setText("Ok");
    cancelButton->setText("Anuluj");
    applyButton->setText("Zastosuj");

    applyButton->setEnabled(false);

    okButton->setDefault(true);

    ui->buttonBox->addButton(okButton, QDialogButtonBox::ActionRole);
    ui->buttonBox->addButton(cancelButton, QDialogButtonBox::ActionRole);
    ui->buttonBox->addButton(applyButton, QDialogButtonBox::ActionRole);

}

w_serverConfigurationDialog::~w_serverConfigurationDialog()
{
    delete ui;
}

QMap<QString, QVariant> w_serverConfigurationDialog::getServerProperties()
{
    QMap<QString, QVariant> map = this->watchedObjectsList["server"]->ShareProperties();

    return map;
}

void w_serverConfigurationDialog::update()
{
    QMap<QString, QVariant> map = this->getServerProperties();

    ui->portLineEdit->setText(map["port"].toString());

    if(map["interfaceName"].toString() == "all")
    {
        ui->interfaceListGroupBox->setEnabled(false);
        ui->allRadioButton->setChecked(true);
    } else
    {
        ui->interfaceListGroupBox->setEnabled(true);
        ui->interfaceRadioButton->setChecked(true);
        foreach (QRadioButton * button, this->interfacesRadioButtonList) {
            if (button->text() == map["interfaceName"].toString())
            {
                button->setChecked(true);
                break;
            }
        }
    }
}

void w_serverConfigurationDialog::listeningOptionGroupBoxClicked(bool)
{
    if(ui->interfaceRadioButton->isChecked())
        ui->interfaceListGroupBox->setEnabled(true);
    else
        ui->interfaceListGroupBox->setEnabled(false);
}

void w_serverConfigurationDialog::settingsChanged(bool)
{
    (ui->buttonBox->buttons()[2])->setEnabled(true);
}
