/* 
 * File:   main.cpp
 * Author: Justin
 * Created on January 12, 2015, 10:06 AM
 *      Purpose: Illustrate file i/o and random numbers
 */

//System Libraries

#include <cstdlib>  //Random ran(),srand()
#include <iostream> //Keyboard/Monitor I/O
#include <fstream>  //File I/O
#include <ctime>    //Time functions
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare a file object
    ofstream output;
    //Open the file
    output.open("RolltheDice.dat");
    //Declare 5 dice
    unsigned short die1,die2,die3,die4,die5;
    //Set the values for each dice
    die1=rand()%6+1;
    die2=rand()%6+1;
    die3=rand()%6+1;
    die4=rand()%6+1;
    die5=rand()%6+1;
    //Output the results to the screen
    cout<<"Yahtzee first roll => ";
    cout<<die1<<" "<<die2<<" "<<die3;
    cout<<" "<<die4<<" "<<die5<<endl;
    //Output the results to a file
    output<<"Yahtzee first roll => ";
    output<<die1<<" "<<die2<<" "<<die3;
    output<<" "<<die4<<" "<<die5<<endl;
    //Output
    //Close the stream
    output.close();
    return 0;
}