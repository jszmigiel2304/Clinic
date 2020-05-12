#include "c_myaction.h"

c_myAction::c_myAction(QObject *parent) : QObject(parent)
{

}

c_myAction::c_myAction(Action action, QJsonDocument json)
{
    this->action = action;
    this->json = json;
}


Action c_myAction::getAction() const
{
    return action;
}

void c_myAction::setAction(const Action &value)
{
    action = value;
}

QMap<QString, QVariant> c_myAction::getVars() const
{
    return vars;
}

void c_myAction::setVars(const QMap<QString, QVariant> &value)
{
    vars = value;
}

QJsonDocument c_myAction::getJson() const
{
    return json;
}

void c_myAction::setJson(const QJsonDocument &value)
{
    json = value;
}
