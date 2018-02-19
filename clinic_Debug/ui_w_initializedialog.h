/********************************************************************************
** Form generated from reading UI file 'w_initializedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_INITIALIZEDIALOG_H
#define UI_W_INITIALIZEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_w_initializeDialog
{
public:
    QLabel *describeLabel;
    QLabel *processLabel;

    void setupUi(QDialog *w_initializeDialog)
    {
        if (w_initializeDialog->objectName().isEmpty())
            w_initializeDialog->setObjectName(QStringLiteral("w_initializeDialog"));
        w_initializeDialog->resize(250, 160);
        w_initializeDialog->setMinimumSize(QSize(250, 160));
        w_initializeDialog->setMaximumSize(QSize(250, 160));
        w_initializeDialog->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        w_initializeDialog->setModal(true);
        describeLabel = new QLabel(w_initializeDialog);
        describeLabel->setObjectName(QStringLiteral("describeLabel"));
        describeLabel->setGeometry(QRect(0, 0, 250, 40));
        describeLabel->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        describeLabel->setFont(font);
        describeLabel->setAlignment(Qt::AlignCenter);
        processLabel = new QLabel(w_initializeDialog);
        processLabel->setObjectName(QStringLiteral("processLabel"));
        processLabel->setGeometry(QRect(85, 40, 80, 80));

        retranslateUi(w_initializeDialog);

        QMetaObject::connectSlotsByName(w_initializeDialog);
    } // setupUi

    void retranslateUi(QDialog *w_initializeDialog)
    {
        w_initializeDialog->setWindowTitle(QApplication::translate("w_initializeDialog", "Inicijalizacja", nullptr));
        describeLabel->setText(QApplication::translate("w_initializeDialog", "Inicjalizacja...", nullptr));
        processLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class w_initializeDialog: public Ui_w_initializeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_INITIALIZEDIALOG_H
