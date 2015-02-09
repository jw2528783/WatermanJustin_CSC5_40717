/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on February 8, 2015, 9:31 PM
 *      Purpose: Problem 9 Driver's License Exam
 */

#include <iostream>
using namespace std;
void checkAnswers(char[],char[],int,int);
int main(int argc, char** argv) {
    const int NUM=20;
    const int CORRECT=15;
    int correct=0;	
    int incrrct=0;	
    char array[NUM]={'B','D','A','A','C','A','B','A','C','D','B','C','D',
    'A','D','C','C','B','D','A'};
    char student[NUM];
    for (int reply=0;reply<NUM;reply++){ 
        cout<<"Enter your answers in capital letters: "<<(reply+1)<<": "<<endl;
        cin>>student[reply];
        while(student[reply]!='A'&&student[reply]!='B'&&student[reply]!='C'&&student[reply]!='D'){
            cout<<"You must enter A, B, C, or D\n";
            cout<<"Enter your answer: "<<(reply+1)<<": "<<endl;
            cin>>student[reply];
        }
    }
    checkAnswers(array,student,NUM,CORRECT);	
    return 0;
    }
    void checkAnswers(char answers[], char student[], int NUM, int CORRECT){
        int correct=0;	
        int incrrct=0;
        int wrong[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int j=0;
        for (int i=0;i<NUM;i++){
            if (answers[i]==student[i])
                correct++;
            else if (answers[i] != student[i]){
                incrrct++;
                wrong[j]=i+1;
                j++;
            }
        }
        cout<<endl;
        if (correct>=CORRECT){
            cout<<"You must have at least 15 correct to pass."<<endl;
            cout<<"Student passed the exam"<<endl;
        }
        else{
            cout<<"You must have at least 15 correct to pass."<<endl;
            cout<<"Student failed the exam"<<endl;
        }
        cout<<"The list below shows the question numbers of the incorrectly answered questions."<<endl;
        for (int i=0;i<NUM;i++){
            if (wrong[i]!=0)
                cout<<"Question # "<<wrong[i]<<" is incorrect."<<endl;
        }
        cout<<"Correct Answers = "<<correct<<endl; 
        cout<<"Incorrect Answers = "<<incrrct<<endl;
}

