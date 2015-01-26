/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 23, 2015, 12:37 PM
 *      Purpose: Problem 1 Markup
 */

#include <iomanip>
#include <iostream>
using namespace std;

//Function Prototypes
float calcRet(float,float);

int main(int argc, char** argv) {
    float cost,total,markup;
    cout<<"I will display an item's retail price if you give me the item's wholesale cost, then its markup percentage."<<endl;
    cout<<"Enter wholesale cost."<<endl;
    cin>>cost;
    if(cost<0){
        cout<<"Error. Please enter a positive number."<<endl;
        cin>>cost;
        }
    cout<<"Now the markup percentage."<<endl;
    cin>>markup;
    if(markup<0){
        cout<<"Error. Please enter a positive number."<<endl;
        cin>>markup;
        }
    markup=markup*.01;
    total=calcRet(cost,markup);
    cout<<fixed<<setprecision(2);
    cout<<"The retail price of the item is "<<total;
    return 0;
}
float calcRet(float num1,float num2){
    float answer;
    answer=(num1*num2)+num1;
    return answer;
}
