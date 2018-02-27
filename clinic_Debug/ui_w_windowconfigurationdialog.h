/********************************************************************************
** Form generated from reading UI file 'w_windowconfigurationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_WINDOWCONFIGURATIONDIALOG_H
#define UI_W_WINDOWCONFIGURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_w_windowConfigurationDialog
{
public:
    QDialogButtonBox *buttonBox;
    QCheckBox *startMinimizeCheckBox;
    QCheckBox *minimizeToTrayOnCloseCheckBox;

    void setupUi(QDialog *w_windowConfigurationDialog)
    {
        if (w_windowConfigurationDialog->objectName().isEmpty())
            w_windowConfigurationDialog->setObjectName(QStringLiteral("w_windowConfigurationDialog"));
        w_windowConfigurationDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(w_windowConfigurationDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 250, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::NoButton);
        startMinimizeCheckBox = new QCheckBox(w_windowConfigurationDialog);
        startMinimizeCheckBox->setObjectName(QStringLiteral("startMinimizeCheckBox"));
        startMinimizeCheckBox->setGeometry(QRect(10, 10, 300, 30));
        minimizeToTrayOnCloseCheckBox = new QCheckBox(w_windowConfigurationDialog);
        minimizeToTrayOnCloseCheckBox->setObjectName(QStringLiteral("minimizeToTrayOnCloseCheckBox"));
        minimizeToTrayOnCloseCheckBox->setGeometry(QRect(10, 40, 300, 30));

        retranslateUi(w_windowConfigurationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), w_windowConfigurationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), w_windowConfigurationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(w_windowConfigurationDialog);
    } // setupUi

    void retranslateUi(QDialog *w_windowConfigurationDialog)
    {
        w_windowConfigurationDialog->setWindowTitle(QApplication::translate("w_windowConfigurationDialog", "Ustawienia - Okno", nullptr));
        startMinimizeCheckBox->setText(QApplication::translate("w_windowConfigurationDialog", "Zminimalizuj do zasobnika systemowego przy starcie", nullptr));
        minimizeToTrayOnCloseCheckBox->setText(QApplication::translate("w_windowConfigurationDialog", "Zminimalizuj do zasobnika systemowego przy zamkni\304\231ciu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class w_windowConfigurationDialog: public Ui_w_windowConfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_WINDOWCONFIGURATIONDIALOG_H
