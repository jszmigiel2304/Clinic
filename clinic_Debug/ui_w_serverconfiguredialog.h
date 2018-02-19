/********************************************************************************
** Form generated from reading UI file 'w_serverconfiguredialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_SERVERCONFIGUREDIALOG_H
#define UI_W_SERVERCONFIGUREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_w_ServerConfigureDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *w_ServerConfigureDialog)
    {
        if (w_ServerConfigureDialog->objectName().isEmpty())
            w_ServerConfigureDialog->setObjectName(QStringLiteral("w_ServerConfigureDialog"));
        w_ServerConfigureDialog->resize(400, 400);
        w_ServerConfigureDialog->setMaximumSize(QSize(400, 400));
        w_ServerConfigureDialog->setModal(false);
        label = new QLabel(w_ServerConfigureDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(25, 25, 40, 20));
        lineEdit = new QLineEdit(w_ServerConfigureDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(65, 25, 60, 20));

        retranslateUi(w_ServerConfigureDialog);

        QMetaObject::connectSlotsByName(w_ServerConfigureDialog);
    } // setupUi

    void retranslateUi(QDialog *w_ServerConfigureDialog)
    {
        w_ServerConfigureDialog->setWindowTitle(QApplication::translate("w_ServerConfigureDialog", "Serwer - ustawienia", nullptr));
        label->setText(QApplication::translate("w_ServerConfigureDialog", "Port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class w_ServerConfigureDialog: public Ui_w_ServerConfigureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_SERVERCONFIGUREDIALOG_H
