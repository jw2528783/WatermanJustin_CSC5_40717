/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on February 8, 2015, 5:06 PM
 *      Purpose: Charge Account Validation
 */

#include <iostream>
using namespace std;

bool valid(int[],int,int);
int main(int argc, char** argv) {
    const int COL=18;
    int list[COL]={5658845,4520125,7895122,8777541,8451277,1302850,8080152,4562555,5552012,
    5050552,7825877,1250255,1005231,6545231,3852085,7576651,7881200,4581002};
    int usernum;
    cout<<"Enter your account number."<<endl;
    cin>>usernum;
    if(valid(list,COL,usernum)==true)
        cout<<"The number is valid."<<endl;
    else
        cout<<"The number is invalid."<<endl;
    return 0;
}
bool valid(int list[],int COL,int usernum){
    bool valid=false;
    for(int i=0;i<COL;i++){
        if(list[i]==usernum){
            valid=true;
            return valid;
        }
    }
    return valid;
}