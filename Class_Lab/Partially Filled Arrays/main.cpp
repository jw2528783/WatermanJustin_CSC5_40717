/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 29, 2015, 9:17 AM
 *      Purpose: Partially Filled Arrays
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

//Global Constants
const int COL=200;

//Function Prototypes
void filAray(int [],int);
void filAray(vector<int>,int);
void prntAry(int [],int);
void filAray(int [][COL],int,int);
void prntAry(int [][COL],int,int);
void prntAry(vector<int>,int,int);


int main(int argc, char** argv) {
    //seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables and arrays
    const int pfilCol=100,perLine=10;
    //Declare Array
    int array[COL]={};
    vector<int>varray(COL,0);
    //Fill Array
    filAray(array,pfilCol);
    filAray(varray,pfilCol);
    //Print Array
    prntAry(array,pfilCol,perLine);
    prntAry(varray,pfilCol,perLine);
    
    return 0;
}

void prntAry(vector<int> a,int n, int perLine){
    cout<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

void prntAry(int a[],int n, int perLine){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

//Randomly fill the array with 2-digit numbers
void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}

//Randomly fill a vector with 2-digit numbers
void filAray(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}