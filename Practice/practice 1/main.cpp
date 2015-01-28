/* 
 * File:   main.cpp
 * Author: Justin
 * Created on January 28, 2015, 7:54 AM
 */

#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    unsigned short num;
    cout<<"Enter the number of lines you want to output."<<endl;
    cin>>num;
    for(num;num>=1;num--){
        for(int x=num;x>1;x--){
            cout<<" ";
        }
        cout<<num<<endl;
    }
    return 0;
}