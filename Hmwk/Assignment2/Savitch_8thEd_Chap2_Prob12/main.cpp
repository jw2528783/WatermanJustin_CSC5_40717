/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 13, 2015, 10:50 AM
 *      Purpose: Problem 12 Babylonian
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Declare variable
    float r, number, guess;
    //Input a number
    cout<<"Input a number to estimate its square root. The format will be "
            "a positive float."<<endl;
    cin>>number;
    guess=number/2;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"First Pass calculation = "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Second Pass calculation = "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Third Pass calculation = "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Fourth Pass calculation = "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Fifth Pass calculation = "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Sixth Pass calculation = "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Seventh Pass calculation = "<<guess<<endl;
    //Exit
    return 0;
}