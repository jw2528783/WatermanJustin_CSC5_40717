/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 21, 2015, 10:12 AM
 *      Purpose: Problem 23 Pattern Displays
 */
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int height=10;
    cout<<"Pattern A\n"<<endl;
    for(int rows=0;rows<height;rows++){
        for(int a=0;a<1*rows+1;a++)
            cout<<"+";
        cout<<endl;
        
    }
    cout<<endl;
    cout<<"Pattern B\n"<<endl;
    for(int rows=11;rows>=1;rows--){
        for(int a=1;a<rows;a++)
            cout<<"+";
        cout<<endl;
    }
    return 0;
}