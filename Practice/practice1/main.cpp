/* 
 * File:   main.cpp
 * Author: Justin
 * Created on February 9, 2015, 8:07 AM
 */

#include <iostream>
using namespace std;
void num2(unsigned short);
int main(int argc, char** argv) {
    unsigned short num;
    cout<<"Enter a number to be converted and reversed."<<endl;
    cin>>num;
    num2(num);
    return 0;
}
void num2(unsigned short num){
    int rem=0,i=10;
    static_cast<signed short>(num);
    while(num>0){
        rem=rem*10+(num%10);
        num=num/10;
    }
    cout<<rem<<endl;
    if(num>32767||num<-32768)
        cout<<"Error. Out of range of a signed short."<<endl;
}