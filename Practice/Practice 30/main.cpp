/* 
 * File:   main.cpp
 * Author: Justin
 * Created on January 28, 2015, 11:03 AM
 */
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    unsigned short pin,intbal,totdeb,totall,output;
    cout<<fixed<<setfill('0')<<setw(5);
    cout<<"I will determine if your debit card has exceeded the amount on the card."<<endl;
    cout<<"Enter your four digit pin code now."<<endl;
    cin>>pin;
    if(pin>9999||pin<1000){
        if(pin==0000){
            cout<<endl;
        }
        else{
            do{
              cout<<"Error. Invalid pin. Enter a 4 digit number."<<endl;
              cin>>pin;
              if(pin==0000){
                  break;
              }
            }while(pin>9999||pin<1000);
            
        }
    }
    cout<<"Ok. Now input the balance initially placed on the card."<<endl;
    cin>>intbal;
    cout<<"Ok. Now input the total of all debits charged by the customer during the month."<<endl;
    cin>>totdeb;
    cout<<"Ok. Now input the total of all added credits to the debit card."<<endl;
    cin>>totall;
    output=intbal-totdeb+totall;
    if(output<0){
        cout<<"Your account if overdrawn. You will be charged $28.85"<<endl;
        output-28.85f;
    }
    cout<<"Your new balance is $"<<output<<endl;
    return 0;
}