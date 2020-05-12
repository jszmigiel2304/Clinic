#include "c_actionexecutive.h"
#include "c_clinictcpserver.h"

c_actionExecutive::c_actionExecutive(QObject *parent) : QObject(parent)
{

}

void c_actionExecutive::exec(c_myAction *action, c_ClientConnection *client)
{

    QString log = QString("Start Exec Action");
    logs->addLog(log);


    //switchof akcje
    QByteArray answer;
    QJsonDocument incomingJSON;

    if(!action->getJson().isNull()) {
        incomingJSON = action->getJson();
    }

    switch ( static_cast<int>( action->getAction() ) ) {
    case -1:
    {
        break;
    }
    case 0:
    {
        QAuthenticator tAuth;
        tAuth.setUser( incomingJSON.object()["name"].toString() );
        tAuth.setPassword( incomingJSON.object()["password"].toString() );

        log_in(tAuth, &answer);

        break;
    }
    default:
    {
        QJsonDocument mJSON;
        QJsonObject jsonObject;
        jsonObject["type"] = -1;
        jsonObject["message"] = "Nie udalo sie okreslic akcji";
        mJSON.setObject(jsonObject);

        answer = mJSON.toBinaryData();
        break;
    }
    }


    //odpowiedz serwera
//    QString answer = "";
//    answer += QString("[ Action type: %1 ] \n").arg(action->getAction());
//    answer += QString("[ Exec type: %1 ] \n").arg(  ( (action->getJson()).object() )["type"].toInt()  );
//    answer += QString("[ Login: %1 ] \n").arg(  ( (action->getJson()).object() )["login"].toString()  );
//    answer += QString("[ Password type: %1 ] \n").arg(  ( (action->getJson()).object() )["password"].toString()  );

    client->reply(answer);

    log = QString("End Exec Action");
    logs->addLog(log);
}

w_logsWindow *c_actionExecutive::getLogs() const
{
    return logs;
}

void c_actionExecutive::setLogs(w_logsWindow *value)
{
    logs = value;
}

void c_actionExecutive::log_in(QAuthenticator auth, QByteArray * answer)
{
    QList<QVariant> vars;

    QSqlQuery query( ( (dynamic_cast<c_ClinicTcpServer *>(parent()))->getDbContr() )->getDatabases()["Authorization"] );
    query.prepare("SELECT id FROM public.users WHERE name=:name AND password=:password");
    query.bindValue(":name", auth.user());
    query.bindValue(":password", auth.password());

    if(!query.exec()) {
        QSqlError aaaa = query.lastError();
    } else {
        if (query.size() >0) {
            while (query.next()) {
                QJsonDocument answerJSON;
                QJsonObject jObj;
                jObj["type"] = static_cast<int>(REPLY);
                jObj["id_user"] = query.value("id").toInt();
                //jObj["id_session"] = query.value("id").toString();
                answerJSON.setObject(jObj);
                answer->append(answerJSON.toBinaryData());

                //tworzenie sesji
            }
        } else {
            QString msg = "Nie znaleziono takiego użytkownika";
            answer->append(msg);
        }

    }
}

