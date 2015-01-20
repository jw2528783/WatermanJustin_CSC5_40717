/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 14, 2015, 9:21 AM
 *      Purpose: Problem 1 Minimum/Maximum
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int num1, num2, larger, smaller;
    cout<<"Please input 2 positive whole numbers (in the range of -2e9 and 2e9) "
            "and I will tell you which one is smaller and which one is larger."<<endl;
    cin>>num1>>num2;
    if (num1<num2){
        larger=num2;
        smaller=num1;
        cout<<"The larger number is "<<larger<<endl;
        cout<<"The smaller number is "<<smaller<<endl;
    }
    else if (num1>num2){
        larger=num1;
        smaller=num2;
        cout<<"The larger number is "<<larger<<endl;
        cout<<"The smaller number is "<<smaller<<endl;
    }
    return 0;
}

