#include "w_mainwindow.h"
#include "ui_w_mainwindow.h"

w_MainWindow::w_MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::w_MainWindow)
{
    ui->setupUi(this);
}

void w_MainWindow::closeEvent(QCloseEvent *event)
{
    if(this->getMinimizeToTrayOnClose())
    {
        this->hide();
        emit this->stateChanged(this->windowState());
        event->ignore();
    }
    else
    {
        event->accept();
    }
}

w_MainWindow *w_MainWindow::Instance()
{
    static w_MainWindow * instance = 0;
    if ( instance == 0 ) {
        instance = new w_MainWindow();
    }
    return instance;
}

void w_MainWindow::loadSettings(QMap<QString, QVariant> settings)
{
    this->minimizeToTrayOnStart = settings["minimize_to_tray_on_start"].toBool();
    this->minimizeToTrayOnClose = settings["minimize_to_tray_on_close"].toBool();

}

w_MainWindow::~w_MainWindow()
{
    delete ui;
}

bool w_MainWindow::getMinimizeToTrayOnClose() const
{
    return minimizeToTrayOnClose;
}

void w_MainWindow::setMinimizeToTrayOnClose(bool value)
{
    minimizeToTrayOnClose = value;
}

bool w_MainWindow::getMinimizeToTrayOnStart() const
{
    return minimizeToTrayOnStart;
}

void w_MainWindow::setMinimizeToTrayOnStart(bool value)
{
    minimizeToTrayOnStart = value;
}
