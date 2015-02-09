/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on February 8, 2015, 5:02 PM
 *      Purpose: Problem 4: Monkey Business
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    const int day=7,monkey=3;
    float min=0,max=0,total,average,array[monkey][day];
    cout<<"Enter the amount of food, in pounds, that each monkey ate everyday this week."<<endl;
    for(int x=0;x<monkey;x++){
        for(int i=0;i<day;i++){
        cout<<"Monkey "<<(x+1)<<"\tDay "<<(i+1)<<endl;
        cin>>array[x][i];
        if(array[x][i]<0){
            cout<<"Error. Enter a positive number."<<endl;
            cin>>array[x][i];
        }
        total+=array[x][i];
        }
    }
    average=total/(monkey*day);
    for(int x=0;x<monkey;x++){
        for(int i=0;i<day;i++){
            if(array[x][i]>max)
                max=array[x][i];
        }
    }
    min=max;
    for(int x=0;x<monkey;x++){
        for(int i=0;i<day;i++){
            if(array[x][i]<min)
                min=array[x][i];
        }
    }
    cout<<"The total eaten is "<<total<<endl;
    cout<<"The average eaten daily is "<<average<<endl;
    cout<<"The most eaten by a monkey is "<<max<<endl;
    cout<<"The least eaten by a monkey is "<<min<<endl;
    return 0;
}

