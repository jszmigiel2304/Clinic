#ifndef W_SERVERINFORMATIONSWIDGET_H
#define W_SERVERINFORMATIONSWIDGET_H

#include "i_observer.h"

#include <QWidget>
#include <QMap>

namespace Ui {
class w_ServerInformationsWidget;
}

class w_ServerInformationsWidget : public QWidget , public i_Observer
{
    Q_OBJECT

public:
    explicit w_ServerInformationsWidget(QWidget *parent = 0);
    ~w_ServerInformationsWidget();
    void refresh();

public slots:
    void refreshInformations(QMap<QString, QVariant> map);
private:
    Ui::w_ServerInformationsWidget *ui;
};

#endif // W_SERVERINFORMATIONSWIDGET_H
