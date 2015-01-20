/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 17, 2015, 6:12 PM
 *      Purpose: Problem 9 Math Tutor
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    unsigned short num1, num2; //Variables for 2 random numbers between 1 and 1000.
    unsigned short numsol; //The correct sum of the 2 numbers.
    unsigned short studsum; //The student's answer to the addition of the numbers.
    srand(time(0)); //Random number generator
    num1=rand()%999+1;
    num2=rand()%999+1;
    numsol=num1+num2; //Correct sum
    //Output problem and prompt for input
    cout<<"Hello. I will be your math tutor. Here are 2 random numbers between 1 and 1000.\n"<<
            num1<<"     "<<num2<<endl;
    cout<<"\nAdd them together and input the sum."<<endl;
    cin>>studsum;
    //Check the student's answer
    if(studsum==numsol){
        cout<<"Congratulations!! You got the answer right!."<<endl;
    }
    else
        cout<<"I'm sorry. That is incorrect.\nThe correct answer is "<<numsol<<endl;
    return 0;
}

