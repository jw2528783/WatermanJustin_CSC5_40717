/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 23, 2015, 12:22 PM
 *      Purpose: Calculate weight in dynes.
 *          Similar to one done in class, but with my weight.
 */

#include <iostream>
using namespace std;

const float G=6.673e-8f;//Weak Force attraction cm^3/g/sec^2

//Function Prototype
// F            m1    m2    d
float atrForc(float,float,float);

int main(int argc, char** argv) {
    //Declare variables values found on Google
    float mEarth=5.972e24f; //Mass of Earth in Kilograms
    float wtJustin=180.0f; //Weight of Justin in lbs
    float rEarth=6.371e3; //Radius of Earth in Kilometers
    //Conversions
    mEarth*=1e3f; //Convert to grams
    float mJustin=wtJustin*453.59; //453.59g/lb
    rEarth*=(1e3f*1e2f); //10^3m/km*10^2cm/m
    //Calculate attractive force in dynes
    float dynes=atrForc(mEarth,mJustin,rEarth);
    float lbs=dynes*1/4.44822e5f; //Conversion 1lb/4.4dynes
    cout<<"My weight in dynes = "<<dynes<<endl;
    cout<<"My weight in lbs = "<<lbs<<endl;
    return 0;
}

float atrForc(float m1,float m2,float d){
    return G*m1*m2/d/d;
}