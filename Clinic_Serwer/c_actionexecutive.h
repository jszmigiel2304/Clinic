#ifndef C_ACTIONEXECUTIVE_H
#define C_ACTIONEXECUTIVE_H

#include "c_myaction.h"
#include "c_clientconnection.h"
#include "w_logswindow.h"

#include <QObject>
#include <QAuthenticator>
#include <QMap>
#include <QList>
#include <QVariant>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlResult>

class c_actionExecutive : public QObject
{
    Q_OBJECT
public:
    explicit c_actionExecutive(QObject *parent = nullptr);

    void exec(c_myAction * action, c_ClientConnection * client);

    w_logsWindow *getLogs() const;
    void setLogs(w_logsWindow *value);

signals:

public slots:

protected:
    void log_in(QAuthenticator auth, QByteArray * answer);

private:
    w_logsWindow *logs;
};

#endif // C_ACTIONEXECUTIVE_H
