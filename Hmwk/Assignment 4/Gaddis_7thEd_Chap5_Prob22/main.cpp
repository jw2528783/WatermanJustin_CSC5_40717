/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 21, 2015, 8:38 AM
 *      Purpose: Problem 22 Square Display
 *              Not according to book.
 *              According to how Dr. Lehr did it.
 */

#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int height;
    cout<<"How large would you want your square to be?\nEnter a positive number less than 66."<<endl;
    cin>>height;
    if(height<=0 || height>=66)
        cout<<"Error. Enter a positive number under 66."<<endl;
    else
        for(int row=1; row<=height; row++){
            for(int col=1;col<=2*height;col++){
                cout<<"X";
            }
            cout<<endl;
        }
        cout<<endl;
    cout<<"Here is a perfect square made of "<<height<<" lines. Each row has "<<2*height<<" characters."<<endl;
    return 0;
}