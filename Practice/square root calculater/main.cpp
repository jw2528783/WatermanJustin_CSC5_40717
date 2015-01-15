/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 15, 2015, 10:42 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    float number, guess, r, count=0;
    cout<<"This will calculate the square root for a number."<<endl;
    cin>>number;
    guess=number/2;
    do{
        r=number/guess;
        count++;
        guess=(guess+r)/2;
        cout<<"Loop "<<count<<" = "<<guess<<endl;
    }while(abs(guess-r)>0.01);
    return 0;
}

