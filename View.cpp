#include "View.h"

void View::promptPoints(int x, basic_string<char> y){
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\tPoints: \t"<<"Level: \n"<<"\t\t\t\t\t\t\t\t\t\t\t\t "<<x<<"\t\t"<<y<<"\n";
}

void View::promptString(const string& x){
    cout<<x;
}

char View::getInput(){
    char x;
    cin>>x;
    return x;
}


