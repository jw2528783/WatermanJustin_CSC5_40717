/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 20, 2015, 10:22 AM
 *      Purpose: Problem 1 Sum of Numbers
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    short x,number;
    int sum=0;
    cout<<"Enter a positive whole number. I will add together every number up to that point."<<endl;
    cin>>number;
    if(number<0)
        cout<<"Error. Please enter a positive number."<<endl;
    else{
        for(x=1;x<=number;x++){
                cout<<x<<endl;
                sum +=x;
                }
        cout<<"The sum of all of those numbers = "<<sum<<endl;
    }
    return 0;
}

