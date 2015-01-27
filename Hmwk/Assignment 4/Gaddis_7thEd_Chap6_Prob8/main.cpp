/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 26, 2015, 6:37 PM
 *      Purpose: Problem 8 Coin Toss
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void coinTos(int);

int main(int argc, char** argv) {
    short times;
    srand(time(0));
    cout<<"I will be simulating a coin toss game.\nHow many times would you like to flip a coin?"<<endl;
    cin>>times;
    coinTos(times);
    return 0;
}

void coinTos(int times){
    for(int x=1;x<=times;x++){
        short flip=rand()%2+1;
        if(flip==1)
            cout<<"Heads!"<<endl;
        else if(flip==2)
            cout<<"Tails!"<<endl;
    }
}