/********************************************************************************
** Form generated from reading UI file 'w_interfaceinformationswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_INTERFACEINFORMATIONSWIDGET_H
#define UI_W_INTERFACEINFORMATIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_w_InterfaceInformationsWidget
{
public:
    QGroupBox *interfacaInfoGroupBox;
    QLabel *l_nameLabel;
    QLabel *l_humanNameLabel;
    QLabel *l_macLabel;
    QLabel *l_ipv4Label;
    QLabel *l_netmaskLabel;
    QLabel *l_broadcastLabel;
    QLabel *f_name;
    QLabel *f_humanName;
    QLabel *f_mac;
    QLabel *f_ipv4;
    QLabel *f_netmask;
    QLabel *f_broadcast;
    QLabel *l_isUp;
    QLabel *l_isRunning;
    QLabel *l_canBradcast;
    QLabel *l_isLoopback;
    QLabel *l_isPointToPoint;
    QLabel *l_canMulticast;
    QLabel *f_isUp;
    QLabel *f_IsRunning;
    QLabel *f_canBroadcast;
    QLabel *f_isLoopBack;
    QLabel *f_isPointToPoint;
    QLabel *f_canMlticast;

    void setupUi(QWidget *w_InterfaceInformationsWidget)
    {
        if (w_InterfaceInformationsWidget->objectName().isEmpty())
            w_InterfaceInformationsWidget->setObjectName(QStringLiteral("w_InterfaceInformationsWidget"));
        w_InterfaceInformationsWidget->resize(781, 231);
        interfacaInfoGroupBox = new QGroupBox(w_InterfaceInformationsWidget);
        interfacaInfoGroupBox->setObjectName(QStringLiteral("interfacaInfoGroupBox"));
        interfacaInfoGroupBox->setGeometry(QRect(5, 5, 771, 221));
        l_nameLabel = new QLabel(interfacaInfoGroupBox);
        l_nameLabel->setObjectName(QStringLiteral("l_nameLabel"));
        l_nameLabel->setGeometry(QRect(10, 20, 80, 30));
        l_humanNameLabel = new QLabel(interfacaInfoGroupBox);
        l_humanNameLabel->setObjectName(QStringLiteral("l_humanNameLabel"));
        l_humanNameLabel->setGeometry(QRect(10, 50, 80, 30));
        l_macLabel = new QLabel(interfacaInfoGroupBox);
        l_macLabel->setObjectName(QStringLiteral("l_macLabel"));
        l_macLabel->setGeometry(QRect(10, 80, 80, 30));
        l_ipv4Label = new QLabel(interfacaInfoGroupBox);
        l_ipv4Label->setObjectName(QStringLiteral("l_ipv4Label"));
        l_ipv4Label->setGeometry(QRect(10, 110, 80, 30));
        l_netmaskLabel = new QLabel(interfacaInfoGroupBox);
        l_netmaskLabel->setObjectName(QStringLiteral("l_netmaskLabel"));
        l_netmaskLabel->setGeometry(QRect(10, 140, 80, 30));
        l_broadcastLabel = new QLabel(interfacaInfoGroupBox);
        l_broadcastLabel->setObjectName(QStringLiteral("l_broadcastLabel"));
        l_broadcastLabel->setGeometry(QRect(10, 170, 80, 30));
        f_name = new QLabel(interfacaInfoGroupBox);
        f_name->setObjectName(QStringLiteral("f_name"));
        f_name->setGeometry(QRect(90, 20, 311, 30));
        f_humanName = new QLabel(interfacaInfoGroupBox);
        f_humanName->setObjectName(QStringLiteral("f_humanName"));
        f_humanName->setGeometry(QRect(90, 50, 311, 30));
        f_mac = new QLabel(interfacaInfoGroupBox);
        f_mac->setObjectName(QStringLiteral("f_mac"));
        f_mac->setGeometry(QRect(90, 80, 311, 30));
        f_ipv4 = new QLabel(interfacaInfoGroupBox);
        f_ipv4->setObjectName(QStringLiteral("f_ipv4"));
        f_ipv4->setGeometry(QRect(90, 110, 311, 30));
        f_netmask = new QLabel(interfacaInfoGroupBox);
        f_netmask->setObjectName(QStringLiteral("f_netmask"));
        f_netmask->setGeometry(QRect(90, 140, 311, 30));
        f_broadcast = new QLabel(interfacaInfoGroupBox);
        f_broadcast->setObjectName(QStringLiteral("f_broadcast"));
        f_broadcast->setGeometry(QRect(90, 170, 311, 30));
        l_isUp = new QLabel(interfacaInfoGroupBox);
        l_isUp->setObjectName(QStringLiteral("l_isUp"));
        l_isUp->setGeometry(QRect(411, 20, 100, 30));
        l_isRunning = new QLabel(interfacaInfoGroupBox);
        l_isRunning->setObjectName(QStringLiteral("l_isRunning"));
        l_isRunning->setGeometry(QRect(411, 50, 100, 30));
        l_canBradcast = new QLabel(interfacaInfoGroupBox);
        l_canBradcast->setObjectName(QStringLiteral("l_canBradcast"));
        l_canBradcast->setGeometry(QRect(411, 80, 100, 30));
        l_isLoopback = new QLabel(interfacaInfoGroupBox);
        l_isLoopback->setObjectName(QStringLiteral("l_isLoopback"));
        l_isLoopback->setGeometry(QRect(411, 110, 100, 30));
        l_isPointToPoint = new QLabel(interfacaInfoGroupBox);
        l_isPointToPoint->setObjectName(QStringLiteral("l_isPointToPoint"));
        l_isPointToPoint->setGeometry(QRect(411, 140, 100, 30));
        l_canMulticast = new QLabel(interfacaInfoGroupBox);
        l_canMulticast->setObjectName(QStringLiteral("l_canMulticast"));
        l_canMulticast->setGeometry(QRect(411, 170, 100, 30));
        f_isUp = new QLabel(interfacaInfoGroupBox);
        f_isUp->setObjectName(QStringLiteral("f_isUp"));
        f_isUp->setGeometry(QRect(511, 20, 50, 30));
        f_IsRunning = new QLabel(interfacaInfoGroupBox);
        f_IsRunning->setObjectName(QStringLiteral("f_IsRunning"));
        f_IsRunning->setGeometry(QRect(511, 50, 50, 30));
        f_canBroadcast = new QLabel(interfacaInfoGroupBox);
        f_canBroadcast->setObjectName(QStringLiteral("f_canBroadcast"));
        f_canBroadcast->setGeometry(QRect(511, 80, 50, 30));
        f_isLoopBack = new QLabel(interfacaInfoGroupBox);
        f_isLoopBack->setObjectName(QStringLiteral("f_isLoopBack"));
        f_isLoopBack->setGeometry(QRect(511, 110, 50, 30));
        f_isPointToPoint = new QLabel(interfacaInfoGroupBox);
        f_isPointToPoint->setObjectName(QStringLiteral("f_isPointToPoint"));
        f_isPointToPoint->setGeometry(QRect(511, 140, 50, 30));
        f_canMlticast = new QLabel(interfacaInfoGroupBox);
        f_canMlticast->setObjectName(QStringLiteral("f_canMlticast"));
        f_canMlticast->setGeometry(QRect(511, 170, 50, 30));

        retranslateUi(w_InterfaceInformationsWidget);

        QMetaObject::connectSlotsByName(w_InterfaceInformationsWidget);
    } // setupUi

    void retranslateUi(QWidget *w_InterfaceInformationsWidget)
    {
        w_InterfaceInformationsWidget->setWindowTitle(QApplication::translate("w_InterfaceInformationsWidget", "Form", nullptr));
        interfacaInfoGroupBox->setTitle(QApplication::translate("w_InterfaceInformationsWidget", "Interface", nullptr));
        l_nameLabel->setText(QApplication::translate("w_InterfaceInformationsWidget", "Nazwa", nullptr));
        l_humanNameLabel->setText(QApplication::translate("w_InterfaceInformationsWidget", "Nazwa", nullptr));
        l_macLabel->setText(QApplication::translate("w_InterfaceInformationsWidget", "MAC", nullptr));
        l_ipv4Label->setText(QApplication::translate("w_InterfaceInformationsWidget", "IPv4", nullptr));
        l_netmaskLabel->setText(QApplication::translate("w_InterfaceInformationsWidget", "Netmask", nullptr));
        l_broadcastLabel->setText(QApplication::translate("w_InterfaceInformationsWidget", "Broadcast", nullptr));
        f_name->setText(QString());
        f_humanName->setText(QString());
        f_mac->setText(QString());
        f_ipv4->setText(QString());
        f_netmask->setText(QString());
        f_broadcast->setText(QString());
        l_isUp->setText(QApplication::translate("w_InterfaceInformationsWidget", "Is Up", nullptr));
        l_isRunning->setText(QApplication::translate("w_InterfaceInformationsWidget", "Is Running", nullptr));
        l_canBradcast->setText(QApplication::translate("w_InterfaceInformationsWidget", "Can Broadcast", nullptr));
        l_isLoopback->setText(QApplication::translate("w_InterfaceInformationsWidget", "Is LoopBack", nullptr));
        l_isPointToPoint->setText(QApplication::translate("w_InterfaceInformationsWidget", "Is PointToPoint", nullptr));
        l_canMulticast->setText(QApplication::translate("w_InterfaceInformationsWidget", "Can Multicast", nullptr));
        f_isUp->setText(QString());
        f_IsRunning->setText(QString());
        f_canBroadcast->setText(QString());
        f_isLoopBack->setText(QString());
        f_isPointToPoint->setText(QString());
        f_canMlticast->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class w_InterfaceInformationsWidget: public Ui_w_InterfaceInformationsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_INTERFACEINFORMATIONSWIDGET_H
