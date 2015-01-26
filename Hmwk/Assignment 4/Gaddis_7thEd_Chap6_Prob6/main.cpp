/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 23, 2015, 7:46 PM
 *      Purpose: Problem 6 Falling Distance
 */

#include <iostream>
using namespace std;

float fallDis(float);

int main(int argc, char** argv) {
    float time,dist;
    cout<<"I will calculate the distance of a falling object."<<endl;
    cout<<"Seconds\t     Distance"<<endl;
    for (time=1;time<=10;time++){
        cout<<"  "<<time<<"\t\t"<<fallDis(time)<<endl;
    }
    return 0;
}

float fallDis(float time){
    float dist=(.5f)*(9.8f)*time;
    return dist;
}