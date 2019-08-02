#ifndef C_CLINICTCPSERVER_H
#define C_CLINICTCPSERVER_H

#include "i_watched.h"
#include "c_mysqldatabasecontroller.h"
#include "w_runserverdialog.h"
#include "c_mydatabaseconnection.h"
#include "c_clientconnection.h"
#include "c_myconnection.h"
#include "w_logswindow.h"

#include <QTcpServer>
#include <QNetworkInterface>
#include <QTcpSocket>
#include <QMessageBox>
#include <QDataStream>
#include <QTextStream>
#include <QList>

class c_ClinicTcpServer : public QTcpServer, public i_Watched
{
    Q_OBJECT
public:
    c_ClinicTcpServer();
    c_ClinicTcpServer(QMap<QString, QVariant> settings, QObject *parent = nullptr);
    ~c_ClinicTcpServer();
    QMap<QString, QVariant> ShareProperties(QString sharedData = "all");
    QString ShareMessege();

    void runServer();
    void stopServer();
    void startServer();

    void setDbContr(c_MySqlDatabaseController *value);
    void newClient(c_ClientConnection *connection = nullptr);
    void removeClient(qintptr id);
    void removeClient(c_ClientConnection *connection = nullptr);
    void removeClients();

    QList<c_ClientConnection *> getHostsList() const;

public slots:
    void UpdateProperties(QMap<QString, QVariant> map);

signals:
    void PropertiesChanged();
    void MessageChanged(QString msg, int time);

private:
    quint16 port;
    QString iterfaceName;
    QHostAddress address;
    QString status;

    c_MySqlDatabaseController * dbContr;

    QList<c_ClientConnection *> hostsList;

    w_logsWindow * logs;

protected:
    void incomingConnection(qintptr socketDescriptor);
};

#endif // C_CLINICTCPSERVER_H
