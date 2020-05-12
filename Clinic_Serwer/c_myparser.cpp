#include "c_myparser.h"

c_myParser::c_myParser(QObject *parent) : QObject(parent)
{

}

c_myAction *c_myParser::Parse(QByteArray byteArray)
{
    QString log = QString("Start Parsing");
    logs->addLog(log);

    c_myAction * action = new c_myAction();

    QJsonDocument mJSON = QJsonDocument::fromBinaryData(byteArray);

        action->setAction( static_cast<Action>( (mJSON.object()).value("type").toInt() ) );
        w_logsWindow::Instance()->addLog(   QString::number(   mJSON.object().value("type").toInt()    )     );
        w_logsWindow::Instance()->addLog(   mJSON.object().value("name").toString()     );
        w_logsWindow::Instance()->addLog(   mJSON.object().value("password").toString()     );


    action->setJson( mJSON );

//    QJsonObject jObject;
//    jObject["type"] = 0;
//    jObject["login"] = "jszmigiel2304";
//    jObject["password"] = "passwrod";

//    mJSON.setObject(jObject);

//    action->setAction(LOGIN);
//    action->setJson(mJSON);



    log = QString("End Parsing");
    logs->addLog(log);

    return action;
}

w_logsWindow *c_myParser::getLogs() const
{
    return logs;
}

void c_myParser::setLogs(w_logsWindow *value)
{
    logs = value;
}
