/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 21, 2015, 10:53 AM
 *      Purpose: Chapter 5 Menu with Homework Problems
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main(int argc, char** argv) {
    short choice;
    cout<<"Welcome!\nThis is the list of homework problems I did for Gaddis 7th Edition Chapter 5."<<endl;
    cout<<"Please type the number for the problem you would like to see.\n"<<endl;
    cout<<"1.  Problem 1:  Sum of Numbers"<<endl;
    cout<<"2.  Problem 2:  Characters in the ASCII Code"<<endl;
    cout<<"3.  Problem 3:  Ocean Levels"<<endl;
    cout<<"4.  Problem 6:  Distance Traveled"<<endl;
    cout<<"5.  Problem 7:  Pennies for Pay"<<endl;
    cout<<"6.  Problem 20: Random Number Guessing Game"<<endl;
    cout<<"7.  Problem 21: Enhanced Random Number Guessing Game"<<endl;
    cout<<"8.  Problem 22: Square Display"<<endl;
    cout<<"9.  Problem 23: Pattern Displays"<<endl;
    cout<<"10. Quit"<<endl;
    cin>>choice;
    cout<<endl;
    switch(choice){
        case 1:{
            short x,number;
            int sum;
            sum=0;
            cout<<"Enter a positive whole number. I will add together every number up to that point."<<endl;
            cin>>number;
            if(number<0)
                cout<<"Error. Please enter a positive number."<<endl;
            else{
                for(x=1;x<=number;x++){
                        cout<<x<<endl;
                        sum +=x;
                        }
                cout<<"The sum of all of those numbers = "<<sum<<endl;
            }
            break;
        }
        case 2:{
            char letter=0;
            cout<<"The ASCII Code Table"<<endl;
            for(int num=0;num<=127;num++){
                cout<<letter<<" ";
                letter++;
                cout<<fixed<<setw(1);
                if(num%16==0)
                    cout<<endl;
            }
            cout<<endl;
            break;
        }
        case 3:{
            int years=0;
            float level=0;
            cout<<"The ocean levels are rising each year at a rate of 1.5mm per year. These are "
                    "levels that the ocean will rise for the following 25 years."<<endl;
            for(float x=0;x<25;x++){
                years++;
                level+=1.5;
                cout<<"The ocean will rise "<<fixed<<setprecision(1)<<setw(4)<<level<<" milimeters after "<<years<<" years."<<endl;
            }
            break;
        }
        case 4:{
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
            break;
        }
        case 5:{
            unsigned short number;
            unsigned int sum=1;
            unsigned int total=sum;
            cout<<"You earn one penny on one day and then on the next day, that amount doubles. "
                    "Enter a positive number of days. I will add together every number up to that point."<<endl;
            cin>>number;
            if(number<0)
                cout<<"Error. Please enter a positive number."<<endl;
            else{
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"On the first day, your sum   =  $"<<setw(2)<<sum/100.0f<<endl;
                for(int x=2;x<=number;x++){
                        sum<<=1;
                        total+=sum;
                        cout<<"After "<<setw(2)<<x<<" days your salary    =  $"<<setw(2)<<sum/100.0f<<endl;

                        }
                cout<<"The sum of all of those days =  $"<<setw(2)<<sum/100.0f<<endl;
            }
            break;
        }
        case 6:{
            short number,guess;
            srand(time(0));
            number=rand()%500+1;
            cout<<"Welcome to my guessing game.\nI will randomly generate a number between 1 and 500 and you will guess it."<<endl;
            do{
                cout<<"Go on! Take a guess! A number between 1 and 500"<<endl;
                cin>>guess;
                if(guess<1 || guess>500)
                    cout<<"Error. You went out of range!"<<endl;
                else if(guess<number)
                    cout<<"Too low!"<<endl;
                else if (guess>number)
                    cout<<"Too high!"<<endl;
            }
            while(number!=guess);
            cout<<"Congratulations! You guessed the number!!\nThe number was "<<number<<endl;
            break;
        }
        case 7:{
            short number,guess;
            srand(time(0));
            number=rand()%500+1;
            cout<<"Welcome to my IMPROVED guessing game.\nI will randomly generate a number between 1 and 500 and you will guess it."<<endl;
            cout<<"I will now also tell you how many tries it took you to guess my number."<<endl;
            short count=0;
            do{
                cout<<"Go on! Take a guess! A number between 1 and 500"<<endl;
                cin>>guess;
                if(guess<1 || guess>500){
                    cout<<"Error. You went out of range!"<<endl;
                    count++;
                }
                else if(guess<number){
                    cout<<"Too low!"<<endl;
                    count++;
                }
                else if (guess>number){
                    cout<<"Too high!"<<endl;
                    count++;
                }
                else{
                    cout<<"Congratulations! You guessed the number!!\nThe number was "<<number<<endl;
                    cout<<"That took you "<<count<<" trys before you got it right."<<endl;
                }    
            }
            while(number!=guess);
            break;
        }
        case 8:{
            int height;
            cout<<"How large would you want your square to be?\nEnter a positive number less than 66."<<endl;
            cin>>height;
            if(height<=0 || height>=66)
                cout<<"Error. Enter a positive number under 66."<<endl;
            else
                for(int row=1; row<=height; row++){
                    for(int col=1;col<=2*height;col++){
                        cout<<"X";
                    }
                    cout<<endl;
                }
                cout<<endl;
            cout<<"Here is a square made of "<<height<<" lines. Each row has "<<2*height<<" characters"<<endl;
            cout<<"in order to give the square the same width as its height."<<endl;
            break;
        }
        case 9:{
            int height=10;
            cout<<"Here are two patterns I made using loops."<<endl;
            cout<<"Pattern A\n"<<endl;
            for(int rows=0;rows<height;rows++){
                for(int a=0;a<1*rows+1;a++)
                    cout<<"+";
                cout<<endl;

            }
            cout<<endl;
            cout<<"Pattern B\n"<<endl;
            for(int rows=11;rows>=1;rows--){
                for(int a=1;a<rows;a++)
                    cout<<"+";
                cout<<endl;
            }
            break;
        }
        case 10:{
            cout<<"Goodbye!"<<endl;
            break;
        }
        default:{
            cout<<"Error. Please enter an appropriate number between 1 and 10"<<endl;
        }
    }
    return 0;
}