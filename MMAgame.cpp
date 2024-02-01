#include <string>
#include <vector>
#include <iostream>
using namespace std;

template<class  T1, class T2>
struct fighter1{
    
    T1 base,name,lastName;
    T2 w,l,powa,defense,ko,wrestling;
};

template<class  T1, class T2>
struct fighter2{
    
    T1 base,name,lastName;
    T2 w,l,powa,defense,ko,wrestling;
};


template<class T1,class T2>
void printFighterStats(fighter1<T1, T2> arg);
template<class T1,class T2>
void printFighterStats(fighter2<T1, T2> arg);

template<class T1,class T2>
void fightOutcome(fighter2<T1,T2>fighter2,fighter1<T1,T2>fighter1);


int main()
{
    
    cout<<"----------------------------IT'S TIME!!!!!!!!!!!!!!!!!  FIght Night---------------------------------------------------"<<endl;
    
    
    fighter1<string,int> player1;
    fighter2<string,int>player2;
    
    cout<<"\n\nFighter #1:"<<endl;
            cout<<"\nName:";
            cin>>player1.name;
            cout<<"Last Name: ";
            cin>>player1.lastName;
            cout<<"Base: ";
            cin>>player1.base;
            cout<<"Wins: ";
            cin>>player1.w;
            cout<<"Loses: ";
            cin>>player1.l;
            cout<<"KO powa (1-1000):";
            cin>>player1.ko;
            cout<<"Wrestling (1-1000): ";
            cin>>player1.wrestling;
    
    cout<<"\nFighter#2: "<<endl;
            cout<<"\nName:";
            cin>>player2.name;
            cout<<"Last Name: ";
            cin>>player2.lastName;
            cout<<"Base: ";
            cin>>player2.base;
            cout<<"Wins: ";
            cin>>player2.w;
            cout<<"Loses: ";
            cin>>player2.l;
            cout<<"KO powa (1-1000):";
            cin>>player2.ko;
            cout<<"Wrestling (1-1000): ";
            cin>>player2.wrestling;
    
    
    
    printFighterStats(player1);
    
    cout<<"\n--------------vs-------------"<<endl;
    
    cout<<"Tail of the tape"<<endl;
    printFighterStats(player2);
    
   
   
   cout<<"\n\n-----------------------Final Result-------------------------"<<endl;
   fightOutcome(player2,player1);
    
    
    
    
    

    return 0;
}

template<class T1,class T2>
void printFighterStats(fighter1<T1, T2> arg){
    cout<<"\nName:"<<arg.name<<endl;
    cout<<"Last Name:"<<arg.lastName<<endl;
    cout<<"Base: "<<arg.base<<endl;
    cout<<"Wins: "<<arg.w<<endl;
    cout<<"Loses: "<<arg.l<<endl;
    cout<<"KO ability: "<<arg.ko<<endl;
    cout<<"Wrestling Ability: "<<arg.wrestling<<endl;
    
}

template<class T1,class T2>
void printFighterStats(fighter2<T1, T2> arg){
    cout<<"\nName:"<<arg.name<<endl;
    cout<<"Last Name:"<<arg.lastName<<endl;
    cout<<"Base: "<<arg.base<<endl;
    cout<<"Wins: "<<arg.w<<endl;
    cout<<"Loses: "<<arg.l<<endl;
    cout<<"KO ability (1-400): "<<arg.ko<<endl;
    cout<<"Wrestling Ability: "<<arg.wrestling<<endl;
    
}


template<class T1,class T2>
void fightOutcome(fighter2<T1,T2>fighter2,fighter1<T1,T2>fighter1){
    
    int fighter1Stats=fighter1.ko+fighter1.wrestling;
    int fighter2Stats=fighter2.ko+fighter2.wrestling;
    
    
    if(fighter1.w>fighter1.l){
        fighter1Stats+400;
    }if(fighter2.w>fighter2.l){
        fighter2Stats+400;
    }
    
    
    if(fighter2Stats > fighter1Stats){
        cout<<"\a\nWinner: "<<fighter2.name<<" "<<fighter2.lastName<<" Power Level:" <<fighter2Stats<<endl;
        cout<<fighter1.name<< " got Knocked the Fuck out!!!"<<endl;
    }else{
        cout<<"\a\nWinner: "<<fighter1.name<<" "<<fighter1.lastName<<" Power Level:" <<fighter1Stats<<endl;
        cout<<fighter2.name<<" got Knocked the Fuck out!!!"<<endl;
    }
}


