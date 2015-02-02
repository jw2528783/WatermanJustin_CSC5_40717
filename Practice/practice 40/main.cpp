/* 
 * File:   main.cpp
 * Author: Justin
 * Created on January 29, 2015, 11:01 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;
float totala(int);
float totalb(int);
float totalc();
int main(int argc, char** argv) {
    char subpack;
    int hours;
    float total;
    cout<<"Hello. I am your ISP. Please specify your subscription package by entering 'a', 'b', or 'c'"<<endl;
    cin>>subpack;
    cout<<"How many hours did you use?"<<endl;
    cin>>hours;
    cout<<fixed<<setprecision(2);
    if(subpack=='a'||subpack=='A'){
        cout<<"Your total for the month is $"<<totala(hours)<<endl;
    }
    else if(subpack=='b'||subpack=='B'){
        cout<<"Your total for the month is $"<<totalb(hours)<<endl;
    }
    else if(subpack=='c'||subpack=='C'){
        cout<<"Your total for the month is $"<<totalc<<endl;
    }
    else
        cout<<"Error. Invalid choice."<<endl;
    if(subpack=='a'||subpack=='A'){
        if(hours>11)
            cout<<"If you move up to package B, you could save $"<<totala(hours)-totalb(hours)<<endl;
    }
    if(subpack=='b'||subpack=='B'){
        if(hours>21)
            cout<<"If you move up to package C, you could save $"<<totalb(hours)-totalc()<<endl;
    }
    return 0;
}
float totala(int hours){
    float total=19.95;
    if(hours>5){
        for(int i=5;i<hours&&i<20;i++){
            total=total+0.75;
        }
        for(int i=20;i<hours;i++){
            total=total+1;
        }
    }
    return total;
}
float totalb(int hours){
    float total=24.95;
        if(hours>5){
            for(int i=15;i<hours&&i<25;i++){
                total=total+0.75;
            }
            for(int i=25;i<hours;i++){
                total=total+0.5;
            }
        }
    return total;
}
float totalc(){
    float total=29.75;
    return total;
}