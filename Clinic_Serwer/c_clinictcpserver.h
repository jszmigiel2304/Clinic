#ifndef C_CLINICTCPSERVER_H
#define C_CLINICTCPSERVER_H

#include "i_watched.h"
#include "c_mysqldatabasecontroller.h"
#include "w_runserverdialog.h"
#include "c_mydatabaseconnection.h"

#include <QTcpServer>
#include <QNetworkInterface>
#include <QTcpSocket>
#include <QMessageBox>


class c_ClinicTcpServer : public QTcpServer, public i_Watched
{
    Q_OBJECT
public:
    c_ClinicTcpServer();
    c_ClinicTcpServer(QMap<QString, QVariant> settings);
    ~c_ClinicTcpServer();
    QMap<QString, QVariant> ShareProperties();
    QString ShareMessege();

    void runServer();
    void stopServer();

    void setDbContr(c_MySqlDatabaseController *value);

public slots:
    void UpdateProperties(QMap<QString, QVariant> map);

signals:
    void PropertiesChanged();
    void MessageChanged(QString msg, int time);

private:
    int port;
    QString iterfaceName;
    QHostAddress address;
    QString status;

    c_MySqlDatabaseController * dbContr;
};

#endif // C_CLINICTCPSERVER_H
