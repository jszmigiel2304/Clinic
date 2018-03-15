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

QMap<QString, QVariant> c_ClinicTcpServer::ShareProperties()
{
    QMap<QString, QVariant> map;
    map.insert("port", this->port);
    map.insert("interfaceName", this->iterfaceName);
    map.insert("address", this->address.toString());
    map.insert("isListening", this->isListening());

    return map;
}

QString c_ClinicTcpServer::ShareMessege()
{
    return this->status;
}

void c_ClinicTcpServer::runServer()
{
    QTcpSocket * socket = new QTcpSocket();

    this->status = "Sprawdzam połączenie z bazą danych:\n";
    this->status += dbContr->getAuthDbName();
    this->status += "\n";
    this->status += dbContr->getAuthDbHostName();
    this->status += ":";
    this->status += QString::number(dbContr->getAuthDbPort());

    emit this->MessageChanged(this->status, -1);

    c_MyDatabaseConnection * connection = new c_MyDatabaseConnection(dbContr->getAuthDbHostName(), dbContr->getAuthDbPort(),
                                                                     dbContr->getAuthDriver(), dbContr->getAuthDbName(),
                                                                     dbContr->getAuthDbUserName(), dbContr->getAuthPassword());

    if(connection->TestConnection(5000))
    {
        dbContr->AddDatabase("Authorization");
        dbContr->SetUpDatabase("Authorization");
        this->status = "   [ Authorization Database Connection ] Poprawnie skonfigurowane";
    }
    else
    {
        this->status = "   [ Authorization Database Connection ] Błąd";
    }

//    socket->connectToHost(dbContr->getAuthDbHostName(), dbContr->getAuthDbPort());
//    if(socket->waitForConnected(5000))
//    {
//        dbContr->AddDatabase("Authorization");
//        dbContr->SetUpDatabase("Authorization");
//        socket->disconnectFromHost();
//        this->status = "   [ Authorization Database Connection ] Poprawnie skonfigurowane";
//    }
//    else
//    {
//        socket->disconnectFromHost();
//        this->status = "   [ Authorization Database Connection ] Błąd";
//    }

    emit this->MessageChanged(this->status, 1000);


    this->status = "Sprawdzam połączenie z bazą danych:\n";
    this->status += dbContr->getClinicDbName();
    this->status += "\n";
    this->status += dbContr->getClinicDbHostName();
    this->status += ":";
    this->status += QString::number(dbContr->getClinicDbPort());

    emit this->MessageChanged(this->status, -1);

    connection->setHostAddress(dbContr->getClinicDbHostName());
    connection->setPort(dbContr->getClinicDbPort());
    connection->setDriver(dbContr->getClinicDriver());
    connection->setDatabaseName(dbContr->getClinicDbName());
    connection->setUserName(dbContr->getClinicDbUserName());
    connection->setPassword(dbContr->getClinicPassword());

    if(connection->TestConnection(5000))
    {
        dbContr->AddDatabase("Clinic");
        dbContr->SetUpDatabase("Clinic");
        socket->disconnectFromHost();
        this->status = "   [ Clinic Database Connection ] Poprawnie skonfigurowane";
    }
    else
    {
        this->status = "   [ Clinic Database Connection ] Błąd";
    }


//    socket->connectToHost(dbContr->getClinicDbHostName(), dbContr->getClinicDbPort());
//    if(socket->waitForConnected(3000))
//    {
//        dbContr->AddDatabase("Clinic");
//        dbContr->SetUpDatabase("Clinic");
//        socket->disconnectFromHost();
//        this->status = "   [ Clinic Database Connection ] Poprawnie skonfigurowane";
//    }
//    else
//    {
//        socket->disconnectFromHost();
//        this->status = "   [ Clinic Database Connection ] Błąd";
//    }

    emit this->MessageChanged(this->status, 1000);

    this->status = "Uruchamiam serwer.";

    emit this->MessageChanged(this->status, -1);


    this->listen();

    if(!this->isListening())
    {
        this->status = "[ Server TCP ]   Nie udało się uruchomić";
        emit this->MessageChanged(this->status, 2000);
    }
     else
    {
        this->status = "[ Server TCP ] Uruchomiony";
        emit this->MessageChanged(this->status, 2000);
    }

    delete socket;

    emit this->PropertiesChanged();
    emit this->dbContr->PropertiesChanged();
}

void c_ClinicTcpServer::stopServer()
{
    this->close();
    this->dbContr->RemoveAllDatabases();

    emit this->PropertiesChanged();
    emit this->dbContr->PropertiesChanged();

    this->status = "[Server TCP] Zatrzymano";
    emit this->MessageChanged(this->status, 2000);

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

    emit this->PropertiesChanged();
}

void c_ClinicTcpServer::setDbContr(c_MySqlDatabaseController *value)
{
    dbContr = value;
}

