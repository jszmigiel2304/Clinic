#include "i_observer.h"

i_Observer::i_Observer()
{

}

void i_Observer::AddWatchedObject(QString name, i_Watched &object)
{
    this->watchedObjectsList.insert(name, &object);
}

void i_Observer::DeleteWatchedObject(QString name)
{
    this->watchedObjectsList.remove(name);
}

QMap<QString, QVariant> i_Observer::GetWatchedObjectProperties(QString name)
{
    return this->watchedObjectsList[name]->ShareProperties();
}
