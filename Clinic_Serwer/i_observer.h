#ifndef I_OBSERVER_H
#define I_OBSERVER_H

#include "i_watched.h"
#include <QList>
#include <QMap>

class i_Observer
{
public:
    i_Observer();
    QMap<QString, i_Watched *> watchedObjectsList;

    virtual void AddWatchedObject(QString name, i_Watched &object);
    virtual void DeleteWatchedObject(QString name);
    virtual QMap<QString , QVariant> GetWatchedObjectProperties(QString name);


};

#endif // I_OBSERVER_H
