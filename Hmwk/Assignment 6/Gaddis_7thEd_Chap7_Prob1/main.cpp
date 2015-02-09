/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on February 8, 2015, 4:14 PM
 *      Purpose: Problem 1 Largest/Smallest Array Values
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int min,max;
    const int COL=10;
    int array[COL];
    cout<<"Please enter 10 values and I will sort them from largest to smallest."<<endl;
    for(int i=0;i<10;i++){
        cin>>array[i];
    }
    max=array[0];
    min=array[0];
    for(int i=0;i<10;i++){
        if(min>array[i])
            min=array[i];
        if(max<array[i])
            max=array[i];
    }
    cout<<"The largest number is "<<max<<endl;
    cout<<"The smallest number is "<<min<<endl;
    return 0;
}

