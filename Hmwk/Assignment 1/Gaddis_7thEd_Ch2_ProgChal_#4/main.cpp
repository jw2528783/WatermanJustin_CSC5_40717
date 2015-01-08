/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 7, 2015, 5:15 PM
 *      Purpose: Program Challenge #4 Restaurant Tax
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    float a,b,c;
    a=44.50, b=.0675, c=0.15; //a=meal charge, b=sales tax, c=tip percentage
    float stax=a*b; //sales tax amount
    stax=a*b;
    float total=stax+a; //sum of meal charge and sales tax
    total=stax+a;
    float tip=total*c; //tip amount
    tip=total*c;
    float ttbill=total+tip; //total bill amount
    ttbill=total+tip;
    cout<<"The meal charge is "<<a<<".\nThe tax amount is "<<stax<<".\nThe"
            " tip amount is "<<tip<<".\nThe total bill amount is "<<ttbill<<endl;
    return 0;
}

