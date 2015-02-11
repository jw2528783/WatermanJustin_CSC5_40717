/* 
 * File:   main.cpp
 * Author: Justin
 *
 * Created on February 10, 2015, 7:39 PM
 */

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <fstream>
using namespace std;
void filAray(int [],int );
void markSrt(int [],int);
void prntAry(const int [],int,int);
void swap(int &,int &);
void fileAry(const int [],int,int);
void prntfil(const int [],int,int);
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    const int ROW=10;
    int pFilRow=10,perLine=10;
    int array[ROW]={};
    int correct[ROW]={};
    int swap1,i=0;
    char ans;
    ofstream output;
    output.open("random.txt");
    filAray(array,pFilRow);
    cout<<"I will present a block of numbers to you and you must sort them in order.Try to do so in the least amount of swaps possible."<<endl;
    cout<<"\nPOSITION   0  1  2  3  4  5  6  7  8  9  \n=========================================\n";
    fileAry(array,pFilRow,perLine);
    prntfil(array,pFilRow,perLine);
    cout<<endl<<"Which would you like to switch it for? Enter both numbers you wish to switch with by inputing the corresponding"
            "position numbers above the desired unsorted numbers."<<endl;
    while(ans!='y'&&ans!='Y'){
        cin>>swap1>>i;
        swap(array[i],array[swap1]);
        cout<<"\nPOSITION   0  1  2  3  4  5  6  7  8  9  \n=========================================\n";
        prntAry(array,pFilRow,perLine);
        cout<<"Are you done? Enter 'y' for Yes. Enter any other key to continue sorting. Then enter your next number to sort."<<endl;
        cin>>ans;
    }
    cout<<"Ok. Now you are done. I'll compare my answer with yours."<<endl;
    i=0;
    ans='N';
    for(int i=0;i<pFilRow-1;i++){
        if(array[i]>array[i+1])
            ans='Y';
    }
    cout<<"This is the correct sort."<<endl;
    fileAry(array,pFilRow,perLine);
    markSrt(array,pFilRow);
    prntAry(array,pFilRow,perLine);
    if(ans=='Y')
        cout<<"You made a mistake."<<endl;
    else
        cout<<"You are correct!"<<endl;
    output.close();
    return 0;
}
void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%10+1;
    }
}
void prntAry(const int a[],int n,int perLine){
    cout<<endl<<"           ";
    for(int i=0;i<n;i++){
        if(a[i]<10)
            cout<<setw(1)<<a[i]<<"  ";
        else
            cout<<setw(2)<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
void swap(int &a,int &b){
    if(a==b)
        a=a,b=b;
    else{
        a=a^b;
        b=a^b;
        a=a^b;
    }
}
void fileAry(const int a[],int n,int perLine){
    ofstream output;
    output.open("random.txt");
    for(int i=0;i<n;i++){
        if(a[i]<10)
            output<<setw(1)<<a[i]<<"  ";
        else
            output<<setw(2)<<a[i]<<" ";
        if(i%perLine==(perLine-1))output<<endl;
    }
    output.close();
}
void prntfil(const int a[],int n,int perLine){
    ifstream input ("random.txt");
    string line;
    getline(input,line);
    cout<<endl<<"           ";
    cout<<line;
    cout<<endl;
}
void markSrt(int a[],int n){
    //Apply swapMin from beginning to end
    for(int i=0;i<n-1;i++){
        //Swap elements at the top of the list
        //with the minimum
        for(int j=i+1;j<n;j++){
            //Swap individual elements with smaller
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}