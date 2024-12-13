#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double courseAverage(double hwscr,double tscr, double fscr);

int main()
{
    float hwscr, tscr, fscr;
    char letterGrade;
    char choice;
    
    do{
    
    cout<<"-------Grade Calulator-----------"<<endl;
    
    cout<<"\n\nHome work score: "<<endl;
    cin>>hwscr;
    cout<<"Test score: "<<endl;
    cin>>tscr;
    cout<<"Final score: "<<endl;
    cin>>fscr;
    double numbGrade=courseAverage(hwscr,tscr,fscr);
    cout<<"Course Average: "<<setprecision(2)<<numbGrade<< " or " ;
    
    if( numbGrade>89){
        cout<<"A"<<endl; 
        
    }
        if(numbGrade>79 && numbGrade<=89){
            cout<<"B"<<endl;
           
        }
        if(numbGrade>69 && numbGrade<=79){
            cout<<"C"<<endl;
           
        }
        if(numbGrade>59 && numbGrade<=69){
            cout<<"D"<<endl;
            
        }
        if(numbGrade<59){cout<<"F"<<endl;
       
        }
    
  

    
    cout<<"Do you want to check your grade again? (y/n): ";
    cin>>choice;
    
    }while (choice=='y'||choice=='Y');

    return (0);
}

double courseAverage(double hwscr, double tscr,double fscr){
    return( 0.15*hwscr + 0.52*tscr + 0.33*fscr );
}