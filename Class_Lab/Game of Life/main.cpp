/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on February 4, 2015, 10:57 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Global Constants
const int COL=30;
//Function Prototypes
void filAray(char [][COL],int,char);
void prntAry(char [][COL],int);
void inject(char [][COL],int,int,char);
void pause(int);
void gnratn(char [][COL],int,char,char);
int cntNbor(char [][COL],int,char,int,int);

int main(int argc, char** argv) {
    const int ROW=10;
    char array[ROW][COL];
    int nGen=10;
    //Fill Array
    filAray(array,ROW,'*');
    //Print Array without Glider
    prntAry(array,ROW);
    //Inject Glider
    inject(array,4,13,'X');
    //Print Glider
    prntAry(array,ROW);
    //pause(1);
    //Game of Life for generations stipulated
    for(int gen=1;gen<=nGen;gen++){
        gnratn(array,ROW,'*','X');
        //pause(1);
    }
    return 0;
}

void filAray(char a[][COL],int ROW,char d){
    for(int r=0;r<ROW;r++){
        for(int c=0;c<COL;c++)
            a[r][c]=d;
    }
}

void prntAry(char a[][COL],int ROW){
    cout<<endl;
    for(int r=0;r<ROW;r++){
        for(int c=0;c<COL;c++){
            cout<<a[r][c];
        }
        cout<<endl;
    }
}

void inject(char a[][COL],int pRow,int pCol,char c){
    a[pRow+0][pCol+1]=c;
    a[pRow+1][pCol+2]=c;
    a[pRow+2][pCol+0]=c;
    a[pRow+2][pCol+1]=c;
    a[pRow+2][pCol+2]=c;
    
}

void pause(int secs){
    //Start timer
    int strt=static_cast<unsigned int>(time(0));
    int end;
    do{
        int end=static_cast<unsigned int>(time(0));
    }while(secs>(end-strt));
}

void gnratn(char a[][COL],int ROW,char d,char nd){
    for(int r=1;r<ROW-1;r++){
        for(int c=1;c<COL-1;c++){
            int nBr=cntNbor(a,ROW,d,r,c);
            if(a[r][c]!=d&&nBr<=1)
                a[r][c]=d;
            if(a[r][c]!=d&&nBr>=4)
                a[r][c]=d;
            if(a[r][c]!=d&&nBr==3)
                a[r][c]=nd;
        }
    }
}

int cntNbor(char a[][COL],int ROW,char d,int r,int c){
    //Count your neighbors
    int count=0;
    //Top
    if(a[r-1][c-1]!=d)
        count++;
    if(a[r-1][c]!=d)
        count++;
    if(a[r-1][c+1]!=d)
        count++;
    //Middle
    if(a[r][c-1]!=d)
        count++;
    if(a[r][c+1]!=d)
        count++;
    //Bottom
    if(a[r+1][c-1]!=d)
        count++;
    if(a[r+1][c+1]!=d)
        count++;
    if(a[r+1][c]!=d)
        count++;
    return count;
}