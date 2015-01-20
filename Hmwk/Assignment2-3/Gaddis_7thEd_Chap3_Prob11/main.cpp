/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 13, 2015, 10:15 AM
 *      Purpose: Problem #11 Currency conversion.
 *              (Along with bitcoin conversion)
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Declare variables and initialize
    float onebitc=232.8;//Bitcoin value January 13, 2015 10:17am
    float oneeuro=0.849381;//Euro value Same date and time
    float oneyen=118.03;//Yen value same date and time
    float bitcoin,dollars,euros,yen;
    //Input the number of bitcoin and then convert
    cout<<"Please input the number of bitcoin that you want."<<endl;
    cin>>bitcoin;
    //Convert to all currencies
    dollars=onebitc*bitcoin;
    euros=oneeuro*dollars;
    yen=oneyen*dollars;
    //Output the results
    cout<<fixed<<setprecision(1)<<setw(3)<<endl;
    cout<<bitcoin<<" bitcoin = "<<dollars<<"    dollars"<<endl;
    cout<<bitcoin<<" bitcoin = "<<euros<<"    euros"<<endl;
    cout<<bitcoin<<" bitcoin = "<<yen<<"  yen"<<endl;
    return 0;
}

