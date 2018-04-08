#ifndef C_MYSQLDATABASECONTROLLER_H
#define C_MYSQLDATABASECONTROLLER_H

#include "i_watched.h"
#include "c_mydatabaseconnection.h"

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
    QMap<QString, QVariant> ShareProperties(QString sharedData = "all");
    void UpdateProperties(QMap<QString, QVariant> map);
    ~c_MySqlDatabaseController();

    void AddDatabase(QString name);
    void RemoveDatabase(QString name);
    void RemoveAllDatabases();
    void SetUpDatabase(QString name);
    void SetUpDatabase(QString name, QString hostName, int port, QString databaseName, QString userName, QString password);
    void SetUpDatabase(QString name, QMap<QString, QVariant> settings);

    QString getAuthDbName() const;
    void setAuthDbName(const QString &value);

    QString getAuthDbHostName() const;
    void setAuthDbHostName(const QString &value);

    int getAuthDbPort() const;
    void setAuthDbPort(int value);

    QString getClinicDbHostName() const;
    void setClinicDbHostName(const QString &value);

    int getClinicDbPort() const;
    void setClinicDbPort(int value);

    QString getClinicDbName() const;
    void setClinicDbName(const QString &value);

    QString getAuthDriver() const;
    void setAuthDriver(const QString &value);

    QString getAuthDbUserName() const;
    void setAuthDbUserName(const QString &value);

    QString getAuthPassword() const;
    void setAuthPassword(const QString &value);

    QString getClinicDriver() const;
    void setClinicDriver(const QString &value);

    QString getClinicDbUserName() const;
    void setClinicDbUserName(const QString &value);

    QString getClinicPassword() const;
    void setClinicPassword(const QString &value);

signals:
    void PropertiesChanged();

private:
    QMap<QString, QSqlDatabase> databases;

    QString authDriver;
    QString authDbHostName;
    int authDbPort;
    QString authDbName;
    QString authDbUserName;
    QString authPassword;

    QString clinicDriver;
    QString clinicDbHostName;
    int clinicDbPort;
    QString clinicDbName;
    QString clinicDbUserName;
    QString clinicPassword;

};

#endif // C_MYSQLDATABASE_H
