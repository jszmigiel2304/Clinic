#ifndef C_CLINICCLIENT_H
#define C_CLINICCLIENT_H

#include <QObject>
#include <QTcpSocket>

class c_ClinicClient : public QObject
{
    Q_OBJECT
public:
    explicit c_ClinicClient(QObject *parent = nullptr);
    
private:
    

signals:

public slots:
};

#endif // C_CLINICCLIENT_H
