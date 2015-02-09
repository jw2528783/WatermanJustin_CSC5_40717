/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on February 8, 2015, 4:54 PM
 *      Purpose: Problem 3: Chips and Salsa
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    const int COL=5;
    float min,max,total,average;
    float array[COL];
    string month[]={"Mild","Medium","Sweet","Hot","Zesty"};
    string minmon,maxmon;
    cout<<"Enter the amount of jars sold."<<endl;
    for(int x=0;x<5;x++){
        cout<<"Enter the number of jars of "<<month[x]<<" salsa sold."<<endl;
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
    for(int x=0;x<5;x++){
        if(min>array[x]){
            min=array[x];
            minmon=month[x];
        }
        if(max<array[x]){
            max=array[x];
            maxmon=month[x];
        }
    }
    for(int x=0;x<5;x++){
        total+=array[x];
    }
    for(int x=0;x<5;x++){
        cout<<"The number of jars sold for "<<month[x]<<" salsa is "<<array[x]<<endl;
    }
    cout<<"The total amount of rainfall is "<<total<<endl;
    cout<<maxmon<<" salsa sold the most with an amount of "<<max<<endl;
    cout<<minmon<<" salsa sold the least with an amount of "<<min<<endl;
    return 0;
}