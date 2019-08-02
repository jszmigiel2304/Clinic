#ifndef W_LOGGINGDIALOG_H
#define W_LOGGINGDIALOG_H

#include "i_observer.h"
#include "w_serverconnectiondialog.h"

#include <QApplication>
#include <QDialog>
#include <QAuthenticator>

namespace Ui {
class w_LoggingDialog;
}

class w_LoggingDialog : public QDialog, public i_Observer, public i_Watched
{
    Q_OBJECT
public:
    static w_LoggingDialog * Instance();
    ~w_LoggingDialog();
    void setServerConnectionSettings(QMap<QString, QVariant> settings, bool refresh = 0);
    void setAuthorizationSettings(QAuthenticator authorizationData, bool refresh = 0);
    void setWindowSettings(QMap<QString, QVariant> settings, bool refresh = 0);


    QMap<QString, QVariant> ShareProperties(QString sharedData = "all");
    void UpdateProperties(QMap<QString, QVariant> map);

public slots:
    void refresh();
    void closeEvent(QCloseEvent * event);


private slots:
    void on_b_showHideButton_clicked();

    void on_b_configureButton_clicked();

    void validateUserName();
    void validateUserPassword();

    void on_b_logIn_clicked();

private:
    explicit w_LoggingDialog(QWidget *parent = nullptr);
    Ui::w_LoggingDialog *ui;
    void addStyleSheets();

    bool serverAreaShown;

    QString userName;
    QString userPassword;
    QString serverAddress;
    int serverPort;


    bool minimizeToTrayOnClose;
    bool minimizeToTrayOnStart;


signals:
    void stateChanged(Qt::WindowStates);
    void myStateChanged(Qt::WindowStates, bool);
};

#endif // W_LOGGINGDIALOG_H
