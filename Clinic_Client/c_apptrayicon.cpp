#include "c_apptrayicon.h"

c_AppTrayIcon *c_AppTrayIcon::Instance()
{
    static c_AppTrayIcon * instance = 0;
    if ( instance == 0 ) {
        instance = new c_AppTrayIcon(qApp);
    }
    return instance;
}

c_AppTrayIcon::~c_AppTrayIcon()
{
    this->mainWindow->deleteLater();
    this->actions->deleteLater();
    this->menu->deleteLater();
}

void c_AppTrayIcon::createActions()
{
    QAction * closeAction = new QAction(this);
    closeAction->setEnabled(true);
    closeAction->setText(tr("Zakończ"));
    closeAction->setWhatsThis("actExit");
    connect(closeAction, SIGNAL(triggered(bool)), this, SLOT(closeActionTriggered(bool)));

//    QAction * maximizeMinimizeAction = new QAction(this);
//    maximizeMinimizeAction->setEnabled(true);
//    maximizeMinimizeAction->setText(tr(""));
//    maximizeMinimizeAction->setWhatsThis("actMaxMin");

//    QAction * hideAction = new QAction(this);
//    hideAction->setEnabled(true);
//    hideAction->setText(tr("Ukryj okno"));
//    hideAction->setWhatsThis("actHide");

//    QAction * logOutAction = new QAction(this);
//    logOutAction->setEnabled(true);
//    logOutAction->setText(tr("Wyloguj"));
//    logOutAction->setWhatsThis("actLogOut");

    this->actions->addAction(closeAction);
}

void c_AppTrayIcon::createMenu()
{
    this->menu->addSeparator();
    this->menu->addAction(actions->actions()[0]);


    this->setContextMenu(this->menu);
}

void c_AppTrayIcon::createConnections()
{
}


c_AppTrayIcon::c_AppTrayIcon(QObject *parent)
{
    this->actions = new QActionGroup(this);
    this->menu = new QMenu();

    QIcon icon(":/icons/appIcon.png");
    this->setIcon(icon);

    createActions();
    createMenu();
    createConnections();
}

void c_AppTrayIcon::actionTriggered(QAction * action)
{
}

void c_AppTrayIcon::closeActionTriggered(bool)
{
    this->mainWindow->close();
    this->mainWindow->deleteLater();



    qApp->exit(0);
}

w_MainWindow *c_AppTrayIcon::getMainWindow() const
{
    return mainWindow;
}

void c_AppTrayIcon::setMainWindow(w_MainWindow *value)
{
    disconnect(value, SIGNAL(stateChanged(Qt::WindowState)));
    connect(value, SIGNAL(stateChanged(Qt::WindowStates)), this, SLOT(mainWindowStateChanged(Qt::WindowStates)));
    mainWindow = value;

}

void c_AppTrayIcon::mainWindowStateChanged(Qt::WindowStates states)
{
    if(states.testFlag(Qt::WindowNoState))
    {
        QIcon icon(":/icons/appIcon.png");
        this->showMessage(qApp->applicationName(), tr("Zminializowano do zasobnika systemowego"), icon, 2000);
    }
}
