/* 
 * File:   main.cpp
 * Author: Justin
 * Created on January 28, 2015, 8:44 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    int num;
    char num1,num2,num3,num4;
    cout<<fixed<<setprecision(4);
    cout<<"Input a 4 digit number.\nAnd yes, 0000 does count as a 4 digit number."<<endl;
    cin>>num;
    num1=num%10,num2=(num%100)/10,num3=(num%1000)/100,num4=(num%10000)/1000;
    cout<<num4<<" ";
    for(int x=1;x<=num4;x++)
        cout<<"*";
    cout<<endl<<num3+0<<" ";
    for(int x=1;x<=num3;x++)
        cout<<"*";
    cout<<endl<<num2+0<<" ";
    for(int x=1;x<=num2;x++)
       cout<<"*";
    cout<<endl<<num1+0<<" ";
    for(int x=1;x<=num1;x++)
        cout<<"*";
    return 0;
}