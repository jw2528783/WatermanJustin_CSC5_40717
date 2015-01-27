/* 
 * File:   main.cpp
 * Author: Justin
 *
 * Created on January 26, 2015, 3:10 PM
 */

//System Library
#include <iostream>
#include <cstdlib>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
float getData();
void calScor(float,float,float,float,float);
float min(float,float,float,float,float);
float max(float,float,float,float,float);

int main(int argc, char** argv) {
    float d1,d2,d3,d4,d5;
    cout<<"This program will take 5 judge's scores between 0 and 10. Then drop the "
            "minimum and maximum scores. Then average the remaining three scores."<<endl;
    //Get the data
    d1=getData();
    d2=getData();
    d3=getData();
    d4=getData();
    d5=getData();
    //output the score
    calScor(d1,d2,d3,d4,d5);
    return 0;
}

void calScor(float d1,float d2,float d3,
               float d4,float d5){
    float total=(d1+d2+d3+d4+d5)-min(d1,d2,d3,d4,d5)-max(d1,d2,d3,d4,d5);
    float finalsc=total/3;
    cout<<"The average is = "<<finalsc<<endl;
}

float max(float d1,float d2,float d3,
               float d4,float d5){
    float max=d1;
    if(max<d2)max=d2;
    if(max<d3)max=d3;
    if(max<d4)max=d4;
    if(max<d5)max=d5;
    return max;
}

float min(float d1,float d2,float d3,
               float d4,float d5){
    float min=d1;
    if(min>d2)
        min=d2;
    if(min>d3)
        min=d3;
    if(min>d4)
        min=d4;
    if(min>d5)
        min=d5;
    return min;
}

float getData(){
    float input;
    cout<<"Enter judge's score."<<endl;
    cin>>input;
    return input;
}