#ifndef C_MYSTRUCTURES_H
#define C_MYSTRUCTURES_H

#include <QString>


struct moduleInfo {
    QString name;
    QString displayedName;
    QString icon;
    QString description;
    QString pressedAction;
};

enum buttonType {BIG_BUTTON = 0, SMALL_BUTTON = 1, LABEL_BUTTON = 2};
enum moduleAction {DO_FUNCTION = 0, SHOW = 1, PROCESS = 2};

#endif // C_MYSTRUCTURES_H
