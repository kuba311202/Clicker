#ifndef CLICKER_MODEL_H
#define CLICKER_MODEL_H
#include <fstream>

#include <iostream>
#include <string>
using namespace std;

class Model {
private:
    static string roman(int a);
    static char Enter;
    static int Points, Level;
    fstream saveFile;
public:
    static int getEnter();
    static int getPoints();
    static int getLevel();
    static void saveEnter(char x);
    static void increasePoints();
    static void saveProgressFile(int pointsInGame);
    static void loadFile();
    static string getRoman(int i);

};


#endif //CLICKER_MODEL_H
