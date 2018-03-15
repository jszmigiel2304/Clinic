/********************************************************************************
** Form generated from reading UI file 'w_databaseconnectionsconfigurationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_DATABASECONNECTIONSCONFIGURATIONDIALOG_H
#define UI_W_DATABASECONNECTIONSCONFIGURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include "w_databaseconnectionwidget.h"

QT_BEGIN_NAMESPACE

class Ui_w_DatabaseConnectionsConfigurationDialog
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *authDbConnectionGroupBox;
    w_DatabaseConnectionWidget *AuthDbConnectionWidget;
    QGroupBox *ClinicDbConnectionGroupBox;
    w_DatabaseConnectionWidget *ClinicDbConnectionWidget;

    void setupUi(QDialog *w_DatabaseConnectionsConfigurationDialog)
    {
        if (w_DatabaseConnectionsConfigurationDialog->objectName().isEmpty())
            w_DatabaseConnectionsConfigurationDialog->setObjectName(QStringLiteral("w_DatabaseConnectionsConfigurationDialog"));
        w_DatabaseConnectionsConfigurationDialog->resize(650, 340);
        w_DatabaseConnectionsConfigurationDialog->setMinimumSize(QSize(650, 340));
        w_DatabaseConnectionsConfigurationDialog->setMaximumSize(QSize(650, 340));
        w_DatabaseConnectionsConfigurationDialog->setModal(true);
        buttonBox = new QDialogButtonBox(w_DatabaseConnectionsConfigurationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 300, 630, 40));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);
        authDbConnectionGroupBox = new QGroupBox(w_DatabaseConnectionsConfigurationDialog);
        authDbConnectionGroupBox->setObjectName(QStringLiteral("authDbConnectionGroupBox"));
        authDbConnectionGroupBox->setGeometry(QRect(10, 10, 310, 280));
        AuthDbConnectionWidget = new w_DatabaseConnectionWidget(authDbConnectionGroupBox);
        AuthDbConnectionWidget->setObjectName(QStringLiteral("AuthDbConnectionWidget"));
        AuthDbConnectionWidget->setGeometry(QRect(5, 25, 300, 250));
        ClinicDbConnectionGroupBox = new QGroupBox(w_DatabaseConnectionsConfigurationDialog);
        ClinicDbConnectionGroupBox->setObjectName(QStringLiteral("ClinicDbConnectionGroupBox"));
        ClinicDbConnectionGroupBox->setGeometry(QRect(330, 10, 310, 280));
        ClinicDbConnectionWidget = new w_DatabaseConnectionWidget(ClinicDbConnectionGroupBox);
        ClinicDbConnectionWidget->setObjectName(QStringLiteral("ClinicDbConnectionWidget"));
        ClinicDbConnectionWidget->setGeometry(QRect(5, 25, 300, 250));

        retranslateUi(w_DatabaseConnectionsConfigurationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), w_DatabaseConnectionsConfigurationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), w_DatabaseConnectionsConfigurationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(w_DatabaseConnectionsConfigurationDialog);
    } // setupUi

    void retranslateUi(QDialog *w_DatabaseConnectionsConfigurationDialog)
    {
        w_DatabaseConnectionsConfigurationDialog->setWindowTitle(QApplication::translate("w_DatabaseConnectionsConfigurationDialog", "Ustawienia - Baza danych", nullptr));
        authDbConnectionGroupBox->setTitle(QApplication::translate("w_DatabaseConnectionsConfigurationDialog", "Authorization Database", nullptr));
        ClinicDbConnectionGroupBox->setTitle(QApplication::translate("w_DatabaseConnectionsConfigurationDialog", "Clinic Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class w_DatabaseConnectionsConfigurationDialog: public Ui_w_DatabaseConnectionsConfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_DATABASECONNECTIONSCONFIGURATIONDIALOG_H
