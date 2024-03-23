#include "Model.h"

char Model::Enter=' ';
int Model::Points=0;
int Model::Level=1;

void Model::storePoints(int x){
    Points = x;
}
void Model::storeEnter(char x){
    Enter = x;
}
int Model::getEnter(){
    return Enter;
}
int Model::getPoints(){
    return Points;
}
void Model::increasePoints() {
    Points++;
    Level = 1+Points/5;
}

void Model::storeLevel(int x) {
    Level = x;
}

int Model::getLevel() {
    return Level;
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
