/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 7, 2015, 6:01 PM
 *      Purpose: Programming Challenges #7 Ocean Levels
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    float a,b,c; //The Ocean levels of 3 given time periods.
    a=5, b=7, c=10; //Each time period given in number of years after the current ocean level.
    float d=1.5; //Number of millimeters the ocean level in rising as of right now.
    float fiveyrs=a*d; //The number of millimeters higher the ocean level will be after 5 years.
    float svnyrs=b*d; //The number of millimeters higher the ocean level will be after 7 years.
    float tenyrs=c*d; //The number of millimeters higher the ocean level will be after 10 years.
    fiveyrs=a*d, svnyrs=b*d, tenyrs=c*d;
    cout<<"After 5 years, the ocean level will have risen "<<fiveyrs<<" millimeters.\n"
            "After 7 years, the ocean level will have risen "<<svnyrs<<" millimeters.\n"
            "After 10 years, the ocean level will have risen "<<tenyrs<<" millimeters."<<endl;
    return 0;
}

