/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 14, 2015, 10:24 AM
 *      Purpose: Problem 5 Body Mass Index
 */

#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    float weight,height,BMI;
    cout<<"This program will determine your BMI. Please input your weight "
            "in pounds. Then input your height in inches."<<endl;
    cin>>weight>>height;
    BMI=weight*703/(height*height);
    if (BMI>=18.5 && BMI<=25){
        cout<<"Congratualtions! You are currently at an optimal weight."<<endl;
        cout<<"Your BMI is "<<BMI<<endl;
    }
    else if (BMI<18.5){
        cout<<"You are currently underweight.\nYour BMI is "<<BMI<<endl;
    }
    else if (BMI>25){
        cout<<"You are currently overweight.\nYour BMI is "<<BMI<<endl;
    }
    
    return 0;
}