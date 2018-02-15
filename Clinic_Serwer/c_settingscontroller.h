#ifndef C_SETTINGSCONTROLLER_H
#define C_SETTINGSCONTROLLER_H

#include <QString>
#include <QFile>
#include <QSettings>
#include <QMessageBox>

class c_SettingsController
{
public:
    c_SettingsController(QString settingsFilePath);
    void LoadSettings();

private:
    QString settingsFilePath;

    QMap<QString, QMap<QString, QVariant>> settings;

};

#endif // C_SETTINGSCONTROLLER_H
