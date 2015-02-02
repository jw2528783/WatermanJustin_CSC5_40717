/* 
 * File:   main.cpp
 * Author: Justin
 *
 * Created on February 1, 2015, 3:08 PM
 */

#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int n,i,j,a,x=1,z=0;
    char d='y';
    while(d=='y'||d=='Y'){
    cout<<"Enter two integers and I will find the maximum cycles that occur in that range."<<endl;
    cin>>i>>j;
    for(int b=i;b<=j;b++){
        x=1;
        a=b;
        while(a!=1){
            if(a%2==1)
                a=3*a+1;
            else
                a=a/2;
            x++;
        }
        if(x>z)
            z=x;
    }
    cout<<i<<" "<<j<<" "<<z<<endl;
    cout<<"Do you want to enter another integer range? Enter 'y' for yes. Enter anything else to quit."<<endl;
    cin>>d;
    z=0;
    }
    return 0;
}