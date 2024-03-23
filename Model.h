#ifndef CLICKER_MODEL_H
#define CLICKER_MODEL_H

#include <iostream>
#include <string>
using namespace std;

class Model {
private:
    static string roman(int a);
    static char Enter;
    static int Points, Level;
public:
    static void storePoints(int x);
    static void storeEnter(char x);
    static void storeLevel(int x);
    static int getEnter();
    static int getPoints();
    static int getLevel();
    static void increasePoints();
    static string getRoman(int i);

};


#endif //CLICKER_MODEL_H
