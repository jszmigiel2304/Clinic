/********************************************************************************
** Form generated from reading UI file 'w_serverinformationswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_SERVERINFORMATIONSWIDGET_H
#define UI_W_SERVERINFORMATIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_w_ServerInformationsWidget
{
public:
    QGroupBox *serverInfoGroupBox;
    QLabel *l_serverStatus;
    QLabel *l_address;
    QLabel *l_port;
    QLabel *f_serverStatus;
    QLabel *f_address;
    QLabel *f_port;
    QLabel *l_AuthDbStatus;
    QLabel *l_ClinicDbStatus;
    QLabel *l_HostsConnectedNumber;
    QLabel *f_AuthDbStatus;
    QLabel *f_ClinicDbStatus;
    QLabel *f_HostsNumber;

    void setupUi(QWidget *w_ServerInformationsWidget)
    {
        if (w_ServerInformationsWidget->objectName().isEmpty())
            w_ServerInformationsWidget->setObjectName(QStringLiteral("w_ServerInformationsWidget"));
        w_ServerInformationsWidget->resize(781, 130);
        serverInfoGroupBox = new QGroupBox(w_ServerInformationsWidget);
        serverInfoGroupBox->setObjectName(QStringLiteral("serverInfoGroupBox"));
        serverInfoGroupBox->setGeometry(QRect(5, 5, 771, 121));
        l_serverStatus = new QLabel(serverInfoGroupBox);
        l_serverStatus->setObjectName(QStringLiteral("l_serverStatus"));
        l_serverStatus->setGeometry(QRect(10, 15, 80, 30));
        l_address = new QLabel(serverInfoGroupBox);
        l_address->setObjectName(QStringLiteral("l_address"));
        l_address->setGeometry(QRect(10, 45, 80, 30));
        l_port = new QLabel(serverInfoGroupBox);
        l_port->setObjectName(QStringLiteral("l_port"));
        l_port->setGeometry(QRect(10, 75, 80, 30));
        f_serverStatus = new QLabel(serverInfoGroupBox);
        f_serverStatus->setObjectName(QStringLiteral("f_serverStatus"));
        f_serverStatus->setGeometry(QRect(90, 15, 300, 30));
        f_address = new QLabel(serverInfoGroupBox);
        f_address->setObjectName(QStringLiteral("f_address"));
        f_address->setGeometry(QRect(90, 45, 300, 30));
        f_port = new QLabel(serverInfoGroupBox);
        f_port->setObjectName(QStringLiteral("f_port"));
        f_port->setGeometry(QRect(90, 75, 300, 30));
        l_AuthDbStatus = new QLabel(serverInfoGroupBox);
        l_AuthDbStatus->setObjectName(QStringLiteral("l_AuthDbStatus"));
        l_AuthDbStatus->setGeometry(QRect(411, 15, 100, 30));
        l_ClinicDbStatus = new QLabel(serverInfoGroupBox);
        l_ClinicDbStatus->setObjectName(QStringLiteral("l_ClinicDbStatus"));
        l_ClinicDbStatus->setGeometry(QRect(411, 45, 100, 30));
        l_HostsConnectedNumber = new QLabel(serverInfoGroupBox);
        l_HostsConnectedNumber->setObjectName(QStringLiteral("l_HostsConnectedNumber"));
        l_HostsConnectedNumber->setGeometry(QRect(411, 75, 100, 30));
        f_AuthDbStatus = new QLabel(serverInfoGroupBox);
        f_AuthDbStatus->setObjectName(QStringLiteral("f_AuthDbStatus"));
        f_AuthDbStatus->setGeometry(QRect(511, 15, 250, 30));
        f_ClinicDbStatus = new QLabel(serverInfoGroupBox);
        f_ClinicDbStatus->setObjectName(QStringLiteral("f_ClinicDbStatus"));
        f_ClinicDbStatus->setGeometry(QRect(511, 45, 250, 30));
        f_HostsNumber = new QLabel(serverInfoGroupBox);
        f_HostsNumber->setObjectName(QStringLiteral("f_HostsNumber"));
        f_HostsNumber->setGeometry(QRect(511, 75, 250, 30));

        retranslateUi(w_ServerInformationsWidget);

        QMetaObject::connectSlotsByName(w_ServerInformationsWidget);
    } // setupUi

    void retranslateUi(QWidget *w_ServerInformationsWidget)
    {
        w_ServerInformationsWidget->setWindowTitle(QApplication::translate("w_ServerInformationsWidget", "Form", nullptr));
        serverInfoGroupBox->setTitle(QApplication::translate("w_ServerInformationsWidget", "Server", nullptr));
        l_serverStatus->setText(QApplication::translate("w_ServerInformationsWidget", "Status", nullptr));
        l_address->setText(QApplication::translate("w_ServerInformationsWidget", "Address", nullptr));
        l_port->setText(QApplication::translate("w_ServerInformationsWidget", "Port", nullptr));
        f_serverStatus->setText(QString());
        f_address->setText(QString());
        f_port->setText(QString());
        l_AuthDbStatus->setText(QApplication::translate("w_ServerInformationsWidget", "Auth Database", nullptr));
        l_ClinicDbStatus->setText(QApplication::translate("w_ServerInformationsWidget", "Clinic Database", nullptr));
        l_HostsConnectedNumber->setText(QApplication::translate("w_ServerInformationsWidget", "Hosts Number", nullptr));
        f_AuthDbStatus->setText(QString());
        f_ClinicDbStatus->setText(QString());
        f_HostsNumber->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class w_ServerInformationsWidget: public Ui_w_ServerInformationsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_SERVERINFORMATIONSWIDGET_H
