/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 13, 2015, 8:28 AM
 *      Purpose: Problem 1  Calculate gas mileage.
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    unsigned short numgall; //Number of gallons the car can hold.
    float nummile; //Number of miles the car can go on a full tank.
    float MPG; //The miles per gallon your car can go.
    cout<<"This program calculates a car's MPG. Please input a whole number"
            " to represent the number of gallons the car can hold."<<endl;
    cin>>numgall;
    cout<<"Now input any number to represent the number of miles your car can"
            "go on a full tank."<<endl;
    cin>>nummile;
    MPG=nummile/numgall;
    cout<<setprecision(4)<<"Your car's MPG = "<<MPG<<endl;
    
    return 0;
}

