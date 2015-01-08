/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 7, 2015, 6:18 PM
 *      Purpose: Programming Challenges #5 Average of Values
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    unsigned int a,b,c,d,e;
    a=28, b=32, c=37, d=24, e=33; //The series of values given.
    unsigned int sum=a+b+c+d+e; //The sum of all of the values.
    sum=a+b+c+d+e;
    float avg=sum/5; //The average of the given values.
    avg=sum/5;
    cout<<"The given values are "<<a<<", "<<b<<", "<<c<<", "<<d<<", "<<e<<"."<<endl;
    cout<<"The sum of these values = "<<sum<<endl;
    cout<<"The average of these values = "<<avg<<endl;
    return 0;
}

