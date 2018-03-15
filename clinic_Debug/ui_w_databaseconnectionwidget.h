/********************************************************************************
** Form generated from reading UI file 'w_databaseconnectionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_DATABASECONNECTIONWIDGET_H
#define UI_W_DATABASECONNECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_w_DatabaseConnectionWidget
{
public:
    QLabel *l_driverName;
    QComboBox *f_driverName;
    QLabel *l_hostName;
    QLabel *l_Port;
    QLabel *l_dbName;
    QLabel *l_userName;
    QLabel *l_password;
    QLineEdit *f_hostName;
    QLineEdit *f_port;
    QLineEdit *f_dbName;
    QLineEdit *f_userName;
    QLineEdit *f_password;
    QPushButton *testConnectionButton;

    void setupUi(QWidget *w_DatabaseConnectionWidget)
    {
        if (w_DatabaseConnectionWidget->objectName().isEmpty())
            w_DatabaseConnectionWidget->setObjectName(QStringLiteral("w_DatabaseConnectionWidget"));
        w_DatabaseConnectionWidget->resize(300, 250);
        w_DatabaseConnectionWidget->setMinimumSize(QSize(300, 250));
        w_DatabaseConnectionWidget->setMaximumSize(QSize(300, 250));
        l_driverName = new QLabel(w_DatabaseConnectionWidget);
        l_driverName->setObjectName(QStringLiteral("l_driverName"));
        l_driverName->setGeometry(QRect(0, 0, 100, 30));
        l_driverName->setIndent(2);
        f_driverName = new QComboBox(w_DatabaseConnectionWidget);
        f_driverName->setObjectName(QStringLiteral("f_driverName"));
        f_driverName->setGeometry(QRect(100, 0, 200, 30));
        l_hostName = new QLabel(w_DatabaseConnectionWidget);
        l_hostName->setObjectName(QStringLiteral("l_hostName"));
        l_hostName->setGeometry(QRect(0, 35, 100, 30));
        l_hostName->setIndent(2);
        l_Port = new QLabel(w_DatabaseConnectionWidget);
        l_Port->setObjectName(QStringLiteral("l_Port"));
        l_Port->setGeometry(QRect(0, 70, 100, 30));
        l_Port->setIndent(2);
        l_dbName = new QLabel(w_DatabaseConnectionWidget);
        l_dbName->setObjectName(QStringLiteral("l_dbName"));
        l_dbName->setGeometry(QRect(0, 105, 100, 30));
        l_dbName->setIndent(2);
        l_userName = new QLabel(w_DatabaseConnectionWidget);
        l_userName->setObjectName(QStringLiteral("l_userName"));
        l_userName->setGeometry(QRect(0, 140, 100, 30));
        l_userName->setIndent(2);
        l_password = new QLabel(w_DatabaseConnectionWidget);
        l_password->setObjectName(QStringLiteral("l_password"));
        l_password->setGeometry(QRect(0, 175, 100, 30));
        l_password->setIndent(2);
        f_hostName = new QLineEdit(w_DatabaseConnectionWidget);
        f_hostName->setObjectName(QStringLiteral("f_hostName"));
        f_hostName->setGeometry(QRect(100, 35, 200, 30));
        f_port = new QLineEdit(w_DatabaseConnectionWidget);
        f_port->setObjectName(QStringLiteral("f_port"));
        f_port->setGeometry(QRect(100, 70, 200, 30));
        f_dbName = new QLineEdit(w_DatabaseConnectionWidget);
        f_dbName->setObjectName(QStringLiteral("f_dbName"));
        f_dbName->setGeometry(QRect(100, 106, 200, 30));
        f_userName = new QLineEdit(w_DatabaseConnectionWidget);
        f_userName->setObjectName(QStringLiteral("f_userName"));
        f_userName->setGeometry(QRect(100, 140, 200, 30));
        f_password = new QLineEdit(w_DatabaseConnectionWidget);
        f_password->setObjectName(QStringLiteral("f_password"));
        f_password->setGeometry(QRect(100, 175, 200, 30));
        f_password->setEchoMode(QLineEdit::Password);
        testConnectionButton = new QPushButton(w_DatabaseConnectionWidget);
        testConnectionButton->setObjectName(QStringLiteral("testConnectionButton"));
        testConnectionButton->setGeometry(QRect(0, 210, 300, 40));

        retranslateUi(w_DatabaseConnectionWidget);

        QMetaObject::connectSlotsByName(w_DatabaseConnectionWidget);
    } // setupUi

    void retranslateUi(QWidget *w_DatabaseConnectionWidget)
    {
        w_DatabaseConnectionWidget->setWindowTitle(QApplication::translate("w_DatabaseConnectionWidget", "Form", nullptr));
        l_driverName->setText(QApplication::translate("w_DatabaseConnectionWidget", "Sterownik", nullptr));
        l_hostName->setText(QApplication::translate("w_DatabaseConnectionWidget", "Nazwa hosta", nullptr));
        l_Port->setText(QApplication::translate("w_DatabaseConnectionWidget", "Port", nullptr));
        l_dbName->setText(QApplication::translate("w_DatabaseConnectionWidget", "Nazwa Bazy danych", nullptr));
        l_userName->setText(QApplication::translate("w_DatabaseConnectionWidget", "Nazwa u\305\274ytkownika", nullptr));
        l_password->setText(QApplication::translate("w_DatabaseConnectionWidget", "Has\305\202o", nullptr));
        testConnectionButton->setText(QApplication::translate("w_DatabaseConnectionWidget", "Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class w_DatabaseConnectionWidget: public Ui_w_DatabaseConnectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_DATABASECONNECTIONWIDGET_H
