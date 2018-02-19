#ifndef I_WATCHED_H
#define I_WATCHED_H

#include <QMap>
#include <QVariant>

class i_Watched
{
public:
    i_Watched();

    virtual QMap<QString, QVariant> ShareProperties() const;
};

#endif // I_WATCHED_H
