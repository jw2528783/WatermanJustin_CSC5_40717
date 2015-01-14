/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 13, 2015, 8:24 PM
 *      Purpose: Problem 12 Monthly Sales Tax
 */

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    unsigned short month,year; //variables for the date
    
    float totamnt;
    cout<<"I am filing your monthly sales tax report. Please input the current"
            " date. Follow this format using the first three letters of the month"
            " and the years in numbers: MMM YYYY"<<endl;
    unsigned char jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec;
    jan='January',feb='February',mar='March',apr='April',may='May',jun='June',
            jul='July',aug='August',sep='September',oct='October',nov='November',dec='December';
    cin>>month>>year;
    cout<<month<<endl;
    return 0;
}

