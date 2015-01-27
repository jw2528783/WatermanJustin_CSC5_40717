/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 26, 2015, 3:27 PM
 *      Purpose: Prime Function
 */

#include <iostream>
#include <fstream>
using namespace std;

float isPrime(int);

int main(int argc, char** argv) {
    int prime,answer;
    cout<<"I will show you all prime numbers from 1 to 100."<<endl;
    ofstream outputFile;
    outputFile.open("PrimeNumberList.txt");
    
    for(int x=1;x<=100;x++){
        int y=isPrime(x);
        while(y==1){
            outputFile<<x<<endl;
        }
    }
    outputFile.close();
    return 0;
}

float isPrime(int n){
    int x,answer;
    float y;
    for(int x=2;x<n;x++)
        y=n%x;
        if(y==0){
            return 2;
        }
    return 1;
    
    return answer;
}