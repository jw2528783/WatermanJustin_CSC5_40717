/* 
 * File:   main.cpp
 * Author: Justin
 *
 * Created on January 30, 2015, 9:59 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
int main(int argc, char** argv) {
    short chchoic,weapchoic,homechoic,rolldice,dodge,kill,lifepts;
    unsigned int add1,add2,ans1,ans2,ans3,ans4,ans5,ans6,ans7,begTime,endTime,totTime,wake;
    string name,message,roll;
    srand(time(0));
    rolldice=rand()%6+1;
    add1=rand()%100;
    add2=rand()%100;
    cout<<"Welcome to my game!"<<endl;
    cout<<"Let's begin by creating your character."<<endl;
    cout<<"What is your character's name?"<<endl;
    getline(cin,name);
    cout<<"Welcome "<<name<<". "<<"What would you like to be?\n1. A Warrior\n2. A Mage\n3. A Thief\n"
            "4. An Archer\n"<<endl;
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
    cout<<"1. Caverns\n2. Small Village\n3. Castle\n4. Swamp\n5. Forest\n"
            "6. You have no home. You wander aimlessly around the world."<<endl;
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
    cout<<" them to see where your journey will begin.\nYou also have 5 Lifepoints. If damaged in combat"
            "or attack or wounded, you will lose a lifepoint.\nIf you reach 0 Lifepoints, then"
            "GAME OVER\nThe smaller the number you roll, the further you";
    lifepts=5;
    cout<<" must travel to find the dragon.\nInput 'roll' to roll your dice."<<endl;
    getline(cin,roll);
    cout<<"You roll a "<<rolldice<<endl;
    if(rolldice<7){
        cout<<"This means you have a long journey ahead of you."<<endl;
        cout<<"You begin traveling through a dark forest. On your travels, you come across a tiger. It looks hungry.\n"
                "You take out your weapon and ready yourself."<<endl;
        cout<<"The tiger then begins to speak!\nIt asks 'What is "<<add1<<" + "<<add2<<" ?'"<<endl;
        cin>>ans1;
        cout<<ans1<<endl;
        if(ans1==add1+add2)
            cout<<"'You may pass through.'"<<endl;
        else if(ans1!=add1+add2){
            cout<<"'Incorrect. Prepare to die!'"<<endl;
            begTime=static_cast<unsigned int>(time(0));
            cout<<"The tiger lunges at you.\nTo dodge, press 1. Quickly!"<<endl;
            
            cin>>dodge;
            endTime=static_cast<unsigned int>(time(0));
            totTime=5;
            if(totTime>endTime-begTime){
                begTime=(time(0));
                cout<<"You dodged the tiger! Quickly, kill it with your weapon!\nInput kill."<<endl;
                
                cin>>kill;
                endTime=(time(0));
                if(totTime>endTime-begTime)
                    cout<<"The tiger is dead! You can now move along on your journey."<<endl;
            }
            else{
                cout<<"Too slow! The tiger bites you and takes away one of you life points."<<endl;
                cout<<"You manage you kill it while it is biting you. And you carry on with your"
                        "journey, but with one less life point."<<endl;
                lifepts=lifepts-1;
                cout<<"You currently have "<<lifepts<<" lifepoints remaining."<<endl;
            }
        }
        srand(time(0));
        cout<<"\nYou safely leave the forest now and must cross a bridge to continue on your journey."<<endl;
        cout<<"There stands a tall guardian blocking your way. As you approach he asks you a question"
                " in order to cross the bridge. He says you only have 5 seconds to answer the question."<<endl;
        cout<<"He asks 'are you ready?'"<<endl;
        
        cin>>ans2;
        cout<<ans2<<endl;
        begTime=(time(0));
        cout<<"Hello "<<name<<".\n What is "<<add1<<" + "<<add2<<" ?"<<endl;
        
        cin>>ans3;
        cout<<ans3<<endl;
        endTime=(time(0));
        totTime=5;
        if(totTime>begTime-endTime){
            if(ans3==add1+add2)
                cout<<"'Correct. You may pass the bridge.'"<<endl;
            else{
                cout<<"'Incorrect. You may NOT cross the bridge. You may have one more chance to answer a question "
                        "correctly or must seek another way around the bridge, which will cost you a lifepoint for the "
                        "extra amount of time it will take.'\nInput 1 to try again or 2 to give up a lifepoint and"
                        "find another way around."<<endl;
                
                cin>>ans4;
                if(ans4==1){
                    begTime=(time(0));
                    cout<<"'Your second and final chance.\nWhat is "<<add1<<" + "<<add2<<" ?"<<endl;
                    
                    cin>>ans5;
                    endTime=(time(0));
                    if(totTime>endTime-begTime){
                        if(ans5==add1+add2)
                            cout<<"'Correct. You may pass the bridge.'"<<endl;
                        else{
                            cout<<"'Incorrect. You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                            lifepts=lifepts-1;
                            cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                        }
                    }
                }
                else{
                    cout<<"'You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                            lifepts=lifepts-1;
                            cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                }
            }
        }
        else{
            cout<<"You took too long to answer my questions."<<endl;
            cout<<"'Incorrect. You may NOT cross the bridge. You may have one more chance to answer a question "
                        "correctly or must seek another way around the bridge, which will cost you a lifepoint for the "
                        "extra amount of time it will take.'\nInput 1 to try again or 2 to give up a lifepoint and"
                        "find another way around."<<endl;
                
                cin>>ans6;
                if(ans6==1){
                    begTime=(time(0));
                    cout<<"'Your second and final chance.\nWhat is "<<add1<<" + "<<add2<<" ?"<<endl;
                    
                    cin>>ans7;
                    endTime=(time(0));
                    if(totTime>endTime-begTime){
                        if(ans7==add1+add2)
                            cout<<"'Correct. You may pass the bridge.'"<<endl;
                        else{
                            cout<<"'Incorrect. You must find another way around the bridge and you lose 1 lifepoint.'"<<endl;
                            lifepts=lifepts-1;
                            cout<<"[Current lifepoints "<<lifepts<<" ]"<<endl;
                        }
                    }
                }
        }
    }
    return 0;
}

