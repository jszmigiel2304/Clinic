#ifndef C_SETTINGSCONTROLLER_H
#define C_SETTINGSCONTROLLER_H

#include "m_fileMacros.h"
#include "m_defaultinifile.h"

#include <QString>
#include <QFile>
#include <QSettings>
#include <QMessageBox>

class c_SettingsController
{
public:
    c_SettingsController(QString settingsFilePath);
    void LoadSettings();
    void CreateIniFile();
    QString getSettingsFilePath() const;
    QMap<QString, QMap<QString, QVariant>> getSettings() const;
    QMap<QString, QVariant> getSettings(QString groupName) const;

private:
    QString settingsFilePath;

    QMap<QString, QMap<QString, QVariant>> settings;

};

#endif // C_SETTINGSCONTROLLER_H
