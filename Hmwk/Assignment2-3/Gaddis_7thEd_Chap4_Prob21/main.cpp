/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 14, 2015, 10:24 AM
 *      Purpose: Problem 21 Geometry Calculator
 */

#include <cstdlib>
#include <iostream>
using namespace std;
const float PI=3.14159;
int main(int argc, char** argv) {
    int choice;
    cout<<"Geometry Calculator"<<endl;
    cout<<"\t1. Calculate the Area of a Circle"<<endl;
    cout<<"\t2. Calculate the Area of a Rectangle"<<endl;
    cout<<"\t3. Calculate the Area of a Triangle"<<endl;
    cout<<"\t4. Quit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            float cirrad,cirarea;
            cout<<"Please input the radius of a circle"<<endl;
            cin>>cirrad;
            cirarea=cirrad*cirrad*PI;
            cout<<"The area of your circle is "<<cirarea<<endl;
            break;
        case 2:
            float width,length,recarea;
            cout<<"Please input the width and length of a rectangle"<<endl;
            cin>>width>>length;
            recarea=width*length;
            cout<<"The area of your rectangle is "<<recarea<<endl;
            break;
        case 3:
            float base,height,triarea;
            cout<<"Please input the length of a triangle's base and its height"<<endl;
            cin>>base>>height;
            triarea=base*height*0.5;
            cout<<"The area of your triangle is "<<triarea<<endl;
            break;
        case 4:
            break;
        default:
            cout<<"Incorrect Choice!"<<endl;
        }
    return 0;
}