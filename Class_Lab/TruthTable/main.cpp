/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 13, 2015, 9:15 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Declare 2 boolean variables
    bool X,Y;
    //Output the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    cout<<"------------------------------------------------------";
    cout<<"------------"<<endl;
    //Fill in the first row
    X=true, Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<((X^Y)^Y?'T':'F')<<"     ";
    cout<<((X^Y)^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&!Y?'T':'F')<<"      ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    //Fill in the second row
    Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<((X^Y)^Y?'T':'F')<<"     ";
    cout<<((X^Y)^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&!Y?'T':'F')<<"      ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    //Fill in the third row
    X=false, Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<((X^Y)^Y?'T':'F')<<"     ";
    cout<<((X^Y)^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&!Y?'T':'F')<<"      ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    //Fill in the fourth row
    Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"   ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<((X^Y)^Y?'T':'F')<<"     ";
    cout<<((X^Y)^X?'T':'F')<<"      ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&!Y?'T':'F')<<"      ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    //Proof
    short a, b; 
    short temp=a;
    a=2, a=3;
    a=b, b=temp;
    return 0;
}