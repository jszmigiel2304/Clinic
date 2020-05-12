#include "c_clientconnection.h"
#include "c_clinictcpserver.h"


c_ClientConnection::c_ClientConnection(qintptr ID, QObject *parent) :
    QThread(parent)
{
    this->socketDescriptor = ID;
    this->logs = w_logsWindow::Instance();
}

c_ClientConnection::~c_ClientConnection()
{
}

void c_ClientConnection::run()
{

    this->socket = new QSslSocket();

    if(!this->socket->setSocketDescriptor(this->socketDescriptor))
    {
        emit error(this->socket->error());

        QString log = QString("c_ClientConnection::run() \n"
                              "error(this->socket->error())");
        w_logsWindow::Instance()->addLog(log);

        return;
    }


    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    connect(socket,SIGNAL(disconnected()), this, SLOT(disconnected()), Qt::DirectConnection);


    (dynamic_cast<c_ClinicTcpServer *>(parent()))->newClient(this);

    socket->open(QIODevice::ReadWrite);

    QString log = QString("c_ClientConnection::run() \n"
                          "OK");
    w_logsWindow::Instance()->addLog(log);

    exec();

}

void c_ClientConnection::reply(QByteArray answer)
{
    this->socket->write(answer);
}

void c_ClientConnection::readyRead()
{
    QString log("Start read");
    logs->addLog(log);

    QTextStream ts( socket );

    QString data = ts.readAll();
    //logs->addLog(data);

    //ts << "Odpowiedz zwrotna \n" << "Odebrano: \n" << data;

    c_myAction * action = (dynamic_cast<c_ClinicTcpServer *>(this->parent()))->getParser()->Parse(data.toUtf8());
    (dynamic_cast<c_ClinicTcpServer *>(this->parent()))->getExecutive()->exec(action, this);

}

void c_ClientConnection::disconnected()
{
//    QString log = QString("c_ClientConnection::disconnected() \n");
//    w_logsWindow::Instance()->addLog(log);

    (dynamic_cast<c_ClinicTcpServer *>(parent()))->removeClient(this->socketDescriptor);
    socket->deleteLater();
    exit(0);
}

qintptr c_ClientConnection::getSocketDescriptor() const
{
    return socketDescriptor;
}

void c_ClientConnection::setSocketDescriptor(const qintptr &value)
{
    socketDescriptor = value;
}

QSslSocket *c_ClientConnection::getSocket() const
{
    return socket;
}

void c_ClientConnection::setSocket(QSslSocket *value)
{
    socket = value;
}
