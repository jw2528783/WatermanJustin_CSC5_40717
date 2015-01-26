/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on January 22, 2015, 11:22 AM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    short chchoic,weapchoic,homechoic,roll,rolldice,attack,x=0;
    unsigned int add1,add2,ans;
    string name;
    srand(time(0));
    rolldice=rand()%6+1;
    add1=rand()%90+10;
    add2=rand()%90+10;
    cout<<"Welcome to my game!"<<endl;
    cout<<"Let's begin by creating your character."<<endl;
    cout<<"What is your character's name?"<<endl;
    getline(cin,name);
    cout<<"Welcome "<<name<<". "<<"What would you like to be?\n1. A Warrior\n2. A Mage\n3. A Thief\n"
            "4. An Archer\n5. Quit"<<endl;
    cout<<"Input the number of your preferred character."<<endl;
    cin>>chchoic;
    cout<<endl;
    if(chchoic==1){
        cout<<"Congratulations you are a Warrior!"<<endl;
        cout<<"\nSelect your weapon!"<<endl;
    }
    else if(chchoic==2){
        cout<<"Congratulations you are a Mage!"<<endl;
        cout<<"\nSelect your weapon!"<<endl;
    }
    else if(chchoic==3){
        cout<<"Congratulations you are a Thief!"<<endl;
        cout<<"\nSelect your weapon!"<<endl;
    }
    else if(chchoic==4){
        cout<<"Congratulations you are an Archer!"<<endl;
        cout<<"\nSelect your weapon!"<<endl;
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
    cout<<endl;
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
    cout<<endl;
    cout<<"Where do you live?"<<endl;
    cout<<"1. Caverns\n2. Small Village\n3. Castle\n4. Swamp\n5. Forest\n6. You have no home. You wander aimlessly around the world."<<endl;
    cin>>homechoic;
    cout<<endl;
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
    cout<<"\n"<<endl;
    cout<<"Here is where we begin our adventure.\n"<<endl;
    cout<<"--------------------------------------------\n"<<endl;
    cout<<"You live in a kingdom known only as "<<name<<"-land."<<endl;
    cout<<"Here, you are considered the greatest dragon slayer in all of the land."<<endl;
    cout<<"However, word has come about that a new dragon has made its home somewhere in this land.";
    cout<<" It is your duty to find and slay this dragon to restore peace in the land."<<endl;
    cout<<"Now in order to begin your adventure, pull out the magic dice that are in your pocket and roll";
    cout<<" them to see where your journey will begin.\nThe smaller the number you roll, the further you";
    cout<<" must travel to find the dragon.\nInput 'roll' to roll your dice."<<endl;
    cin>>roll;
    cout<<"You roll a "<<rolldice<<endl;
    if(rolldice<7){
        cout<<"This means you have a long journey ahead of you."<<endl;
        cout<<"You begin traveling through a dark forest. On your travels, you come across a tiger. It looks hungry.\n"
                "You take out your weapon and ready yourself."<<endl;
        
        while(x<3){
            cout<<"Enter 1 to attack the tiger until it is dead."<<endl;
            cin>>attack;
            cout<<"\nKeep attacking!"<<endl;
            x++;
        }
        cout<<"Congratulations! The tiger is now dead."<<endl;
        cout<<"\nYou safely leave the forest now and must cross a bridge to continue on your journey."<<endl;
        cout<<"There stands a tall guardian blocking your way. As you approach he asks you a mathematical question"
                " in order to cross the bridge. He says you only have 10 seconds to answer the question."<<endl;
        cout<<"Hello. "<<name<<".\n What is "<<add1<<" + "<<add2<<" ?"<<endl;
        cin>>ans;
    }
    /*else if(rolldice==2)
        cout<<"This means you have quite a distance to travel."<<endl;
    else if(rolldice==3)
        cout<<"This means you have a 2 day trek ahead of you"<<endl;
    else if(rolldice==4)
        cout<<"This means you have a 1 day hike to travel."<<endl;
    else if(rolldice==5)
        cout<<"This means your adventure is but a horse's gallop away."<<endl;
    else if(rolldice==6)
        cout<<"This means you are close enough to the suspected dragon's lair, that a journey is not needed."<<endl;
    
    */
    return 0;
}