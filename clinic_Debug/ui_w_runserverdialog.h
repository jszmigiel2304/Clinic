/********************************************************************************
** Form generated from reading UI file 'w_runserverdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_W_RUNSERVERDIALOG_H
#define UI_W_RUNSERVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_w_runServerDialog
{
public:
    QLabel *describeLabel;
    QLabel *processLabel;

    void setupUi(QDialog *w_runServerDialog)
    {
        if (w_runServerDialog->objectName().isEmpty())
            w_runServerDialog->setObjectName(QStringLiteral("w_runServerDialog"));
        w_runServerDialog->setWindowModality(Qt::NonModal);
        w_runServerDialog->resize(350, 80);
        w_runServerDialog->setMinimumSize(QSize(350, 80));
        w_runServerDialog->setMaximumSize(QSize(350, 80));
        w_runServerDialog->setStyleSheet(QStringLiteral("background-color: #FFFFFF;"));
        w_runServerDialog->setModal(false);
        describeLabel = new QLabel(w_runServerDialog);
        describeLabel->setObjectName(QStringLiteral("describeLabel"));
        describeLabel->setGeometry(QRect(80, 0, 270, 80));
        describeLabel->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        describeLabel->setFont(font);
        describeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        processLabel = new QLabel(w_runServerDialog);
        processLabel->setObjectName(QStringLiteral("processLabel"));
        processLabel->setGeometry(QRect(0, 0, 80, 80));

        retranslateUi(w_runServerDialog);

        QMetaObject::connectSlotsByName(w_runServerDialog);
    } // setupUi

    void retranslateUi(QDialog *w_runServerDialog)
    {
        w_runServerDialog->setWindowTitle(QApplication::translate("w_runServerDialog", "Prosz\304\231 czeka\304\207...", nullptr));
        describeLabel->setText(QApplication::translate("w_runServerDialog", "Prosz\304\231 czeka\304\207...", nullptr));
        processLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class w_runServerDialog: public Ui_w_runServerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_W_RUNSERVERDIALOG_H
