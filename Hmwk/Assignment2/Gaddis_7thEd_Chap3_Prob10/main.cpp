/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 13, 2015, 8:24 PM
 *      Purpose: Convert Celsius to Fahrenheit
 */

#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    float celsius,fahrnht;//variables for celsius and fahrenheit
    char answer;
    float FahCNVT, CelCNVT; //conversion for celsius and fahrenheit
    cout<<"This program will convert between Celsius and Fahrenheit. Please "
            "indicate which unit you would like to convert to.\nType F for "
            "Fahrenheit or C for Celsius."<<endl;
    cin>>answer;
    if(answer=='F'||answer=='f'){
        cout<<"Please input a number for Celsius."<<endl;
        cin>>celsius;
        FahCNVT=9/5*celsius+32;
        cout<<celsius<<" degrees Celsius = "<<FahCNVT<<" degrees Fahrenheit"<<endl;
    }
    if(answer=='C'||answer=='c'){
        cout<<"Please input a number for Fahrenheit."<<endl;
        cin>>fahrnht;
        CelCNVT=(fahrnht)*5/9-(160/9);
        cout<<fahrnht<<" degrees Fahrenheit = "<<CelCNVT<<" degrees Celsius"<<endl;
    }
    return 0;
}

