/********************************************************************************
** Form generated from reading UI file 'w_serverconfigurationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_SERVERCONFIGURATIONDIALOG_H
#define UI_W_SERVERCONFIGURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_w_serverConfigurationDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *portLineEdit;
    QLabel *label;
    QGroupBox *listeningOptionGroupBox;
    QRadioButton *allRadioButton;
    QRadioButton *interfaceRadioButton;
    QGroupBox *interfaceListGroupBox;

    void setupUi(QDialog *w_serverConfigurationDialog)
    {
        if (w_serverConfigurationDialog->objectName().isEmpty())
            w_serverConfigurationDialog->setObjectName(QStringLiteral("w_serverConfigurationDialog"));
        w_serverConfigurationDialog->resize(400, 400);
        w_serverConfigurationDialog->setMinimumSize(QSize(400, 400));
        w_serverConfigurationDialog->setMaximumSize(QSize(400, 400));
        buttonBox = new QDialogButtonBox(w_serverConfigurationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 360, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);
        portLineEdit = new QLineEdit(w_serverConfigurationDialog);
        portLineEdit->setObjectName(QStringLiteral("portLineEdit"));
        portLineEdit->setGeometry(QRect(65, 15, 60, 20));
        portLineEdit->setMaxLength(5);
        label = new QLabel(w_serverConfigurationDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(25, 15, 40, 20));
        label->setStyleSheet(QStringLiteral("font: 75 8pt \"MS Shell Dlg 2\";"));
        listeningOptionGroupBox = new QGroupBox(w_serverConfigurationDialog);
        listeningOptionGroupBox->setObjectName(QStringLiteral("listeningOptionGroupBox"));
        listeningOptionGroupBox->setGeometry(QRect(15, 50, 370, 301));
        allRadioButton = new QRadioButton(listeningOptionGroupBox);
        allRadioButton->setObjectName(QStringLiteral("allRadioButton"));
        allRadioButton->setGeometry(QRect(10, 20, 350, 20));
        interfaceRadioButton = new QRadioButton(listeningOptionGroupBox);
        interfaceRadioButton->setObjectName(QStringLiteral("interfaceRadioButton"));
        interfaceRadioButton->setGeometry(QRect(10, 40, 350, 20));
        interfaceListGroupBox = new QGroupBox(listeningOptionGroupBox);
        interfaceListGroupBox->setObjectName(QStringLiteral("interfaceListGroupBox"));
        interfaceListGroupBox->setGeometry(QRect(10, 65, 350, 221));

        retranslateUi(w_serverConfigurationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), w_serverConfigurationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), w_serverConfigurationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(w_serverConfigurationDialog);
    } // setupUi

    void retranslateUi(QDialog *w_serverConfigurationDialog)
    {
        w_serverConfigurationDialog->setWindowTitle(QApplication::translate("w_serverConfigurationDialog", "Ustawienia - Serwer", nullptr));
        label->setText(QApplication::translate("w_serverConfigurationDialog", "Port", nullptr));
        listeningOptionGroupBox->setTitle(QApplication::translate("w_serverConfigurationDialog", "Nas\305\202uchiwanie", nullptr));
        allRadioButton->setText(QApplication::translate("w_serverConfigurationDialog", "Nas\305\202uchuj na wszystkich dost\304\231pnych interfejsach", nullptr));
        interfaceRadioButton->setText(QApplication::translate("w_serverConfigurationDialog", "Jeden interfejs", nullptr));
        interfaceListGroupBox->setTitle(QApplication::translate("w_serverConfigurationDialog", "Lista dost\304\231pnych interfejs\303\263w sieciowych", nullptr));
    } // retranslateUi

};

namespace Ui {
    class w_serverConfigurationDialog: public Ui_w_serverConfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_SERVERCONFIGURATIONDIALOG_H
