#ifndef W_LOGGINGDIALOG_H
#define W_LOGGINGDIALOG_H

#include "i_observer.h"
#include "w_serverconnectiondialog.h"

#include <QApplication>
#include <QDialog>

namespace Ui {
class w_LoggingDialog;
}

class w_LoggingDialog : public QDialog, public i_Observer, public i_Watched
{
    Q_OBJECT

public:
    explicit w_LoggingDialog(QWidget *parent = 0);
    ~w_LoggingDialog();
    void setServerConnectionSettings(QMap<QString, QVariant> settings, bool refresh = 0);
    void setAuthorizationSettings(QMap<QString, QVariant> settings, bool refresh = 0);


    QMap<QString, QVariant> ShareProperties(QString sharedData = "all");
    void UpdateProperties(QMap<QString, QVariant> map);

public slots:
    void refresh();

private slots:
    void on_b_showHideButton_clicked();

    void on_b_configureButton_clicked();

    void validateUserName();
    void validateUserPassword();

private:
    Ui::w_LoggingDialog *ui;

    bool serverAreaShown;

    QString userName;
    QString userPassword;
    QString serverAddress;
    int serverPort;
};

#endif // W_LOGGINGDIALOG_H
