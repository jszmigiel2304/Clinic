#include "c_clinictcpserver.h"

c_ClinicTcpServer::c_ClinicTcpServer()
{

}

c_ClinicTcpServer::c_ClinicTcpServer(QMap<QString, QVariant> settings)
{
    this->iterfaceName = settings["interface"].toString();
    this->port = settings["port"].toInt();
}

c_ClinicTcpServer::~c_ClinicTcpServer()
{

}

QMap<QString, QVariant> c_ClinicTcpServer::ShareProperties() const
{
    QMap<QString, QVariant> map;
    map.insert("port", this->port);
    map.insert("interfaceName", this->iterfaceName);


    return map;
}
