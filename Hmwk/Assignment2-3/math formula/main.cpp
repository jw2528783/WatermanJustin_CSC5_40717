/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 12, 2015, 11:26 AM
 */

#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float i=0.0319/12; //interest rate
    float N=60; //num of monthly payments
    float L=4e4; //Loan amount
    //Calculate the monthly payments
    float temp=pow((1+i),N);
    float m=i*temp*L/(temp-1);
    //float m=(i*pow((i+1),N))/(pow((1+i),N)-1)*L;
    //Output the inputs
    cout<<"interest per year = "<<i*100*12<<endl;
    cout<<"Number of payments = "<<static_cast<int>(N)<<endl;
    cout<<"Loan amount = $"<<L<<endl;
    //Output of car payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"My car will cost $"<<m<<endl;
    return 0;
}

