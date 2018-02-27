#ifndef C_MYSQLDATABASECONTROLLER_H
#define C_MYSQLDATABASECONTROLLER_H

#include "i_watched.h"

#include <QObject>
#include <QSql>
#include <QSqlDatabase>
#include <QMap>

class c_MySqlDatabaseController : public QObject, public i_Watched
{
    Q_OBJECT
public:
    c_MySqlDatabaseController();
    c_MySqlDatabaseController(QMap<QString, QVariant> settings);
    c_MySqlDatabaseController(QMap<QString, QVariant> authDbSettings, QMap<QString, QVariant> clinicDbSettings);
    QMap<QString, QVariant> ShareProperties();
    void UpdateProperties(QMap<QString, QVariant> map);
    ~c_MySqlDatabaseController();

    void AddDatabase(QString name, QString driver);
    void RemoveDatabase(QString name);
    void RemoveAllDatabases();
    void SetUpDatabase(QString name);
    void SetUpDatabase(QString name, QString hostName, int port, QString databaseName, QString userName, QString password);
    void SetUpDatabase(QString name, QMap<QString, QVariant> settings);

signals:
    void PropertiesChanged();

private:
    QMap<QString, QSqlDatabase> databases;    

    QString authDbHostName;
    int authDbPort;
    QString authDbName;
    QString authDbUserName;
    QString authPassword;

    QString clinicDbHostName;
    int clinicDbPort;
    QString clinicDbName;
    QString clinicDbUserName;
    QString clinicPassword;

};

#endif // C_MYSQLDATABASE_H
