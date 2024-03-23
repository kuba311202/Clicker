#include "Controller.h"
#include <conio.h>

Controller::Controller(View *_v, Model *_m) {
    v=_v;
    m=_m;

    Launch();
}

void Controller::Launch() {
    while(Model::getEnter()!='e'){
        View::promptPoints(Model::getPoints(),Model::getRoman(Model::getLevel()));
        Model::storeEnter(View::getInput());
        if(Model::getEnter()=='b'){
            Model::increasePoints();
            View::promptString("+1 Point!\n");
            if(Model::getPoints()%5==0){
                View::promptString("Congrats! +1 Level!\n");
            }
        }

    }

}
