#include "Model.h"
#include <fstream>

int Model::Points=0;
int Model::Level=1;
char Model::Enter = ' ';


int Model::getEnter(){
    return Enter;
}
void Model::saveEnter(char x){
    Enter = x;
}
int Model::getPoints(){
    return Points;
}
void Model::increasePoints() {
    Points++;
    Level = 1+Points/5;
}

int Model::getLevel() {
    return Level;
}

void Model::saveProgressFile(int pointsInGame){
    ofstream outputFile;
    outputFile.open("Saves1234.txt",ios::in | std::ofstream::trunc);
    if (outputFile.is_open()) {
        outputFile << pointsInGame;
        outputFile.close();
    }
    else {
        std::cerr << "Error opening file\n";
    }
}

void Model::loadFile(){
    ifstream outputFile;
    outputFile.open("Saves1234.txt", ios::out);
    if (outputFile.is_open()) {
        outputFile >> Points;
        outputFile.close();
    }
    else {
        std::cerr << "Error opening file\n";
    }
}

string Model::roman(int a)
{
    string Roman;
    string M[] = {"","M","MM","MMM"};
    string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    Roman = M[a/1000]+C[(a%1000)/100]+X[(a%100)/10]+I[(a%10)];
    return Roman;
}

string Model::getRoman(int i){
    return roman(i);
}
