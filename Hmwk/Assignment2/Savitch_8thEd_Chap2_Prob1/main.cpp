/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 13, 2015, 10:50 AM
 *      Purpose: Problem 1 Metric ton
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
const float CNVTNOZ=3.527392e4;//Conversion from Metric Tons to Ounces.
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Declare variables
    float wghtPkO; //Weight of cereal contents in ounces
    float wghtPkT; //Weight of cereal contents in metric tons
    float nPkTon; //Number of cereal boxes in a metric ton
    //Prompt user for cereal weight
    cout<<"Please input the number of ounces on the cereal box to convert to "
            "metric tons."<<endl;
    cin>>wghtPkO;
    //Calculate the results
    wghtPkT=wghtPkO/CNVTNOZ;
    nPkTon=1/wghtPkT;
    //Output the results
    cout<<fixed<<setprecision(4)<<"Weight of cereal box is "<<wghtPkT<<" metric tons"<<endl;
    cout<<"Number of cereal boxes in a metric ton is "<<nPkTon<<endl;
    //Ask if user would like to repeat the calculation
    cout<<"Would you like to repeat the calculation?"<<endl;
    cout<<"Or make a new calculation?"<<endl;
    cout<<"Type Y for yes and N for no."<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y'||answer=='y'){
        //Prompt user for cereal weight
    cout<<"Please input the number of ounces on the cereal box to convert to "
            "metric tons."<<endl;
    cin>>wghtPkO;
    //Calculate the results
    wghtPkT=wghtPkO/CNVTNOZ;
    nPkTon=1/wghtPkT;
    //Output the results
    cout<<fixed<<setprecision(3)<<"Weight of cereal box is "<<wghtPkT<<" metric tons"<<endl;
    cout<<"Number of cereal boxes in a metric ton is "<<nPkTon<<endl;
    }
    if(answer=='N'||answer=='n'){
        cout<<"Ok. Bye."<<endl;
    }
    return 0;
}