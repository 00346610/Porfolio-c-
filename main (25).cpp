#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
 
 
   
    int main(void){
    
    cout<<"---------------BMI CalCulator-------------"<<endl;
    
    float ft,weight, in,BMI;
    
    
    cout<<"Weight in lbs"<<endl;
    cin>>weight;
    
    cout<<"Feet= ";
    cin>>ft;
    
    cout<<"Inches= ";
    cin>>in;
    
    
    float calheight=pow ((ft*12)+in,2);
    float bmi=((weight*703)/calheight);
    cout<<"BMI="<<setprecision(2)<<bmi<<endl;

    
    if(bmi<18){
        cout<<"Underweight"<<endl;
    }else if(bmi>=18 && bmi<25){
        cout<<"Healthy Weight :) "<<endl;
    }else if  (bmi>=25 && bmi<30){
        cout<<"Overweight:("<<endl;
    }else{ cout<<"Fat!!!!!"<<endl;
    }
        
    


    return 0;
}






