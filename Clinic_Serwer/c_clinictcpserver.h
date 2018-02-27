#ifndef C_CLINICTCPSERVER_H
#define C_CLINICTCPSERVER_H

#include <QTcpServer>
#include <QNetworkInterface>

#include "i_watched.h"

class c_ClinicTcpServer : public QTcpServer, public i_Watched
{
    Q_OBJECT
public:
    c_ClinicTcpServer();
    c_ClinicTcpServer(QMap<QString, QVariant> settings);
    ~c_ClinicTcpServer();
    QMap<QString, QVariant> ShareProperties();

public slots:
    void UpdateProperties(QMap<QString, QVariant> map);

signals:
    void PropertiesChanged();

private:
    int port;
    QString iterfaceName;
    QHostAddress address;


};

#endif // C_CLINICTCPSERVER_H
