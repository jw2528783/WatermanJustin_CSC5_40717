/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 26, 2015, 3:27 PM
 *      Purpose: Prime Function
 */

#include <iostream>
using namespace std;

float isPrime(int);

int main(int argc, char** argv) {
    int prime,answer;
    cout<<"I will take a number you give me and tell you if it is prime."<<endl;
    cout<<"Enter a number now."<<endl;
    cin>>prime;
    int y=isPrime(prime);
    cout<<"The number "<<prime<<" is ";
    if(y==1)
        cout<<"prime"<<endl;
    else
        cout<<"not prime"<<endl;
    return 0;
}

float isPrime(int prime){
    int x,answer;
    for(int x=2;x<prime;x++)
        if(prime%x==0)
            return 2;
    return 1;
    
    return answer;
}
