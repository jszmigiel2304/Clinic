#include "c_clientconnection.h"
#include "c_clinictcpserver.h"


c_ClientConnection::c_ClientConnection(qintptr ID, QObject *parent) :
    QThread(parent)
{
    this->socketDescriptor = ID;
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
        return;
    }


    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    connect(socket,SIGNAL(disconnected()), this, SLOT(disconnected()), Qt::DirectConnection);

    (dynamic_cast<c_ClinicTcpServer *>(parent()))->newClient(this);

    exec();

}

void c_ClientConnection::readyRead()
{
    QByteArray Data = QString("Connected").toUtf8();

    socket->write(Data);
}

void c_ClientConnection::disconnected()
{
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
