#include "w_mainwindow.h"
#include "c_clinictcpserver.h"
#include "m_fileMacros.h"
#include "c_settingscontroller.h"
#include "w_initializedialog.h"

#include <QApplication>
#include <QSettings>
#include <QFile>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    c_SettingsController settController(INI_FILE);
    settController.LoadSettings();



    w_initializeDialog * init = new w_initializeDialog(&a, &settController);
    init->show();
    init->exec();

    QFile cssFile(CSS_STYLES_FILE);
    cssFile.open(QFile::ReadOnly);
    QString cssStyles = QLatin1String(cssFile.readAll());

    a.setStyleSheet(cssStyles);

    // załadowanie pliku css - KONIEC

    w_MainWindow w;
    c_ClinicTcpServer server;

    //w.AddWatchedObject("server", dynamic_cast<i_Watched *> (*server) );
    w.show();


    return a.exec();
}
