/* 
 * File:   main.cpp
 * Author: Justin
 * Created on February 3, 2015, 10:10 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
void filAray(int [],int);
void prntAry(const int[],int, int);
void swap(int &,int &);
void bblSort(int [],int);
void bublSrt(int p[],int);;

int main(int argc, char** argv) {
    srand(time(0));
    const int ROW=100;
    int pFilRow=100,perLine=10;
    int array[ROW]={};
    filAray(array,pFilRow);
    prntAry(array,pFilRow,perLine);
    bublSrt(array,pFilRow);
    prntAry(array,pFilRow,perLine);
    return 0;
}

void bublSrt(int a[],int n){
    bool bSwap;
    //Do while swapping has occurred
    do{
        bSwap=false;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                bSwap=true;
            }
        }
    }while(bSwap);
}

void bbleSort(int a[],int n){
    //Declare a swap variable
    bool bSwap;
    //Do while swapping has occurred
    do{
        bSwap=false;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
                bSwap=true;
            }
        }
    }while(bSwap);
}

void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}

void prntAry(int a[],int b,int n){
    for(int i=1;i<b;i++){
        cout<<a[i]<<" ";
        if(a[i]>n)
           cout<<endl;
    }
}