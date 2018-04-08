#ifndef C_MYCONNECTIONTESTER_H
#define C_MYCONNECTIONTESTER_H

#include <QObject>
#include <QTcpSocket>
#include <QTimer>

class c_MyConnectionTester : public QObject
{
    Q_OBJECT
public:
    explicit c_MyConnectionTester(QObject * parent = nullptr);
    explicit c_MyConnectionTester(QString address, int port, QObject * parent = nullptr);


    QString getAddress() const;
    void setAddress(const QString &value);

    int getPort() const;
    void setPort(int value);

    virtual bool TestConnection(int time = 3000);

public slots:


private:
    QString address;
    int port;
};

#endif // C_MYCONNECTIONTESTER_H
