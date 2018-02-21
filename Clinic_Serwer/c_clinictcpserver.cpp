#include "c_clinictcpserver.h"

c_ClinicTcpServer::c_ClinicTcpServer()
{

}

c_ClinicTcpServer::c_ClinicTcpServer(QMap<QString, QVariant> settings)
{
    this->iterfaceName = settings["interfaceName"].toString();
    this->port = settings["port"].toInt();

    if(settings["interfaceName"].toString() == "any")
        this->address = QHostAddress::Any;
    else
    {
        QNetworkInterface interface;
        foreach (QNetworkInterface i, QNetworkInterface::allInterfaces()) {
            if (i.name() == settings["interfaceName"].toString())
                interface = i;
        }

        this->address = ((interface.addressEntries())[interface.addressEntries().length() - 1]).ip();
    }
}

c_ClinicTcpServer::~c_ClinicTcpServer()
{

}

QMap<QString, QVariant> c_ClinicTcpServer::ShareProperties() const
{
    QMap<QString, QVariant> map;
    map.insert("port", this->port);
    map.insert("interfaceName", this->iterfaceName);
    map.insert("address", this->address.toString());
    map.insert("isListening", this->isListening());

    return map;
}

void c_ClinicTcpServer::UpdateProperties(QMap<QString, QVariant> map)
{
    this->port = map["port"].toInt();
    this->iterfaceName = map["interfaceName"].toString();

    if(map["interfaceName"].toString() == "any")
        this->address = QHostAddress::Any;
    else
    {
        QNetworkInterface interface;
        foreach (QNetworkInterface i, QNetworkInterface::allInterfaces()) {
            if (i.name() == map["interfaceName"].toString())
                interface = i;
        }

        this->address = ((interface.addressEntries())[interface.addressEntries().length() - 1]).ip();
    }
    map.insert("address", this->address.toString());

    emit this->PropertiesChanged(map);
}
