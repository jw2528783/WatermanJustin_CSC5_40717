/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on February 8, 2015, 4:35 PM
 *      Purpose: Problem 13 Lottery Application
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void gnrtnum(int[],int);
void getuser(int[],int);
int findm(int[],int[],int);
void outputv(int[],int[],int);
int main(int argc, char** argv) {
    const int array=5,range=9;
    int lottery[array];
    int user[array];
    int matches;
    cout<<"This will win a lottery for you."<<endl;
    gnrtnum(lottery,array);
    getuser(user,array);
    matches=findm(lottery,user,array);
    outputv(lottery,user,array);
    cout<<"Your number matches "<<matches<<" numbers."<<endl;
    if(matches==5)
        cout<<"You win!"<<endl;
    else
        cout<<"You lose."<<endl;
    return 0;
}
void gnrtnum(int lottery[],int array){
    srand(time(0));
    cout<<"Random numbers will be generated."<<endl;
    for(int i=0;i<array;i++)
        lottery[i]=0+rand()%9;
    cout<<endl;
}
void getuser(int user[],int array){
    for(int i=0;i<array;i++){
        cout<<"Enter a number"<<(i+1)<<endl;
        cin>>user[i];
    }
}
int findm(int lottery[],int user[],int array){
    int i=0;
    int numm=0;
    bool equal=true;
    while(equal&&numm<array){
        if(lottery[numm]!=user[numm])
            equal=false;
        numm++;
    }
    if(equal)
        cout<<"Arrays match"<<endl;
    else
        cout<<"Arrays don't match."<<endl;
    return numm;
}
void outputv(int lottery[],int user[],int array){
    for(int i=0;i<array;i++)
        cout<<lottery[i]<<"  "<<endl;
    cout<<endl;
    for(int j=0;j<array;j++)
        cout<<user[j]<<"  "<<endl;
    cout<<endl;
}