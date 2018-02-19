#ifndef W_SERVERCONFIGURATIONDIALOG_H
#define W_SERVERCONFIGURATIONDIALOG_H

#include <QDialog>
#include <QRadioButton>
#include "i_observer.h"

namespace Ui {
class w_serverConfigurationDialog;
}

class w_serverConfigurationDialog : public QDialog, public i_Observer
{
    Q_OBJECT

public:
    explicit w_serverConfigurationDialog(QWidget *parent = 0);
    ~w_serverConfigurationDialog();
    QMap<QString, QVariant> getServerProperties();
    void update();



private:
    Ui::w_serverConfigurationDialog *ui;
    QList<QRadioButton *> interfacesRadioButtonList;

private slots:
    void listeningOptionGroupBoxClicked(bool);
    void settingsChanged(bool);
};

#endif // W_SERVERCONFIGURATIONDIALOG_H
