/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 14, 2015, 8:14 AM
 *      Purpose: Problem 19 How Many Pizzas?
 *              Number of pizzas needed for a party.
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
const float PI=3.14159; //the value for Pi.
int main(int argc, char** argv) {
    //Declare variables
    float pizdiam; //diameter of the pizza
    unsigned short numslic; //number of slices taken from the pizza
    float pizarea; //area of the whole pizza
    unsigned short numppl; //number of people at party
    unsigned short numpizz; //number of pizzas to buy
    float numslne;
    //Display purpose and prompt for input.
    cout<<"This program will calculate the number of pizzas to buy for a "
            "party.\nPlease input the diameter of your pizzas, in inches."<<endl;
    cin>>pizdiam;
    cout<<"How many people will attend this party?"<<endl;
    cin>>numppl;
    //Calculations
    pizarea=(pizdiam/2)*(pizdiam/2)*PI; //calculates the pizza's area
    numslic=pizarea/14.125; //calculates the number of slices
    cout<<fixed<<setprecision(1);
    numslne=numppl*4;
    numpizz=numslne/numslic+1; //calculates the number of pizzas needed to be bought.
    //Display results
    cout<<"The radius of your pizza = "<<pizdiam/2<<" inches"<<endl;
    cout<<"the number of people at your party are "<<numppl<<endl;
    cout<<"The pizza area = "<<pizarea<<endl;
    cout<<"The number of slices that your pizza can be cut into are "<<
            numslic<<endl;
    cout<<"The number of pizzas you need to buy are "<<numpizz<<endl;
    return 0;
}

