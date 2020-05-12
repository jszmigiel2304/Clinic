#ifndef C_MYPARSER_H
#define C_MYPARSER_H

#include "w_logswindow.h"
#include "c_myaction.h"

#include <QObject>
#include <QByteArray>
#include <QJsonObject>
#include <QJsonDocument>

class c_myParser : public QObject
{
    Q_OBJECT
public:
    explicit c_myParser(QObject *parent = nullptr);

    c_myAction *Parse(QByteArray byteArray);

    w_logsWindow *getLogs() const;
    void setLogs(w_logsWindow *value);

signals:

public slots:

private:
    w_logsWindow *logs;

};

#endif // C_MYPARSER_H
