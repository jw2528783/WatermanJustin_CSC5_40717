/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 26, 2015, 5:33 PM
 *      Purpose: Problem 14 Overloaded Hospital
 */

#include <iostream>
using namespace std;

float totinp(float,float,float,float);
float totoup(float,float);

int main(int argc, char** argv) {
    char ans;
    float ch1,ch2,ch3,ch4;
    cout<<"I will calculate the charges for a patient's stay."<<endl;
    cout<<"Enter 'Y' if the patient was an in-patient"<<endl;
    cin>>ans;
    if(ans==89||ans==121){
        cout<<"You said: IN-PATIENT"<<endl;
        cout<<"How many days were spent at the hospital?"<<endl;
        cin>>ch1;
        cout<<"What is the daily rate?"<<endl;
        cin>>ch2;
        cout<<"What are the hospital medication charges?"<<endl;
        cin>>ch3;
        cout<<"What are the charges for hospital services?"<<endl;
        cin>>ch4;
        cout<<"The total charges are $"<<totinp(ch1,ch2,ch3,ch4)<<endl;
    }
    else{
        cout<<"You said: OUT-PATIENT"<<endl;
        cout<<"What are the charges for hospital services?"<<endl;
        cin>>ch1;
        cout<<"What are the charges for hospital medications?"<<endl;
        cin>>ch2;
        cout<<"The total charges are $"<<totoup(ch1,ch2)<<endl;
    }
    
    return 0;
}

float totinp(float ch1, float ch2, float ch3, float ch4){
    float total=ch1+ch2+ch3+ch4;
    return total;
}

float totoup(float ch1, float ch2){
    float total=ch1+ch2;
    return total;
}