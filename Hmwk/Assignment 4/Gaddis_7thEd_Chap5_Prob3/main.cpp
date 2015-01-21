/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 21, 2015, 10:39 AM
 *      Purpose: Problem 3 Ocean Levels
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    int years=0;
    float level=0;
    cout<<"The ocean levels are rising each year at a rate of 1.5mm per year. These are "
            "levels that the ocean will rise for the following 25 years."<<endl;
    for(float x=0;x<25;x++){
        years++;
        level+=1.5;
        cout<<"The ocean will rise "<<fixed<<setprecision(1)<<setw(4)<<level<<" milimeters after "<<years<<" years."<<endl;
    }
    return 0;
}

