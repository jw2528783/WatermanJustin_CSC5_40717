/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 15, 2015, 8:06 AM
 *      Purpose: Problem 19 The Speed of Sound in Gases
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    cout<<"The Speed of Sound in Gases"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"1. Carbon Dioxide "<<setw(8)<<"258.0"<<endl;
    cout<<"2. Air            "<<setw(8)<<"331.5"<<endl;
    cout<<"3. Helium         "<<setw(8)<<"972.0"<<endl;
    cout<<"4. Hydrogen        "<<setw(8)<<"1270.0"<<endl;
    cout<<"Please enter the number next to the gas that you would like to "
            "calculate the distance that a sound was hard."<<endl;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:{
            cout<<"You have selected Carbon Dioxide. Please enter the number"
                    " of seconds it took the sound to travel to you."<<endl;
            float cdsec,cddist;
            cin>>cdsec;
            cddist=cdsec*258.0;
            if (cdsec>=0 && cdsec<30)
            cout<<"The sound you heard came from approximately "<<fixed
                    <<setprecision(2)<<cddist<<" "
                    "meters away."<<endl;
            else if (cdsec<0 || cdsec>30)
                cout<<"Invalid time input."<<endl;
            break;
          }
        case 2:{
            cout<<"You have selected Air. Please enter the number"
                    " of seconds it took the sound to travel to you."<<endl;
            float airsec,airdist;
            cin>>airsec;
            airdist=airsec*331.5;
            if (airsec>=0 && airsec<30)
            cout<<"The sound you heard came from approximately "<<fixed
                    <<setprecision(2)<<airdist<<" "
                    "meters away."<<endl;
            else if (airsec<0 || airsec>30)
                cout<<"Invalid time input."<<endl;
            break;
        }
        case 3:{
            cout<<"You have selected Helium. Please enter the number"
                    " of seconds it took the sound to travel to you."<<endl;
            float helsec,heldist;
            cin>>helsec;
            heldist=helsec*972.0;
            if (helsec>=0 && helsec<30)
            cout<<"The sound you heard came from approximately "<<fixed
                    <<setprecision(2)<<heldist<<" "
                    "meters away."<<endl;
            else if (helsec<0 || helsec>30)
                cout<<"Invalid time input."<<endl;
            break;
        }
        case 4:{
            cout<<"You have selected Hydrogen. Please enter the number"
                    " of seconds it took the sound to travel to you."<<endl;
            float hydsec,hyddist;
            cin>>hydsec;
            hyddist=hydsec*331.5;
            if (hydsec>=0 && hydsec<30)
            cout<<"The sound you heard came from approximately "<<fixed
                    <<setprecision(2)<<hyddist<<" "
                    "meters away."<<endl;
            else if (hydsec<0 || hydsec>30)
                cout<<"Invalid time input."<<endl;
            break;
        }
        default:{
            cout<<"Invalid choice. Goodbye."<<endl;
            break;
        }
    }
    return 0;
}

