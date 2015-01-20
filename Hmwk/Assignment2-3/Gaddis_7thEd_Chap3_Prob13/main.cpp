/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 13, 2015, 8:24 PM
 *      Purpose: Problem 13 Property tax
 */

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    float landval; //Land value
    float assessv; //Assessment value
    float proptax; //Property tax
    assessv=landval*.6;
    proptax=assessv/100*0.64;
    cout<<"I am calculating your taxes for you. Please input the actual value of"
            " your land."<<endl;
    cin>>landval;
    assessv=landval*.6;
    proptax=assessv/100*0.64;
    cout<<fixed<<setprecision(2);
    cout<<"Your land value = $"<<landval<<"\nYour Assessment value = $"<<
            assessv<<"\nYour Property tax = $"<<proptax<<endl;
    return 0;
}

