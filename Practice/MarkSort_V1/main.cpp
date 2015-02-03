/* 
 * File:   main.cpp
 * Author: Justin
 * Created on February 3, 2015, 9:10 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

void filAray(int[],int);
void prntAry(const int [], int, int);
void swap(int &,int &);
void swapMin(int,int [],int);
void mrkSort(int [],int);
void mrkSrt(int [],int);

int main(int argc, char** argv) {
    //Seed random number generator
    srand(time(0));
    //Declare variables
    const int ROW=1000;
    int pFilRow=100,perLine=10;
    int array[ROW]={};
    //Fill the array
    filAray(array,pFilRow);
    //Print the array
    prntAry(array,pFilRow,perLine);
    //Sort
    mrkSort(array,pFilRow-1);
    prntAry(array,pFilRow,perLine);
    return 0;
}

void mrkSrt(int a[],int n){
    //Apply swapMin from beginning to end
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
      }
    }
}

void mrkSort(int a[],int n){
    //Apply swapMin from beginning to end
    for(int i=0;i<n-1;i++){
        swapMin(i,a,n);
    }
}

void swapMin(int pos,int a[],int n){
    //swap as you go to place the minimum element at the top of the list
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i]){
            swap(a[pos],a[i]);
        }
    }
}

void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}