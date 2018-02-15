#include "c_clinictcpserver.h"

c_ClinicTcpServer::c_ClinicTcpServer()
{

}

QMap<QString, QVariant> c_ClinicTcpServer::ShareProperties()
{
    QMap<QString, QVariant> map;
    map.insert("port", this->port);
    map.insert("name", this->name);


    return map;
}
