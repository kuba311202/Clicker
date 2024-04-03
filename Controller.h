#ifndef CLICKER_CONTROLLER_H
#define CLICKER_CONTROLLER_H

#include "View.h"
#include "Model.h"
#include <conio.h>

class Controller {
private:
    static const char exitButton;
    static const char clickButton;
public:
    View* v;
    Model* m;
    Controller(View* _v, Model* _m);
    static void Launch();
    static void Game();
};

#endif //CLICKER_CONTROLLER_H
