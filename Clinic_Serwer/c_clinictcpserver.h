#ifndef C_CLINICTCPSERVER_H
#define C_CLINICTCPSERVER_H

#include <QTcpServer>

#include "i_watched.h"

class c_ClinicTcpServer : public QTcpServer, public i_Watched
{
public:
    c_ClinicTcpServer();

    int port = 6543;
    QString name = "loopback_0";

    QMap<QString, QVariant> ShareProperties();
};

#endif // C_CLINICTCPSERVER_H
