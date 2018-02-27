#include "c_mysqldatabasecontroller.h"



c_MySqlDatabaseController::c_MySqlDatabaseController()
{

}

c_MySqlDatabaseController::c_MySqlDatabaseController(QMap<QString, QVariant> settings)
{

}

c_MySqlDatabaseController::c_MySqlDatabaseController(QMap<QString, QVariant> authDbSettings, QMap<QString, QVariant> clinicDbSettings)
{
    this->authDbHostName = authDbSettings["address"].toString();
    this->authDbPort = authDbSettings["port"].toInt();
    this->authDbName = authDbSettings["database_name"].toString();
    this->authDbUserName = authDbSettings["username"].toString();
    this->authPassword = authDbSettings["password"].toString();


    this->clinicDbHostName = clinicDbSettings["address"].toString();
    this->clinicDbPort = clinicDbSettings["port"].toInt();
    this->clinicDbName = clinicDbSettings["database_name"].toString();
    this->clinicDbUserName = clinicDbSettings["username"].toString();
    this->clinicPassword = clinicDbSettings["password"].toString();
}

QMap<QString, QVariant> c_MySqlDatabaseController::ShareProperties()
{
    QMap<QString, QVariant> map;

    map.insert("authDbStatus", QSqlDatabase::database("Authorization").isOpen());
    map.insert("authAddress", this->authDbHostName);
    map.insert("authPort", this->authDbPort);
    map.insert("authDbName", this->authDbName);

    map.insert("clinicDbStatus", QSqlDatabase::database("Clinic").isOpen());
    map.insert("clinicAddress", this->clinicDbHostName);
    map.insert("clinicPort", this->clinicDbPort);
    map.insert("clinicDbName", this->clinicDbName);

    return map;
}

void c_MySqlDatabaseController::UpdateProperties(QMap<QString, QVariant> map)
{
    this->authDbHostName = map["authAddress"].toString();
    this->authDbName = map["authDbName"].toString();
    this->authDbPort = map["authPort"].toInt();
    this->authDbUserName = map["authUserName"].toString();
    this->authPassword = map["authPassword"].toString();

    this->clinicDbHostName = map["clinicAddress"].toString();
    this->clinicDbName = map["clinicDbName"].toString();
    this->clinicDbPort = map["clinicPort"].toInt();
    this->clinicDbUserName = map["clinicUserName"].toString();
    this->clinicPassword = map["clinicPassword"].toString();

    emit this->PropertiesChanged();
}

c_MySqlDatabaseController::~c_MySqlDatabaseController()
{

}

void c_MySqlDatabaseController::AddDatabase(QString name, QString driver)
{
    this->databases.insert(name, QSqlDatabase::addDatabase(driver, name));
}

void c_MySqlDatabaseController::RemoveDatabase(QString name)
{
    this->databases.remove(name);
    this->databases[name].removeDatabase(name);
    QSqlDatabase::removeDatabase(name);
}

void c_MySqlDatabaseController::RemoveAllDatabases()
{
    foreach (QSqlDatabase db, this->databases) {
        this->RemoveDatabase(db.connectionName());
    }
}

void c_MySqlDatabaseController::SetUpDatabase(QString name)
{
    QSqlDatabase::database(name).setHostName( ( (name == "Clinic") ? this->clinicDbHostName : this->authDbHostName  ) );
    QSqlDatabase::database(name).setPort( ( (name == "Clinic") ? this->clinicDbPort : this->authDbPort  ) );
    QSqlDatabase::database(name).setDatabaseName( ( (name == "Clinic") ? this->clinicDbName : this->authDbName  ) );
    QSqlDatabase::database(name).setUserName( ( (name == "Clinic") ? this->clinicDbUserName : this->authDbUserName  ) );
    QSqlDatabase::database(name).setPassword( ( (name == "Clinic") ? this->clinicPassword : this->authPassword  ) );
}

void c_MySqlDatabaseController::SetUpDatabase(QString name, QString hostName, int port, QString databaseName, QString userName, QString password)
{
    QSqlDatabase::database(name).setHostName(hostName);
    QSqlDatabase::database(name).setPort(port);
    QSqlDatabase::database(name).setDatabaseName(databaseName);
    QSqlDatabase::database(name).setUserName(userName);
    QSqlDatabase::database(name).setPassword(password);
}

void c_MySqlDatabaseController::SetUpDatabase(QString name, QMap<QString, QVariant> settings)
{
    QSqlDatabase::database(name).setHostName(settings["address"].toString());
    QSqlDatabase::database(name).setPort(settings["port"].toInt());
    QSqlDatabase::database(name).setDatabaseName(settings["database_name"].toString());
    QSqlDatabase::database(name).setUserName(settings["username"].toString());
    QSqlDatabase::database(name).setPassword(settings["password"].toString());
}

