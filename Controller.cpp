#include "Controller.h"

const char Controller::exitButton = 'e';
const char Controller::clickButton = 'b';

Controller::Controller(View *_v, Model *_m) {
    v=_v;
    m=_m;

    Launch();
}

void Controller::Launch() {
    View::promptString("1.Start new game.\n");
    View::promptString("2.Load game.\n");
    View::promptString("3.Save game and exit.\n");
    View::promptString("4.Exit.\n");
    Model::saveEnter(View::getInput());
    if(Model::getEnter()=='1'){
        Game();
    }
    else if(Model::getEnter()=='2'){
        Model::loadFile();
        Game();
    }
    else if(Model::getEnter()=='3'){
        Model::saveProgressFile(Model::getPoints());
    }
    else if(Model::getEnter()=='4'){}
}
void Controller::Game(){
    while(Model::getEnter()!=exitButton){
        View::promptPoints(Model::getPoints(),Model::getRoman(Model::getLevel()));
        Model::saveEnter(View::getInput());
        if(Model::getEnter()==clickButton){
            Model::increasePoints();
            View::promptString("+1 Point!\n");
            if(Model::getPoints()%5==0) {
                View::promptString("Congrats! +1 Level!\n");
            }
        }

    }
}
