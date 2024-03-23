#ifndef CLICKER_CONTROLLER_H
#define CLICKER_CONTROLLER_H

#include "View.h"
#include "Model.h"
#include <conio.h>

class Controller {
public:
    View* v;
    Model* m;
    Controller(View* _v, Model* _m);
    static void Launch();

};

#endif //CLICKER_CONTROLLER_H
