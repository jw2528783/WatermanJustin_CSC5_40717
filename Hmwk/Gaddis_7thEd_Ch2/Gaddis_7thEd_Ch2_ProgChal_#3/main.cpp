/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 7, 2015, 5:10 PM
 *      Purpose: Programming Challenge #3 Sales Tax
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    float a, b;
    a=.02; //Sales tax of 2%
    b=52; //$52 purchase
    float stax=a*b; // stax = sales tax
    cout<<stax<<endl;
    return 0;
}

