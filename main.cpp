#include "Controller.h"

using namespace std;

int main() {
    View v;
    Model m;
    Controller Controller(&v,&m);
    Controller::Launch();
    return 0;
}