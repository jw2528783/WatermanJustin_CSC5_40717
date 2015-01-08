/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 7, 2015, 4:55 PM
 *      Purpose: ProgChal #2 Sales Prediction
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Funtion Prototypes

//Execution
int main(int argc, char** argv) {
    float a,b; //Integers A=percentage and B=total sales
    a=0.62, b=4.6e6; //62% of total sales $4.6 million
    float mnymade=a*b; //mnymade = money made in the given year.
    cout<<mnymade<<endl;
    return 0;
}

