/********************************************************************************
** Form generated from reading UI file 'w_databaseinformationswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_DATABASEINFORMATIONSWIDGET_H
#define UI_W_DATABASEINFORMATIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_w_DatabaseInformationsWidget
{
public:
    QGroupBox *databseInfoGroupBox;
    QLabel *l_dbStatus;
    QLabel *l_address;
    QLabel *l_port;
    QLabel *l_dbName;
    QLabel *f_dbStatus;
    QLabel *f_address;
    QLabel *f_port;
    QLabel *f_Name;

    void setupUi(QWidget *w_DatabaseInformationsWidget)
    {
        if (w_DatabaseInformationsWidget->objectName().isEmpty())
            w_DatabaseInformationsWidget->setObjectName(QStringLiteral("w_DatabaseInformationsWidget"));
        w_DatabaseInformationsWidget->resize(380, 150);
        databseInfoGroupBox = new QGroupBox(w_DatabaseInformationsWidget);
        databseInfoGroupBox->setObjectName(QStringLiteral("databseInfoGroupBox"));
        databseInfoGroupBox->setGeometry(QRect(5, 5, 371, 140));
        databseInfoGroupBox->setStyleSheet(QStringLiteral("font: 75 8pt \"MS Shell Dlg 2\";"));
        l_dbStatus = new QLabel(databseInfoGroupBox);
        l_dbStatus->setObjectName(QStringLiteral("l_dbStatus"));
        l_dbStatus->setGeometry(QRect(10, 20, 80, 30));
        l_address = new QLabel(databseInfoGroupBox);
        l_address->setObjectName(QStringLiteral("l_address"));
        l_address->setGeometry(QRect(10, 50, 80, 30));
        l_port = new QLabel(databseInfoGroupBox);
        l_port->setObjectName(QStringLiteral("l_port"));
        l_port->setGeometry(QRect(10, 80, 80, 30));
        l_dbName = new QLabel(databseInfoGroupBox);
        l_dbName->setObjectName(QStringLiteral("l_dbName"));
        l_dbName->setGeometry(QRect(10, 110, 80, 30));
        f_dbStatus = new QLabel(databseInfoGroupBox);
        f_dbStatus->setObjectName(QStringLiteral("f_dbStatus"));
        f_dbStatus->setGeometry(QRect(90, 20, 250, 30));
        f_address = new QLabel(databseInfoGroupBox);
        f_address->setObjectName(QStringLiteral("f_address"));
        f_address->setGeometry(QRect(90, 50, 250, 30));
        f_port = new QLabel(databseInfoGroupBox);
        f_port->setObjectName(QStringLiteral("f_port"));
        f_port->setGeometry(QRect(90, 80, 250, 30));
        f_Name = new QLabel(databseInfoGroupBox);
        f_Name->setObjectName(QStringLiteral("f_Name"));
        f_Name->setGeometry(QRect(90, 110, 250, 30));

        retranslateUi(w_DatabaseInformationsWidget);

        QMetaObject::connectSlotsByName(w_DatabaseInformationsWidget);
    } // setupUi

    void retranslateUi(QWidget *w_DatabaseInformationsWidget)
    {
        w_DatabaseInformationsWidget->setWindowTitle(QApplication::translate("w_DatabaseInformationsWidget", "Form", nullptr));
        databseInfoGroupBox->setTitle(QApplication::translate("w_DatabaseInformationsWidget", "Database Informations", nullptr));
        l_dbStatus->setText(QApplication::translate("w_DatabaseInformationsWidget", "Status", nullptr));
        l_address->setText(QApplication::translate("w_DatabaseInformationsWidget", "Address", nullptr));
        l_port->setText(QApplication::translate("w_DatabaseInformationsWidget", "Port", nullptr));
        l_dbName->setText(QApplication::translate("w_DatabaseInformationsWidget", "Name", nullptr));
        f_dbStatus->setText(QString());
        f_address->setText(QString());
        f_port->setText(QString());
        f_Name->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class w_DatabaseInformationsWidget: public Ui_w_DatabaseInformationsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_DATABASEINFORMATIONSWIDGET_H
