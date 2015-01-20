/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 14, 2015, 8:14 AM
 *      Purpose: Problem 18 Pizza Pi
 *              Calculate number of slices a pizza can be divided into.
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
const float PI=3.14159; //the value for Pi.
int main(int argc, char** argv) {
    //Declare variables
    float pizdiam; //diameter of the pizza
    float numslic; //number of slices taken from the pizza
    float pizarea; //area of the whole pizza
    float sliarea; //a pizza slice's area
    //Display purpose and prompt for input.
    cout<<"This program will calculate the number of slices a pizza of "
            "any size can be divided into.\nPlease input the diameter of "
            "your pizza, in inches."<<endl;
    //Input pizza diameter
    cin>>pizdiam;
    //Calculations
    pizarea=(pizdiam/2)*(pizdiam/2)*PI; //calculates the pizza's area
    numslic=pizarea/14.125; //calculates the number of slices
    cout<<fixed<<setprecision(1);
    //Display results
    cout<<"The radius of your pizza = "<<pizdiam/2<<" inches"<<endl;
    cout<<"The pizza area = "<<pizarea<<endl;
    cout<<"The number of slices that your pizza can be cut into are "<<
            numslic<<endl;
    return 0;
}

