/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 22, 2015, 11:22 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    short chchoic,weapchoic,homechoic;
    cout<<"Welcome to my game!"<<endl;
    cout<<"Let's begin by creating your character."<<endl;
    cout<<"What would you like to be?\n1. A Warrior\n2. A Mage\n3. A Thief\n4. An Archer\n5. Quit"<<endl;
    cout<<"Input the name of your preferred character."<<endl;
    cin>>chchoic;
    if(chchoic==1){
        cout<<"Congratulations you are a Warrior!"<<endl;
        cout<<"Select your weapon!"<<endl;
    }
    else if(chchoic==2){
        cout<<"Congratulations you are a Mage!"<<endl;
        cout<<"Select your weapon!"<<endl;
    }
    else if(chchoic==3){
        cout<<"Congratulations you are a Thief!"<<endl;
        cout<<"Select your weapon!"<<endl;
    }
    else if(chchoic==4){
        cout<<"Congratulations you are an Archer!"<<endl;
        cout<<"Select your weapon!"<<endl;
    }
    else if(chchoic<1 || chchoic>4){
        cout<<"Error. Please enter a number corresponding to the above menu."<<endl;
    }
    cout<<"Weapon list:"<<endl;
    cout<<"1. Sword"<<endl;
    cout<<"2. Dagger"<<endl;
    cout<<"3. Bow"<<endl;
    cout<<"4. Wand"<<endl;
    cout<<"5. Mace"<<endl;
    cout<<"6. Axe"<<endl;
    cout<<"Select your weapon!"<<endl;
    cin>>weapchoic;
    switch(weapchoic){
        case 1:{
            cout<<"You now wield a sword!"<<endl;
            break;
        }
        case 2:{
            cout<<"You now wield a dagger!"<<endl;
            break;
        }
        case 3:{
            cout<<"You now wield a Bow!"<<endl;
            break;
        }
        case 4:{
            cout<<"You now wield a Wand!"<<endl;
            break;
        }
        case 5:{
            cout<<"You now wield a Mace!"<<endl;
            break;
        }
        case 6:{
            cout<<"You now wield an Axe!"<<endl;
            break;
        }
        default:{
            cout<<"Please select a weapon in the list."<<endl;
            break;
        }
    }
    cout<<"Where do you live?"<<endl;
    cout<<"1. Caverns\n2. Small Village\n3. Castle\n4. Swamp\n5. Forest\n6. You have no home. You wander aimlessly around the world."<<endl;
    cin>>homechoic;
        switch(homechoic){
        case 1:{
            cout<<"You now live in dark caverns!"<<endl;
            break;
        }
        case 2:{
            cout<<"You now live in a small village!"<<endl;
            break;
        }
        case 3:{
            cout<<"You now live in a large Castle!"<<endl;
            break;
        }
        case 4:{
            cout<<"You now live in a humid swamp!"<<endl;
            break;
        }
        case 5:{
            cout<<"You now wield a green forest!"<<endl;
            break;
        }
        case 6:{
            cout<<"You now have no home and wander from land to land!"<<endl;
            break;
        }
        default:{
            cout<<"Please select a home in the list."<<endl;
            break;
        }
    }
    cout<<"Here is where we begin our adventure.\n"<<endl;
    return 0;
}

