/* 
 * File:   main.cpp
 * Author: Justin
 * Created on February 1, 2015, 1:57 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    unsigned int hours;
    float payrate,gross;
    cout<<"I will determine your gross pay rate."<<endl;
    cout<<"Enter your hours worked, then your pay rate. Please enter a positive number for hours."<<endl;
    cin>>hours>>payrate;
    if(hours<1){
        cout<<"Error. You did not enter a positive number of hours."<<endl;
        return 0;
    }
    if(hours<=40){
        gross=hours*payrate;
    }
    if(hours>40&&hours<50){
        gross=(hours-40)*(payrate+(payrate*0.5))+40*payrate;
    }
    if(hours>=50){
        gross=(hours-50)*payrate*2+40*payrate+10*(payrate+payrate*0.5);
    }
    cout<<"Your gross pay is $"<<gross<<endl;
        return 0;
}