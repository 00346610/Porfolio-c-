#include <iostream>
#include <cmath>
#include <iomanip>
#include<string>
using namespace std;


template <class T1, class T2,class T3>
struct streetFighter{
    int weight,reach,age;
    string name,lastName;
    double result;
    
};


template <class T1, class T2,class T3>
void printFighterStats(streetFighter<T1,T2,T3>arg);

template <class T1, class T2,class T3>
void fightOutcome(streetFighter<T1,T2,T3>player1,streetFighter<T1,T2,T3>player2);




int main(void){
cout<<"------------------------Street Fighter------------------------------"<<endl;
    
    
    
    
    streetFighter<int,string,double>player1;
    streetFighter<int,string,double>player2;
    
    cout<<"\n\nPick your Fighter!!!!\a\a"<<endl;
    
    cout<<"\nFirst Name: ";
    cin>>player1.name;
    
    cout<<"Last Name:  ";
    cin>>player1.lastName;
    
    cout<<"Weight: ";
    cin>>player1.weight;
    
    cout<<"Reach: ";
    cin>>player1.reach;
    
   
     cout<<"\n\nYour Oponent:";
     
     
    cout<<"\nFirst Name: ";
    cin>>player2.name;
    
    cout<<"Last Name: ";
    cin>>player2.lastName;
    
    cout<<"Weight: ";
    cin>>player2.weight;
    
    cout<<"Reach: ";
    cin>>player2.reach;
    
    
    cout<<"\n\n------------------Fighter Stats---------------------"<<endl;
    
     printFighterStats(player1);
    cout<<"\n\nVS"<<endl;
    printFighterStats(player2);
    
    cout<<"\n\n----------------OUTCOME------------"<<endl;
    
    fightOutcome(player2,player1);
    
    return 0;
}

template <class T1, class T2,class T3>
void printFighterStats(streetFighter<T1,T2,T3>arg){
    
    cout<<"\n\nName: "<<arg.name<<endl;
    cout<<"Last Name: "<<arg.lastName<<endl;
    cout<<"Weight: "<<arg.weight<<endl;
    cout<<"Reach: "<<arg.reach<<endl;

    
}

template <class T1, class T2,class T3>
void  fightOutcome(streetFighter<T1 ,T2 , T3>player1,streetFighter<T1,T2,T3>player2){

 int fighter1Stats = player1.weight + player1.reach - player1.age;
int fighter2Stats = player2.weight + player2.reach - player2.age;



  if(player1.reach>player2.reach){
        fighter1Stats+=400;
    }
    if(player2.weight>player1.weight){
        fighter2Stats+=400;
    }if(player1.age<player2.age){
        fighter1Stats+=300;
    }if(player1.age>player2.age){
        fighter2Stats+=300;
    }
    
    
    if(fighter2Stats > fighter1Stats){
        cout<<"\a\nWinner: "<<player2.name<<" "<<player2.lastName<<" Power Level is greater at:  " <<fighter2Stats<<endl;
        cout<<player1.name<<player2.lastName<< " got Knocked the Fuck out!!!"<<endl;
    }else{
        cout<<"\a\nWinner: "<<player1.name<<" "<<player1.lastName<<" Power Level is greater at: " <<fighter1Stats<<endl;
        cout<<player2.name<<" "<<player2.lastName<<" got Knocked the Fuck out!!!"<<endl;
    }
}









