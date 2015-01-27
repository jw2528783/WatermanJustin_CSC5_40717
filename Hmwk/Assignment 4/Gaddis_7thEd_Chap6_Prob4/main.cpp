/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 26, 2015, 6:19 PM
 *      Purpose: Problem 4 Safest Driving Area
 */

#include <iostream>
using namespace std;

int getAcci();
void fLowest(int,int,int,int,int);

int main(int argc, char** argv) {
    int N,S,W,E,C;
    cout<<"I will determine which of the following regions have the fewest accidents"
            " in the last year."<<endl;
    cout<<"This will be the order for the following questions."<<endl;
    cout<<"  north\n  south\n  west\n  east\n  central"<<endl;
    N=getAcci();
    S=getAcci();
    W=getAcci();
    E=getAcci();
    C=getAcci();
    fLowest(N,S,W,E,C);
    return 0;
}

int getAcci(){
    int numAcc;
    cout<<"How many accidents were in this region?"<<endl;
    cin>>numAcc;
    if(numAcc<0)
        cout<<"Error. Use a number equal to zero or greater. Goodbye."<<endl;
    return numAcc;
}

void fLowest(int N,int S,int E,int W,int C){
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