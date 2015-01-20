/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 17, 2015, 6:12 PM
 *      Purpose: Problem 11 Book Club Points
 */

#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    short numbks;
    cout<<"Welcome to Serendipity Booksellers book club where you can earn points for the "
            "number of books you purchase per month.\nPlease input the number of books you have purchased this"
            " month to see how many points you've earned!"<<endl;
    cin>>numbks;
    if (numbks==0){
        cout<<"I'm sorry. You have earned 0 points."<<endl;
    }
    else if (numbks==1){
        cout<<"1 book. You have earned 5 points!"<<endl;
    }
    else if (numbks==2){
        cout<<"2 books. You have earned 15 points!"<<endl;
    }
    else if (numbks==3){
        cout<<"3 books. You have earned 30 points!"<<endl;
    }
    else if (numbks>=4){
        cout<<"Wow! You have earned 60 points!"<<endl;
    }
    else
        cout<<"Error. Please input a positive whole number of books.\nGoodbye."<<endl;
    return 0;
}

