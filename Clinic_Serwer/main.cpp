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
    c_SettingsController settContr(INI_FILE);

    w_initializeDialog * init = new w_initializeDialog(&a, &settContr);
    init->show();

    if(!init->checkFiles())
    {
        a.exit(0);
    }
    else
    {
        w_MainWindow * w = new w_MainWindow(settContr.getSettings("window"));
        c_ClinicTcpServer * server = new c_ClinicTcpServer(settContr.getSettings("server"));

        w->AddWatchedObject("server", dynamic_cast<i_Watched *> (server) );
        w->show();


        return a.exec();

        server->deleteLater();
        w->deleteLater();
    }

}


