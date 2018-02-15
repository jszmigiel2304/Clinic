#include "w_initializedialog.h"
#include "ui_w_initializedialog.h"
#include <QMovie>


w_initializeDialog::w_initializeDialog(QApplication * app, c_SettingsController * settContr, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::w_initializeDialog)
{
    ui->setupUi(this);

    this->app = app;
    this->settContr = settContr;

    QString giff = PROJECT_PATH;
    giff += "gifs//ezgif.com-crop.gif";

    QMovie *movie = new QMovie(giff);

    ui->processLabel->setMovie(movie);
    ui->processLabel->movie()->start();
}

w_initializeDialog::~w_initializeDialog()
{
    delete ui;
}

void w_initializeDialog::on_w_initializeDialog_finished(int result)
{

}
