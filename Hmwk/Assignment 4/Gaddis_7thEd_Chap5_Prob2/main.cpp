/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 20, 2015, 10:22 AM
 *      Purpose: Problem 2 Characters for the ASCII Code
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    char letter=0;
    cout<<"The ASCII Code Table"<<endl;
    for(int num=0;num<=127;num++){
        cout<<letter<<" ";
        letter++;
        cout<<fixed<<setw(1);
        if(num%16==0)
            cout<<endl;
    }
    cout<<endl;
    return 0;
}

