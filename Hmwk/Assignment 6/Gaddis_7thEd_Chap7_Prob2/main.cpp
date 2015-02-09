/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on February 8, 2015, 4:26 PM
 *      Purpose: Problem 2 Rainfall Statistics
 *          Modified to use floats instead of doubles
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    const int COL=12;
    float min,max,total,average;
    float array[COL];
    string month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    string minmon,maxmon;
    cout<<"Enter the rainfall amount for each month."<<endl;
    for(int x=0;x<12;x++){
        cout<<"Enter the rainfall for "<<month[x]<<endl;
        cin>>array[x];
        if(array[x]<0){
            cout<<"Error. Please enter a positive number"<<endl;
            cin>>array[x];
        }
    }
    min=array[0];
    max=array[0];
    minmon=month[0];
    maxmon=month[0];
    for(int x=0;x<12;x++){
        if(min>array[x]){
            min=array[x];
            minmon=month[x];
        }
        if(max<array[x]){
            max=array[x];
            maxmon=month[x];
        }
    }
    for(int x=0;x<12;x++){
        total+=array[x];
    }
    average=total/12.0f;
    cout<<"The average rainfall amount is "<<average<<endl;
    cout<<"The total amount of rainfall is "<<total<<endl;
    cout<<"The month with the most rainfall is "<<maxmon<<" with an amount of "<<max<<endl;
    cout<<"The month with the least rainfall is "<<minmon<<" with an amount of "<<min<<endl;
    return 0;
}