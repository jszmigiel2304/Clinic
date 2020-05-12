#ifndef C_CONNECTIONTOSERVERCONTROLLER_H
#define C_CONNECTIONTOSERVERCONTROLLER_H


#include "w_logswindow.h"

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QDataStream>
#include <QTextStream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QCryptographicHash>

class c_connectionToServerController : public QObject
{
    Q_OBJECT
public:
    static c_connectionToServerController *Instance();
    ~c_connectionToServerController();


    void setConnection(QMap<QString, QVariant> settings);
    void runSocket();

    QString getHost() const;
    void setHost(const QString &value);

    quint16 getPort() const;
    void setPort(const quint16 &value);

signals:

public slots:
    void closeConnection();
    void sendData(QByteArray data);
    void sendText(QString data);

private:
    explicit c_connectionToServerController(QObject *parent = nullptr);
    QTcpSocket * socket;
    QString host;
    quint16 port;

private slots:
    //from Qtcpsocket
    void socketConnected();
    void socketDisconnected();
    void socketError(QAbstractSocket::SocketError socketError);
    void socketStateChanged(QAbstractSocket::SocketState socketState);
    void socketFoundHost();

    //from QIODevice
    void socketReadyRead();
    void socketBytesWritten(qint64 bytes);

};

#endif // C_CONNECTIONTOSERVERCONTROLLER_H
