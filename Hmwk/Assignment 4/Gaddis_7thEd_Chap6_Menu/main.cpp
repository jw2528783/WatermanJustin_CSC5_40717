/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 26, 2015, 6:49 PM
 *      Purpose: Gaddis 7th Ed Chapter 6: Menu of 9 Problems
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

//Function Prototypes
float calcRet(float,float);
float getSale();
void Highest(float n1,float n2,float n3,float n4);
int getAcci();
void fLowest(int,int,int,int,int);
float fallDis(float);
void coinTos(int);
float getData();
void calScor(float,float,float,float,float);
float min(float,float,float,float,float);
float max(float,float,float,float,float);
int numempl();
int daymisd (int);
int avgmiss(int,int);
float totinp(float,float,float,float);
float totoup(float,float);
float isPrime(int);

int main(int argc, char** argv) {
    short choice;
    cout<<"Welcome to my solutions for Chapter 6."<<endl;
    cout<<"Please enter a number for the solution that you would like to run."<<endl;
    cout<<"1.  Problem  1 Markup"<<endl;
    cout<<"2.  Problem  3 Winning Division"<<endl;
    cout<<"3.  Problem  4 Safest Driving Area"<<endl;
    cout<<"4.  Problem  5 Falling Distance"<<endl;
    cout<<"5.  Problem  8 Coin Toss Game"<<endl;
    cout<<"6.  Problem 11 Star Search"<<endl;
    cout<<"7.  Problem 12 Days Out"<<endl;
    cout<<"8.  Problem 14 Overloaded Hospital"<<endl;
    cout<<"9.  Problem 21 Prime Number Checker"<<endl;
    cout<<"10. Quit"<<endl;
    cin>>choice;
    switch(choice){
        case 1:{
            float cost,total,markup;
            cout<<"I will display an item's retail price if you give me the item's wholesale cost, then its markup percentage."<<endl;
            cout<<"Enter wholesale cost."<<endl;
            cin>>cost;
            if(cost<0){
                cout<<"Error. Please enter a positive number."<<endl;
                cin>>cost;
                }
            cout<<"Now the markup percentage."<<endl;
            cin>>markup;
            if(markup<0){
                cout<<"Error. Please enter a positive number."<<endl;
                cin>>markup;
                }
            markup=markup*.01;
            total=calcRet(cost,markup);
            cout<<fixed<<setprecision(2);
            cout<<"The retail price of the item is "<<total;
            break;
        }
        case 2:{
            float salesNE,salesNW,salesSE,salesSW;
            cout<<fixed<<setprecision(2);
            cout<<"This will determine which of a company's four divisions (Northwest,Northeast,Southwest,Southeast) had the "
                    "greatest sales for a quarter."<<endl;
            cout<<"Northwest Division: "<<endl;
            salesNW=getSale();
            cout<<"Northeast Division: "<<endl;
            salesNE=getSale();
            cout<<"Southwest Division: "<<endl;
            salesSW = getSale();
            cout<<"Southeast Division: "<<endl;
            salesSE=getSale();
            Highest(salesNW,salesNE,salesSE,salesSW);
            break;
        }
        case 3:{
            int N,S,W,E,C;
            cout<<"I will determine which of the following regions have the fewest accidents"
                    " in the last year."<<endl;
            cout<<"This will be the order for the following questions."<<endl;
            cout<<"  North\n  South\n  West\n  East\n  Central"<<endl;
            N=getAcci();
            S=getAcci();
            W=getAcci();
            E=getAcci();
            C=getAcci();
            fLowest(N,S,W,E,C);
            break;
        }
        case 4:{
            float time,dist;
            cout<<"I will calculate the distance of a falling object."<<endl;
            cout<<"Seconds\t     Distance"<<endl;
            for (time=1;time<=10;time++){
                cout<<"  "<<time<<"\t\t"<<fallDis(time)<<endl;
    }
            break;
        }
        case 5:{
            short times;
            srand(time(0));
            cout<<"I will be simulating a coin toss game.\nHow many times would you like to flip a coin?"<<endl;
            cin>>times;
            coinTos(times);
            break;
        }
        case 6:{
            float d1,d2,d3,d4,d5;
            cout<<"This program will take 5 judge's scores between 0 and 10. Then drop the "
                    "minimum and maximum scores. Then average the remaining three scores."<<endl;
            //Get the data
            d1=getData();
            d2=getData();
            d3=getData();
            d4=getData();
            d5=getData();
            //output the score
            calScor(d1,d2,d3,d4,d5);
            break;
        }
        case 7:{
            int numppl=0,absent=0,avgmisd=0;
            cout<<"I will calculate the average number of days a company's employees are absent."<<endl;
            numppl=numempl();
            absent=daymisd(numppl);
            avgmisd=avgmiss(numppl,absent);
            cout<<"The average number of days missed is "<<avgmisd<<endl;
            break;
        }
        case 8:{
            char ans;
            float ch1,ch2,ch3,ch4;
            cout<<"I will calculate the charges for a patient's stay."<<endl;
            cout<<"Enter 'Y' if the patient was an in-patient"<<endl;
            cin>>ans;
            if(ans==89||ans==121){
                cout<<"You said: IN-PATIENT"<<endl;
                cout<<"How many days were spent at the hospital?"<<endl;
                cin>>ch1;
                cout<<"What is the daily rate?"<<endl;
                cin>>ch2;
                cout<<"What are the hospital medication charges?"<<endl;
                cin>>ch3;
                cout<<"What are the charges for hospital services?"<<endl;
                cin>>ch4;
                cout<<"The total charges are $"<<totinp(ch1,ch2,ch3,ch4)<<endl;
            }
            else{
                cout<<"You said: OUT-PATIENT"<<endl;
                cout<<"What are the charges for hospital services?"<<endl;
                cin>>ch1;
                cout<<"What are the charges for hospital medications?"<<endl;
                cin>>ch2;
                cout<<"The total charges are $"<<totoup(ch1,ch2)<<endl;
            }
            break;   
            }
        case 9:{
            int prime,answer;
            cout<<"I will take a number you give me and tell you if it is prime."<<endl;
            cout<<"Enter a number now."<<endl;
            cin>>prime;
            int y=isPrime(prime);
            cout<<"The number "<<prime<<" is ";
            if(y==1)
                cout<<"prime"<<endl;
            else
                cout<<"not prime"<<endl;
            break;
        }
        case 10:{
            cout<<"Goodbye!"<<endl;
            break;
        }
        default:{
            cout<<"Not a number in the menu. Goodbye!"<<endl;
            break;
        }

}
        
    
    return 0;
}

float calcRet(float num1,float num2){
    float answer;
    answer=(num1*num2)+num1;
    return answer;
}

float getSale(){
    float sales;
    cout<<"What is the profit for this division?"<<endl;
    cin>>sales;
    if(sales<0){
        cout<<"Enter a positive value."<<endl;
        cin>>sales;
    }
    return sales;
}

void Highest(float salesNW,float salesNE,float salesSE,float salesSW){
    if (salesNW>salesNE&&salesNW>salesSE){
        if (salesNW>salesSW)
            cout<<"The highest division is the Northwest division with $"<<salesNW<<endl; 
    }
    if (salesNE>salesSE&&salesNE>salesNW){
        if (salesNE>salesSW)
            cout<<"The highest division is the Northeast division with $"<<salesNE<<endl; 
    }
    if (salesSW>salesNE&&salesSW>salesNW){
        if (salesSW>salesSE)
            cout<<"The highest division is the Southwest division with $"<<salesSW<<endl; 
    }
    if (salesSE>salesNE&&salesSE>salesNW){
        if (salesSE>salesSW)
            cout<<"The highest division is the Southeast division with $"<<salesSE<<endl; 
    }
}

int getAcci(){
    int numAcc;
    cout<<"How many accidents were in this region?"<<endl;
    cin>>numAcc;
    if(numAcc<0)
        cout<<"Error. Use a number equal to zero or greater. Goodbye."<<endl;
    return numAcc;
}

void fLowest(int N,int S,int W,int E,int C){
    if(N<S&&N<E&&N<W&&N<C)
        cout<<"The region with the lowest accident reports is the North region."<<endl;
    else if(S<N&&S<W&&S<E&&S<C)
        cout<<"The region with the lowest accident reports is the South region."<<endl;
    else if(W<N&&W<S&&W<E&&W<C)
        cout<<"The region with the lowest accident reports is the West region."<<endl;
    else if(E<S&&E<W&&E<N&&E<C)
        cout<<"The region with the lowest accident reports is the East region."<<endl;
    else if(C<N&&C<S&&C<E&&C<W)
        cout<<"The region with the lowest accident reports is the Central region."<<endl;
}

float fallDis(float time){
    float dist=(.5f)*(9.8f)*time*time;
    return dist;
}

void coinTos(int times){
    for(int x=1;x<=times;x++){
        short flip=rand()%2+1;
        if(flip==1)
            cout<<"Heads!"<<endl;
        else if(flip==2)
            cout<<"Tails!"<<endl;
    }
}

void calScor(float d1,float d2,float d3,
               float d4,float d5){
    float total=(d1+d2+d3+d4+d5)-min(d1,d2,d3,d4,d5)-max(d1,d2,d3,d4,d5);
    float finalsc=total/3;
    cout<<"The average is = "<<finalsc<<endl;
}

float max(float d1,float d2,float d3,
               float d4,float d5){
    float max=d1;
    if(max<d2)max=d2;
    if(max<d3)max=d3;
    if(max<d4)max=d4;
    if(max<d5)max=d5;
    return max;
}

float min(float d1,float d2,float d3,
               float d4,float d5){
    float min=d1;
    if(min>d2)
        min=d2;
    if(min>d3)
        min=d3;
    if(min>d4)
        min=d4;
    if(min>d5)
        min=d5;
    return min;
}

float getData(){
    float input;
    cout<<"Enter judge's score."<<endl;
    cin>>input;
    return input;
}

int numempl(){
    int x;
    cout<<"How many employees are there in this company?"<<endl;
    cin>>x;
    if(x<=0)
        cout<<"Error. Enter a positive number of employees. Goodbye."<<endl;
    return x;
}

int daymisd(int numppl){
    int numdays;
    int totdays;
    for(int x=1;x<=numppl;x++){
        cout<<"Enter the number of days that employee "<<x<<" missed."<<endl;
        cin>>numdays;
        totdays+=numdays;
    }
    return totdays;
}

int avgmiss(int numppl,int absent){
    float totavgm;
    totavgm=absent/numppl;
    return totavgm;
}

float totinp(float ch1, float ch2, float ch3, float ch4){
    float total=ch1+ch2+ch3+ch4;
    return total;
}

float totoup(float ch1, float ch2){
    float total=ch1+ch2;
    return total;
}

float isPrime(int prime){
    int x,answer;
    for(int x=2;x<prime;x++)
        if(prime%x==0)
            return 2;
    return 1;
    
    return answer;
}