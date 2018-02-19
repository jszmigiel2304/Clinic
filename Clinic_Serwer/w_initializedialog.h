#ifndef W_INITIALIZEDIALOG_H
#define W_INITIALIZEDIALOG_H

#include "c_settingscontroller.h"
#include "m_fileMacros.h"

#include <QDialog>

namespace Ui {
class w_initializeDialog;
}

class w_initializeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit w_initializeDialog(QApplication * app, c_SettingsController * settContr , QWidget *parent = 0);
    ~w_initializeDialog();
    int checkFiles();


    QApplication * app;
    c_SettingsController * settContr;

private slots:
    void on_w_initializeDialog_finished(int result);

private:
    Ui::w_initializeDialog *ui;

};

#endif // W_INITIALIZEDIALOG_H
