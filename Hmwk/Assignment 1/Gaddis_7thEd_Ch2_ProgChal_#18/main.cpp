/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 8, 2015, 7:48 AM
 *      Purpose: Programming Challenge #18 Energy Drink Consumption
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;//Percent conversion

//Functional Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare variables
    float a,b,c;
    a=12467, b=.14, c=.64;
    float numcust=a*b;
    float numcit=a*c;
    numcust=a*b, numcit=numcust*c;
    //Output results
    cout<<"The number of customers in the survey who purchased one or more "
            "drinks a week = "<<numcust<<endl;
    cout<<"The number of customers in the survey who prefer citrus flavored drinks "
            "= "<<numcit<<endl;
    return 0;
}

