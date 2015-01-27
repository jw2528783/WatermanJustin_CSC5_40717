/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 27, 2015, 9:11 AM
 *      Purpose: Use the Babylonian 10
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
void retirement(float &,float,float,float);
float retirement(float,float,float,int);
int main(int argc, char** argv) {
    float salary=90000.0f;
    float invRate=0.05f;
    float defPrct=0.10f;
    float ndSave=salary/invRate;
    float nmYears;
    float retSav=0;
    cout<<fixed<<setprecision(2);
    cout<<"You need to save "<<ndSave<<endl;
    cout<<"Year\t   Savings"<<endl;
    //Calculate when we can retire
    for(int year=1;retSav<=ndSave;year++){
        retSav=retirement(0.0,invRate,defPrct*salary,year);
        cout<<setw(4)<<year<<setw(15)<<retSav<<endl;
    }
    return 0;
}

float retirement(float p,float i,float d,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
    return p;
}
void retirement(){
    
}