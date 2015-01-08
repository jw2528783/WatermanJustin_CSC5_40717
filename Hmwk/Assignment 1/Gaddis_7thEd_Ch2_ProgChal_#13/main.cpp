/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 7, 2015, 6:27 PM
 *      Purpose: Programming Challenge #13 Circuit Board Price
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    float a,b;
    a=.4, b=12.67; //a=the percent profit of 40%, b=the cost of a circuit board.
    float cbproft=a*b; //40% the cost of a circuit board.
    cbproft=a*b;
    float cbprice=b+cbproft; //the selling point of a circuit board with a 40% profit margin.
    cbprice=b+cbproft;
    cout<<"The selling price of a circuit board = $"<<cbprice<<endl;
    return 0;
}

