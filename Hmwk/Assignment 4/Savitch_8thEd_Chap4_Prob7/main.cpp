/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 21, 2015, 11:44 AM
 */

#include <cstdlib>

using namespace std;
//Global Constants
const float G=6.673e-8f; //Weak Force Attraction
//Function Prototype
float 
int main(int argc, char** argv) {
    //Declare variables, Values found on Google
    float mEarth=5.976e24f;
    float wtMark=188.0f;
    float rEarth=6.371e3;
    //Conversions
    mEarth*=1e3;//Convert to grams
    float mMark=wtMark*453.59;//grams/pound
    rEarth*=(1e3f*1e2f);//meters/km
    //Calculate attractive force in dynes
    float dynes=atrForc(mEarth,mMark,rEarth);
    float lbs=dynes*1/4.44822e5f;//Conversion 1 pound / 4.4 dynes
    //Output the results
    cout<<"My weight in dynes = "<<dynes<<endl;
    cout<<"My weight in pounds = "<<lbs<<endl;
    
    return 0;
}

float artForc(float m1, float m2, float d){
    return G*m1*m2/d/d;
}