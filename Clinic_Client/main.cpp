#include "w_mainwindow.h"
#include "c_settingscontroller.h"
#include "m_filespaths.h"
#include "c_versioncontroller.h"
#include "c_apptrayicon.h"
#include "w_loggingdialog.h"

#include <QApplication>
#include <QSettings>
#include <QFile>
#include <QSql>
#include <QStatusBar>
#include <QMessageBox>
#include <QSystemTrayIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationName("Clinic - Client");

    c_VersionController * versionCtrlr = new c_VersionController(qApp);

    QStringList * tempFileList = new QStringList();
    tempFileList->clear();

    if( !versionCtrlr->checkFiles(tempFileList) )
    {
        versionCtrlr->repairFiles(tempFileList);

        tempFileList->clear();
        if( !versionCtrlr->checkFiles(tempFileList) ) {
            QMessageBox msgBox;

            QString msg = QString("Nie udało się odczytać niezbędnych plików\nZamykam aplikację");

            msgBox.setText(msg);
            msgBox.exec();

            a.exit(0);
        }


        /*     1. konfiguracja połączenia z serwerem
         *     2. sprawdzenie aktualnej wersji
         *     3. pobranie wersji
         *     4. ponowne sprawdzenie plikow
         */
    }
    delete tempFileList;

    c_SettingsController settingsCtrlr(versionCtrlr->getConfigIniFileName());
    settingsCtrlr.LoadSettings();

    c_AppTrayIcon * appTrayIcon = c_AppTrayIcon::Instance();
    w_MainWindow * mainWindow = w_MainWindow::Instance();

    mainWindow->AddWatchedObject("appTrayIcon", dynamic_cast<i_Watched *>(appTrayIcon));
    appTrayIcon->AddWatchedObject("mainWindow", dynamic_cast<i_Watched *>(mainWindow));

    appTrayIcon->setMainWindow(mainWindow);
    appTrayIcon->show();

    mainWindow->loadSettings(settingsCtrlr.getSettings("window"));
    mainWindow->show();

    w_LoggingDialog * loggingDialog = new w_LoggingDialog(mainWindow);
    loggingDialog->setAuthorizationSettings( settingsCtrlr.getSettings("user"), true);
    loggingDialog->setServerConnectionSettings( settingsCtrlr.getSettings("server"), true );
    loggingDialog->show();

    return a.exec();
}