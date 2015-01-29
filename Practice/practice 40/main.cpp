/* 
 * File:   main.cpp
 * Author: Justin
 * Created on January 29, 2015, 11:01 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    char subpack;
    unsigned short hours;
    float total;
    cout<<"Hello. I am your ISP. Please specify your subscription package by entering 'a', 'b', or 'c'"<<endl;
    cin>>subpack;
    cout<<fixed<<setprecision(2);
    if(subpack=='a'||subpack=='A'){
        cout<<"How many hours did you use?"<<endl;
        cin>>hours;
        total=19.95;
        if(hours>5){
            for(int i=5;i<hours&&i<20;i++){
                total=total+0.75;
            }
            for(int i=20;i<hours;i++){
                total=total+1;
            }
        }
        cout<<"Your total for the month is $"<<total<<endl;
    }
    else if(subpack=='b'||subpack=='B'){
        cout<<"How many hours did you use?"<<endl;
        cin>>hours;
        total=24.95;
        if(hours>5){
            for(int i=15;i<hours&&i<25;i++){
                total=total+0.75;
            }
            for(int i=25;i<hours;i++){
                total=total+0.5;
            }
        }
        cout<<"Your total for the month is $"<<total<<endl;
    }
    else if(subpack=='c'||subpack=='C'){
        total=29.75;
        cout<<"Your total for the month is $"<<total<<endl;
    }
    else
        cout<<"Error. Invalid choice."<<endl;
    if(hours>5){
        if(total>24.95)
            cout<<"Based on your total of $"<<total<<"  you should move up to the 'b' package to save $"<<total-24.95<<endl;
    }
    if(hours>15){
        if(total>29.75)
            cout<<"Based on your total of $"<<total<<"  you should move up to the 'c' package to save $"<<total-29.75<<endl;
    }
    return 0;
}

