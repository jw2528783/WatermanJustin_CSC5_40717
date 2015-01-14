/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 12, 2015, 10:54 AM
 *      Purpose: Program Challenge #20 Angle Calculator
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
const float PI=3.14159;
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Variables
    float angRad,angDeg; //a given angle in radians
    cout<<"Please input an angle of your choice in radians."<<endl;
    cin>>angRad;
    angDeg=angRad*(180/PI);
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"You gave entered the radian "<<angRad<<"."<<endl;
    cout<<"The degree value of your given radian = "<<angDeg<<endl;
    cout<<"sin("<<angRad<<") = "<<setw(8)<<sin(angRad)<<endl;
    cout<<"cos("<<angRad<<") = "<<setw(8)<<cos(angRad)<<endl;
    cout<<"tan("<<angRad<<") = "<<setw(8)<<tan(angRad)<<endl;
    //Exit
    return 0;
}
