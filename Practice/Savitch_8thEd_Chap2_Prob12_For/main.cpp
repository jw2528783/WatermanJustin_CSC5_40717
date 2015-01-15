/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 15, 2015, 11:04 AM
 *      Purpose: Sum calculator
 *              Without loops
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int sum=0, sumNeg=0, sumPos=0, sumEven=0, sumOdd=0;
    int input;\
    for(int count=1;count<=10;count++){
        cout<<endl<<"Input an integer value."<<endl;
        cin>>input;
        sum+=input;
        if(input>0)sumPos=+input;
        else sumNeg+=input;
        if(input%2)sumOdd+=input;
        else sumEven+=input;  
    }
    cout<<"Sum = "<<sum<<endl;
    cout<<"Positive sum = "<<sumPos<<endl;
    cout<<"Negative sum = "<<sumNeg<<endl;
    cout<<"Even sum = "<<sumEven<<endl;
    cout<<"Odd sum = "<<sumOdd<<endl;
   
    return 0;
}

