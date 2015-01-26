/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 26, 2015, 10:05 AM
 *      Purpose: Timer
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    //Initialize random number seed
    srand(static_cast<unsigned int>(time(0)));
    unsigned int x,y,begtime,endtime,ans,totTim;
    //Randomly choose 2 digits for each
    x=rand()%90+10;
    y=rand()%90+10;
    totTim=10;
    begtime=static_cast<unsigned int>(time(0));
    //Prompt for answer
    cout<<"What is "<<x<<" + "<<y<<" ?"<<endl;
    cout<<"You have five seconds to answer."<<endl;
    cin>>ans;
    endtime=static_cast<unsigned int>(time(0));
    
    //Determine if correct
    if(totTim>endtime-begtime){
        if(ans==x+y)
            cout<<"You are correct!"<<endl;
        else
            cout<<"You are wrong."<<endl;
    }
    else{
        cout<<"You took too much time."<<endl;
        cout<<"Time allowed = "<<totTim<<endl;
        cout<<"Your time = "<<endtime-begtime<<endl;
    }
    return 0;
}