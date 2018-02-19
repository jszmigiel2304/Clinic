#include "w_initializedialog.h"
#include "ui_w_initializedialog.h"
#include <QMovie>
#include <QPushButton>


w_initializeDialog::w_initializeDialog(QApplication * app, c_SettingsController * settContr ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::w_initializeDialog)
{
    ui->setupUi(this);

    this->app = app;
    this->settContr = settContr;


    QMovie *movie = new QMovie(":/gifs/gifs/ezgif.com-crop.gif");

    ui->processLabel->setMovie(movie);
    ui->processLabel->movie()->start();


}

w_initializeDialog::~w_initializeDialog()
{
    delete ui;
}

int w_initializeDialog::checkFiles()
{
    QFile iniFfile(this->settContr->getSettingsFilePath());

    if(!iniFfile.exists())
    {

        ui->describeLabel->setText("Nie znaleziono pliku: config.ini");

        // utwórz plikconfig.ini

        ui->describeLabel->setText("Tworzenie pliku: config.ini");
        this->settContr->CreateIniFile();

    }
    else
    {
        ui->describeLabel->setText("Wczytuję ustawienia z pliku: config.ini");
        this->settContr->LoadSettings();
    }

    QFile cssFile(CSS_STYLES_FILE);

    if(!cssFile.open(QFile::ReadOnly))
    {
        ui->describeLabel->setText("Nie znaleziono pliku: styles.css");

        QPixmap img(":/actions/icons/error80x80.png");
        ui->processLabel->setPixmap(img);

        QPushButton * button = new QPushButton(this);
        button->setGeometry(90,120,70,30);
        button->setText("Zakończ");
        button->setStyleSheet("background-color: #fafafb; border: 1px solid black;");

        connect(button, SIGNAL( pressed() ), this, SLOT( close() ) );
        button->show();

        this->exec();

        return 0;
    } else
    {
        QString cssStyles = QLatin1String(cssFile.readAll());
        this->app->setStyleSheet(cssStyles);
    }

    this->close();

    return 1;
}

void w_initializeDialog::on_w_initializeDialog_finished(int result)
{

}
