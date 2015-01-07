/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 7, 2015, 11:17 AM
 *      Purpose: How easy computers can make mistakes
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare 3 variables
    float a,b,c;
    //Prompt for a and b.
    cout<<"Input 2 float values"<<endl;
    cin>>a>>b;
    //Sum the values
    c=a+b;
    //Output the results
    cout<<setprecision(7);
    cout<<c<<" = "<<a<<" + "<<b<<endl;
    //Exit
    return 0;
}
