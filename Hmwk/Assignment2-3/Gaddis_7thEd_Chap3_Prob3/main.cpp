/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 17, 2015, 8:20 PM
 *      Purpose: Problem 3 Test Average
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    float num1,num2,num3,num4,num5;
    float average;
    cout<<"This will calculate the average for 5 test scores. Please enter 5 test scores."<<endl;
    cin>>num1>>num2>>num3>>num4>>num5;
    average=(num1+num2+num3+num4+num5)/5;
    cout<<fixed<<setprecision(1)<<endl;
    cout<<"The average for these 5 tests is "<<average<<endl;
    return 0;
}

