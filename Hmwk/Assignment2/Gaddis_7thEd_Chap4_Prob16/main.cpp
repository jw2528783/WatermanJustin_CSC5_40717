/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 17, 2015, 6:12 PM
 *      Purpose: Problem 16 Fat Gram Calculator
 */

#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    //Declare variables
    float calorie,fatgram,percal,CalfFat;
    cout<<"Please enter the number of calories in your food of choice. (A positive, whole number)"<<endl;
    cin>>calorie;
    cout<<"Please enter the amount of fat grams in your food. (A positive, whole number)"<<endl;
    cin>>fatgram;
    //Calculate number of calories from fat grams
    CalfFat=fatgram*9;
    //Calculate percentage of calories from fat grams
    percal=CalfFat/calorie;
    //Input Validation
    if (calorie<0 || fatgram<0)
        cout<<"Error. The calories or fat grams may have been incorrectly entered."<<endl;
    if (CalfFat>calorie)
        cout<<"Error. The calories from fat grams cannot exceed the total number of calories."<<endl;
    else
        //Answer
        cout<<"The percentage of calories that come from fat is "<<percal*100<<"%"<<endl;
    return 0;
}

