/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 20, 2015, 10:22 AM
 *      Purpose: Problem 6 Distance Traveled
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    float Speed,hours,dist;
    cout<<"I will calculate the distance you have traveled. Enter the speed of"
            " your vehicle (in Miles per Hour). Then input how many hours you"
            " have traveled."<<endl;
    cin>>Speed>>hours;
    dist=Speed*hours;
    if(Speed<0 || hours<=1)
        cout<<"Error. Please enter positive speeds and greater than or equal to 1."<<endl;
    else{
        cout<<"  Hour     Distance Traveled\n ----------------------------"<<endl;
        for(int x=1;x<=hours;x++){
                dist=Speed*x;
                cout<<"    "<<x<<"\t  "<<setw(10)<<right<<dist<<" miles"<<endl;
        }
    }
    return 0;
}

