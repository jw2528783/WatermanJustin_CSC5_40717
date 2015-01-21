/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 21, 2015, 10:22 AM
 *      Purpose: Problem 7 Pennies for Pay
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    unsigned short number;
    unsigned int sum=1;
    unsigned int total=sum;
    cout<<"You earn one penny on one day and then on the next day, that amount doubles. "
            "Enter a positive number of days. I will add together every number up to that point."<<endl;
    cin>>number;
    if(number<0)
        cout<<"Error. Please enter a positive number."<<endl;
    else{
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"On the first day, your sum   =  $"<<setw(11)<<sum/100.0f<<endl;
        for(int x=2;x<=number;x++){
                sum<<=1;
                total+=sum;
                cout<<"After "<<setw(2)<<x<<" days your salary    =  $"<<setw(11)<<sum/100.0f<<endl;
                
                }
        cout<<"The sum of all of those days =  $"<<setw(11)<<sum/100.0f<<endl;
    }
    return 0;
}

