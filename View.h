#ifndef CLICKER_VIEW_H
#define CLICKER_VIEW_H

#include <iostream>
#include <string>
using namespace std;

class View {
public:
    static void promptPoints(int x, basic_string<char> y);
    static char getInput();
    static void promptString(const string &x);
};


#endif //CLICKER_VIEW_H
