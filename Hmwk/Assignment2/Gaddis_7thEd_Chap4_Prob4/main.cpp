/* File:   main.cpp
 * Author: Justin Waterman
 * Created on January 14, 2015, 9:21 AM
 *      Purpose: Problem 4 Areas of Rectangles
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int width1, length1, width2, length2, area1, area2, larger, smaller;
    cout<<"This program will calculate the areas of two rectangles and tell "
            "you which of the rectangles is larger.\nPlease input the width"
            " and length of the first rectangle."<<endl;
    cin>>width1>>length1;
    cout<<"Now input the width and length of the second rectangle."<<endl;
    cin>>width2>>length2;
    area1=width1*length1;
    area2=width2*length2;
    if (area1<area2){
        larger=area2;
        smaller=area1;
        cout<<"The larger rectangle is the second rectangle.\n"<<larger<<" > "
                <<smaller<<endl;
    }
    else if (area1>area2){
        larger=area1;
        smaller=area2;
        cout<<"The larger rectangle is the first rectangle.\n"<<larger<<" > "
                <<smaller<<endl;
    }
    return 0;
}

