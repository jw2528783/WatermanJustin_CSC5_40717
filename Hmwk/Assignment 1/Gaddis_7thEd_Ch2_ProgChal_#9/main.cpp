/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 8, 2015, 10:26 AM
 *      Purpose: Program Challenge #9 Cyborg Data Type Sizes
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Calculate size of the data types: char, int, float, double.
    cout<<"The amount of memory used by char is "<<sizeof(char)<<" bytes.\n"<<
            "The amount of memory used by int is "<<sizeof(int)<<" bytes.\n"<<
            "The amount of memory used by float is "<<sizeof(float)<<" bytes.\n"<<
            "The amount of memory used by double is "<<sizeof(double)<<" bytes."<<endl;
    //Exit
    return 0;
}

