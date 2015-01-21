/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 21, 2015, 8:54 AM
 *      Purpose: Problem 21 Enhancement to the Random Number Guessing Game
 */
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    short number,guess;
    srand(time(0));
    number=rand()%500+1;
    cout<<"Welcome to my guessing game.\nI will randomly generate a number between 1 and 500 and you will guess it."<<endl;
    short count=0;
    do{
        cout<<"Go on! Take a guess! A number between 1 and 500"<<endl;
        cin>>guess;
        if(guess<1 || guess>500){
            cout<<"Error. You went out of range!"<<endl;
            count++;
        }
        else if(guess<number){
            cout<<"Too low!"<<endl;
            count++;
        }
        else if (guess>number){
            cout<<"Too high!"<<endl;
            count++;
        }
        else{
            cout<<"Congratulations! You guessed the number!!\nThe number was "<<number<<endl;
            cout<<"That took you "<<count<<" trys before you got it right."<<endl;
        }    
    }
    while(number!=guess);
    
    return 0;
}

