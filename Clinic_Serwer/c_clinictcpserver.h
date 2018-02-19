#ifndef C_CLINICTCPSERVER_H
#define C_CLINICTCPSERVER_H

#include <QTcpServer>

#include "i_watched.h"

class c_ClinicTcpServer : public QTcpServer, public i_Watched
{
public:
    c_ClinicTcpServer();
    c_ClinicTcpServer(QMap<QString, QVariant> settings);
    ~c_ClinicTcpServer();
    QMap<QString, QVariant> ShareProperties() const;

private:
    int port;
    QString iterfaceName;

};

#endif // C_CLINICTCPSERVER_H
