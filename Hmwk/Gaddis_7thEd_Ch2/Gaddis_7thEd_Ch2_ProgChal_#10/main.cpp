/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 7, 2015, 5:48 PM
 *      Purpose: Program Challenge #10 Miles per Gallon
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    int a,b; //a=gallons of gasoline a car can hold, b=mileage a car can travel before refueling
    a=12, b=350;
    unsigned int MPG=b/a;
    MPG=b/a;
    cout<<"If a car has a "<<a<<" gallon gas tank and can travel "<<b<<" miles before refueling "
            "\n  then the number of miles per gallon the car gets is "<<MPG<<"."<<endl;
    return 0;
}

