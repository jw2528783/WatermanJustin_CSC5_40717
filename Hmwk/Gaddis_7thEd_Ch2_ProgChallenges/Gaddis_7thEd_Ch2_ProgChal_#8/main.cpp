/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 7, 2015, 5:31 PM
 *      Purpose: Programming Challenges #8 Total Purchase
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Functional Prototypes

//Execution
int main(int argc, char** argv) {
    float a,b,c,d,e; //Five items that customer is purchasing
    a=12.95, b=24.95, c=6.95, d=14.95, e=3.95; //Price of each item.
    float subttl=a+b+c+d+e; //Subtotal of the sale
    cout<<"Price of item 1= "<<a<<"\nPrice of item 2= "<<b<<"\nPrice of item"
            " 3= "<<c<<"\nPrice of item 4= "<<d<<"\nPrice of item 5= "<<e<<endl;
    subttl=a+b+c+d+e;
    cout<<"The subtotal of the sale is "<<subttl<<endl;
    float sltax=subttl*.06; //the sales tax amount given that sales tax is 6%
    sltax=subttl*.06;
    cout<<"The amount of sales tax is "<<sltax<<endl;
    float total=subttl+sltax; //the total purchase amount including subtotal and sales tax amount
    total=subttl+sltax;
    cout<<"The total amount is "<<total<<endl;
    
    return 0;
}

