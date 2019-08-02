#include "c_apptrayicon.h"

c_AppTrayIcon *c_AppTrayIcon::Instance()
{
    static c_AppTrayIcon * instance = nullptr;
    if ( instance == nullptr ) {
        instance = new c_AppTrayIcon(qApp);
    }
    return instance;
}

c_AppTrayIcon::~c_AppTrayIcon()
{
    this->mainWindow->deleteLater();
    this->actions->deleteLater();
    this->menu->deleteLater();
    this->modCtrlr->deleteLater();
    this->user->deleteLater();

    if(this->connectionCtrlr != nullptr)
        delete this->connectionCtrlr;

    if(this->mainWindow != nullptr)
        delete this->mainWindow;


    if(this->logWindow != nullptr)
        delete this->logWindow;

    if(w_LoggingDialog::Instance() != nullptr)
        delete w_LoggingDialog::Instance();

}

void c_AppTrayIcon::createActions()
{
    QAction * closeAction = new QAction(this);
    closeAction->setEnabled(true);
    closeAction->setText(tr("Zakończ"));
    closeAction->setWhatsThis("actExit");
    closeAction->setVisible(true);
    connect(closeAction, SIGNAL(triggered(bool)), this, SLOT(closeActionTriggered(bool)));

    QAction * raiseAction = new QAction(this);
    raiseAction->setEnabled(true);
    raiseAction->setText(tr("Pokaż okna"));
    raiseAction->setVisible(false);
    raiseAction->setWhatsThis("actRaise");
    connect(raiseAction, SIGNAL(triggered(bool)), this, SLOT(raiseActionTriggered(bool)));

    QAction * hideAction = new QAction(this);
    hideAction->setEnabled(true);
    hideAction->setText(tr("Ukryj okna"));
    hideAction->setVisible(true);
    hideAction->setWhatsThis("actHide");
    connect(hideAction, SIGNAL(triggered(bool)), this, SLOT(hideActionTriggered(bool)));

    QAction * logOutAction = new QAction(this);
    logOutAction->setEnabled(true);
    logOutAction->setText(tr("Wyloguj"));
    logOutAction->setVisible(false);
    logOutAction->setWhatsThis("actLogOut");
    connect(logOutAction, SIGNAL(triggered(bool)), this, SLOT(logOutActionTriggered(bool)));

    QAction * logInAction = new QAction(this);
    logInAction->setEnabled(true);
    logInAction->setText(tr("Zaloguj się"));
    logInAction->setVisible(true);
    logInAction->setWhatsThis("actLogIn");
    connect(logInAction, SIGNAL(triggered(bool)), this, SLOT(logInActionTriggered(bool)));


    this->actions->addAction(closeAction);
    this->actions->addAction(raiseAction);
    this->actions->addAction(hideAction);
    this->actions->addAction(logOutAction);
    this->actions->addAction(logInAction);
}

void c_AppTrayIcon::createMenu()
{
    this->menu->addSeparator();
    this->menu->addAction(actions->actions()[1]);
    this->menu->addAction(actions->actions()[2]);
    this->menu->addSeparator();
    this->menu->addAction(actions->actions()[3]);
    this->menu->addAction(actions->actions()[4]);
    this->menu->addSeparator();
    this->menu->addAction(actions->actions()[0]);


    this->setContextMenu(this->menu);
}

void c_AppTrayIcon::createConnections()
{
    connect(this->mainWindow, SIGNAL(myStateChanged(Qt::WindowStates,bool)), this, SLOT(mainWindowStateChanged(Qt::WindowStates,bool)));
}


c_AppTrayIcon::c_AppTrayIcon(QObject *parent)
{
    this->setParent(parent);
    connect(qApp, SIGNAL(aboutToQuit()), SLOT(deleteLater()));

    this->settCtrlr = new c_SettingsController();
    this->settCtrlr->LoadSettings();

    this->user = c_loggedUser::Instance();
    QMap<QString, QVariant> map;
    if( !(map = settCtrlr->getSettings("user")).empty() ) {
        this->user->setName( map["name"].toString() );
        this->user->setPassword( map["password"].toString() );
    }

    this->modCtrlr = new c_modulesController();
    this->modCtrlr->LoadSettings( settCtrlr->getSettings("application") );
    foreach ( QString str, this->modCtrlr->getModulesNames() ) {
        this->modCtrlr->LoadModuleSettings(str, settCtrlr->getSettings(str) );
    }


    this->mainWindow = w_MainWindow::Instance();
    this->mainWindow->loadSettings( settCtrlr->getSettings("window") );

    this->logWindow = w_logsWindow::Instance();
    logWindow->setWindowModality(Qt::NonModal);

    this->mainWindow->AddWatchedObject("modulesController", dynamic_cast<i_Watched *>(this->getModCtrlr()) );

    this->actions = new QActionGroup(this);
    this->menu = new QMenu();


    QIcon icon(":/icons/appIcon.png");
    this->setIcon(icon);

    createActions();
    createMenu();
    createConnections();

    delete this->settCtrlr;
}

void c_AppTrayIcon::hideAllWindows()
{
    if(mainWindow != nullptr )
        mainWindow->hide();

//    if(this->logWindow != nullptr)
//        logWindow->hide();

    if(w_LoggingDialog::Instance() != nullptr)
        w_LoggingDialog::Instance()->hide();

    logWindow->addLog("All windows minimized to tray. \n");
}

bool c_AppTrayIcon::getUserIsLogged() const
{
    return user->getIsLogged();
}

void c_AppTrayIcon::setUserIsLogged(bool value)
{
    user->setIsLogged(value);
}

c_modulesController *c_AppTrayIcon::getModCtrlr() const
{
    return modCtrlr;
}

void c_AppTrayIcon::setModCtrlr(c_modulesController * value)
{
    modCtrlr = value;
}

void c_AppTrayIcon::actionTriggered(QAction *)
{
}

void c_AppTrayIcon::closeActionTriggered(bool)
{
    this->mainWindow->close();
    //this->mainWindow->deleteLater();



    qApp->exit(0);
}

void c_AppTrayIcon::raiseActionTriggered(bool)
{

}

void c_AppTrayIcon::hideActionTriggered(bool)
{

}

void c_AppTrayIcon::logInActionTriggered(bool)
{

}

void c_AppTrayIcon::logOutActionTriggered(bool)
{

}

w_MainWindow *c_AppTrayIcon::getMainWindow() const
{
    return mainWindow;
}

void c_AppTrayIcon::setMainWindow(w_MainWindow *)
{
}

void c_AppTrayIcon::run()
{
    this->settCtrlr = new c_SettingsController();
    this->settCtrlr->LoadSettings();

    this->connectionCtrlr = c_connectionToServerController::Instance();
    this->connectionCtrlr->setConnection( this->settCtrlr->getSettings("server") );
    this->connectionCtrlr->runSocket();

    QStringList modulesNames;

    QString modulesString = this->settCtrlr->getSettings("application")["modules"].toString();
    QStringList modules = modulesString.split(',', QString::SkipEmptyParts);
    foreach (QString str1, modules) {
        modulesNames << str1;
    }

    this->modCtrlr->LoadModules(modulesNames);

    this->mainWindow = w_MainWindow::Instance();
    mainWindow->refresh();
    mainWindow->show();

    if (logWindow != nullptr)
        logWindow->show();

    if(!getUserIsLogged())
    {

//        w_LoggingDialog * loggingDialog = w_LoggingDialog::Instance();
//        connect(loggingDialog, SIGNAL(myStateChanged(Qt::WindowStates,bool)), this, SLOT(mainWindowStateChanged(Qt::WindowStates,bool)));
//        loggingDialog->setAuthorizationSettings(  user->getAuthenticator(), true);
//        loggingDialog->setServerConnectionSettings(  this->settCtrlr->getSettings("server"), true );
//        loggingDialog->setWindowSettings(  this->settCtrlr->getSettings("window"), false );
//        loggingDialog->show();


    } else
    {

    }    

    delete this->settCtrlr;
}


void c_AppTrayIcon::mainWindowStateChanged(Qt::WindowStates states)
{
    if(states.testFlag(Qt::WindowNoState))
    {
        QIcon icon(":/icons/appIcon.png");
        hideAllWindows();
        this->showMessage(qApp->applicationName(), tr("Zminializowano do zasobnika systemowego"), icon, 2000);
    }
}

void c_AppTrayIcon::mainWindowStateChanged(Qt::WindowStates states, bool appIsClosing)
{
    if(states.testFlag(Qt::WindowNoState) && !appIsClosing)
    {
        QIcon icon(":/icons/appIcon.png");
        hideAllWindows();
        this->showMessage(qApp->applicationName(), tr("Zminializowano do zasobnika systemowego"), icon, 2000);
    } else if(states.testFlag(Qt::WindowNoState) && appIsClosing)
    {
        QIcon icon(":/icons/appIcon.png");
        this->showMessage(qApp->applicationName(), tr("Zamykam aplikację"), icon, 2000);
    }

}
