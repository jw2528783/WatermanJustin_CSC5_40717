/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 12, 2015, 10:54 AM
 *      Purpose: Program Challenge #22 Angle Calculator
 *              Use cmath functions sin,cos,tan
 */

//System Libraries
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
const float PIDIV4=atan(1); //Pi/4=arctan(1)
const float CNVDGRD=PIDIV4/45; //Pi/4/45degrees is the conversion
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Declare the angle variable as an integer in degrees, and the radian
    //angle as a float
    srand(static_cast<unsigned int>(time(0)));
    int angDeg=rand()%361-180;//Angle [-180,180]
    float angRad=angDeg*CNVDGRD;
    cout<<"Angle in degrees => "<<angDeg<<endl;
    cout<<"Angle in radians => "<<angRad<<endl;
    //Output
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<angDeg<<") = "<<setw(8)<<sin(angRad)<<endl;
    cout<<"cos("<<angDeg<<") = "<<setw(8)<<cos(angRad)<<endl;
    cout<<"tan("<<angDeg<<") = "<<setw(8)<<tan(angRad)<<endl;
    return 0;
}
