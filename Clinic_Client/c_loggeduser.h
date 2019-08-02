#ifndef C_LOGGEDUSER_H
#define C_LOGGEDUSER_H

#include "m_loggeduser.h"

#include <QObject>
#include <QAuthenticator>


class c_loggedUser : public m_loggedUser
{
    Q_OBJECT
public:
    static c_loggedUser *Instance();
    ~c_loggedUser();

    QAuthenticator getAuthenticator();

private:
    c_loggedUser();
};

#endif // C_LOGGEDUSER_H
