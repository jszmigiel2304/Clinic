#include "c_settingscontroller.h"

c_SettingsController::c_SettingsController(QString settingsFilePath)
{
    this->settingsFilePath = settingsFilePath;
}

void c_SettingsController::LoadSettings()
{
    QFile file(this->settingsFilePath);

    if(!file.exists())
    {
        QString eerror = "błąd";

        QMessageBox msgBox;
        msgBox.setText(eerror);
        msgBox.exec();
    }
    else
    {
        QSettings sett(this->settingsFilePath, QSettings::IniFormat);
        QStringList groups = sett.childGroups();

        foreach(QString groupName, groups)
        {
            sett.beginGroup(groupName);

            QMap <QString, QVariant> map;

            foreach (const QString &childKey, sett.childKeys())
                map.insert(childKey, sett.value(childKey).toString());

            this->settings.insert(groupName, map);

            sett.endGroup();
        }

    }

}

