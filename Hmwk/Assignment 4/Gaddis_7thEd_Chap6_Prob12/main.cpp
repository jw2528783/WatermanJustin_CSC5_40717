/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 26, 2015, 4:54 PM
 *      Purpose: Problem 12 Days Out
 */

#include <iostream>
using namespace std;

int numempl();
int daymisd (int);
int avgmiss(int,int);

int main(int argc, char** argv) {
    int numppl=0,absent=0,avgmisd=0;
    cout<<"I will calculate the average number of days a company's employees are absent."<<endl;
    numppl=numempl();
    absent=daymisd(numppl);
    avgmisd=avgmiss(numppl,absent);
    cout<<"The average number of days missed is "<<avgmisd<<endl;
    return 0;
}

int numempl(){
    int x;
    cout<<"How many employees are there in this company?"<<endl;
    cin>>x;
    if(x<+0)
        cout<<"Error. Enter a positive number of employees. Goodbye."<<endl;
    return x;
}

int daymisd(int numppl){
    int numdays;
    int totdays;
    for(int x=1;x<=numppl;x++){
        cout<<"Enter the number of days that employee "<<x<<" missed."<<endl;
        cin>>numdays;
        totdays+=numdays;
    }
    return totdays;
}

int avgmiss(int numppl,int absent){
    float totavgm;
    totavgm=absent/numppl;
    return totavgm;
}