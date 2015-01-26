/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 23, 2015, 1:00 PM
 *      Purpose: Problem 3 Winning Division
 */

#include <iostream>
#include <iomanip>
using namespace std;

float getSale();
void Highest(float n1,float n2,float n3,float n4);

int main(int argc, char** argv) {
    float salesNE,salesNW,salesSE,salesSW;
    cout<<fixed<<setprecision(2);
    cout<<"This will determine which of a company's four divisions (Northwest,Northeast,Southwest,Southeast) had the "
            "greatest sales for a quarter."<<endl;
    cout<<"Northwest Division: "<<endl;
    salesNW=getSale();
    cout<<"Northeast Division: "<<endl;
    salesNE=getSale();
    cout<<"Southwest Division: "<<endl;
    salesSW = getSale();
    cout<<"Southeast Division: "<<endl;
    salesSE=getSale();
    Highest(salesNW,salesNE,salesSE,salesSW);
    return 0;
}

float getSale(){
    float sales;
    cout<<"What is the profit for this division?"<<endl;
    cin>>sales;
    if(sales<0){
        cout<<"Enter a positive value."<<endl;
        cin>>sales;
    }
    return sales;
}

void Highest(float salesNW,float salesNE,float salesSE,float salesSW){
    if (salesNW>salesNE&&salesNW>salesSE){
        if (salesNW>salesSW)
            cout<<"The highest division is the Northwest division with $"<<salesNW<<endl; 
    }
    if (salesNE>salesSE&&salesNE>salesNW){
        if (salesNE>salesSW)
            cout<<"The highest division is the Northeast division with $"<<salesNE<<endl; 
    }
    if (salesSW>salesNE&&salesSW>salesNW){
        if (salesSW>salesSE)
            cout<<"The highest division is the Southwest division with $"<<salesSW<<endl; 
    }
    if (salesSE>salesNE&&salesSE>salesNW){
        if (salesSE>salesSW)
            cout<<"The highest division is the Southeast division with $"<<salesSE<<endl; 
    }
}
