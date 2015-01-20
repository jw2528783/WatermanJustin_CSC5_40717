/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 17, 2015, 6:12 PM
 *      Purpose: Problem 6 Mass and Weight
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float mass,weight;
    //Output problem and prompt for input
    cout<<"I will calculate an object's weight, in newtons. Please input an "
            "objects mass, in kilograms."<<endl;
    cin>>mass;
    weight=mass*9.8f; //Conversion of kilograms to newtons
    //Check if product is within the range of 10 and 1,000.
    if(weight>1000)
        cout<<"This object is too heavy!"<<endl;
    else if(weight<10)
        cout<<"This object is too light!"<<endl;
    else
        cout<<"Your object weights "<<weight<<" newtons."<<endl;
    return 0;
}

