/********************************************************************************
** Form generated from reading UI file 'w_serverinformationwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_SERVERINFORMATIONWIDGET_H
#define UI_W_SERVERINFORMATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_w_ServerInformationWidget
{
public:
    QGroupBox *groupBox;
    QLabel *l_serverStatus;
    QLabel *l_address;
    QLabel *l_port;
    QLabel *f_serverStatus;
    QLabel *f_address;
    QLabel *f_port;

    void setupUi(QWidget *w_ServerInformationWidget)
    {
        if (w_ServerInformationWidget->objectName().isEmpty())
            w_ServerInformationWidget->setObjectName(QStringLiteral("w_ServerInformationWidget"));
        w_ServerInformationWidget->resize(781, 130);
        groupBox = new QGroupBox(w_ServerInformationWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(5, 5, 771, 121));
        l_serverStatus = new QLabel(groupBox);
        l_serverStatus->setObjectName(QStringLiteral("l_serverStatus"));
        l_serverStatus->setGeometry(QRect(10, 15, 80, 30));
        l_address = new QLabel(groupBox);
        l_address->setObjectName(QStringLiteral("l_address"));
        l_address->setGeometry(QRect(10, 45, 80, 30));
        l_port = new QLabel(groupBox);
        l_port->setObjectName(QStringLiteral("l_port"));
        l_port->setGeometry(QRect(10, 75, 80, 30));
        f_serverStatus = new QLabel(groupBox);
        f_serverStatus->setObjectName(QStringLiteral("f_serverStatus"));
        f_serverStatus->setGeometry(QRect(90, 15, 400, 30));
        f_address = new QLabel(groupBox);
        f_address->setObjectName(QStringLiteral("f_address"));
        f_address->setGeometry(QRect(90, 45, 400, 30));
        f_port = new QLabel(groupBox);
        f_port->setObjectName(QStringLiteral("f_port"));
        f_port->setGeometry(QRect(90, 75, 400, 30));

        retranslateUi(w_ServerInformationWidget);

        QMetaObject::connectSlotsByName(w_ServerInformationWidget);
    } // setupUi

    void retranslateUi(QWidget *w_ServerInformationWidget)
    {
        w_ServerInformationWidget->setWindowTitle(QApplication::translate("w_ServerInformationWidget", "Form", nullptr));
        groupBox->setTitle(QApplication::translate("w_ServerInformationWidget", "Server", nullptr));
        l_serverStatus->setText(QApplication::translate("w_ServerInformationWidget", "Status", nullptr));
        l_address->setText(QApplication::translate("w_ServerInformationWidget", "Adres", nullptr));
        l_port->setText(QApplication::translate("w_ServerInformationWidget", "Port", nullptr));
        f_serverStatus->setText(QString());
        f_address->setText(QString());
        f_port->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class w_ServerInformationWidget: public Ui_w_ServerInformationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_SERVERINFORMATIONWIDGET_H