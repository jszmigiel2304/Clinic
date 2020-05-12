#ifndef C_MYACTION_H
#define C_MYACTION_H

#include <QObject>
#include <QMap>
#include <QString>
#include <QVariant>
#include <QJsonObject>
#include <QJsonDocument>

enum Action {REPLY = -1, LOGIN = 0};

class c_myAction : public QObject
{
    Q_OBJECT
public:
    explicit c_myAction(QObject *parent = nullptr);
    c_myAction(Action action, QJsonDocument json);

    Action getAction() const;
    void setAction(const Action &value);

    QMap<QString, QVariant> getVars() const;
    void setVars(const QMap<QString, QVariant> &value);

    QJsonDocument getJson() const;
    void setJson(const QJsonDocument &value);

signals:

public slots:

private:
    Action action;
    QMap<QString, QVariant> vars;

    QJsonDocument json;
};

#endif // C_MYACTION_H
