#include <cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
bool runAgain();
int main()
{

do{
float a,b,c,equation;


cout<<"Choose an A integer :"<<endl;
cin>>a;

cout<< "Choose a B integer: "<<endl;
cin>>b;

cout<<"Choose a C integer :"<<endl;
cin>>c;

float discriminant=b*b-4*a*c;
float root1,root2 ;

cout<<"--------------------------"<<endl;
cout<<"\nEquation = " <<a<<"x"<<"^2  + "<< b<<"x"<<"+ "<<c<<endl;


if (discriminant>0){
    float root1= -b+sqrt(b-4*a*c);
    float root2= -b-sqrt(b-4*a*c);
    cout<<fixed<<setprecision(4);
    cout<<"Roots are real numbers = "<<endl;
    cout<<"Root 1 x=" <<root1<<endl;
    cout<<"Root 2 x="<<root2 <<endl;
}else if(discriminant==0){
   root1=-b/(2*a);
   cout<<fixed<<setprecision(4);
   cout<<"One real root: "<<endl;
   cout<<"Root x= "<< root1<<endl;
}else if (discriminant<0){
    cout<<fixed<<setprecision (4);
    cout<<"2 Complex Numbers : "<<endl;
    cout<<"Root 1 x= "<<-b/(2*a)<<"+"<<sqrt(-discriminant)/(2*a)<<"i"<<endl;
    cout<<"Root 2 x=" <<-b/(2*a)<< "-"<<sqrt(-discriminant)/(2*a)<<"i"<<endl;
    
}

}while (runAgain());

    return 0;
}

bool runAgain(){
    char response;
    cout<<"Want to run again (y/n): ";
    cin>>response;
    return(response=='Y'|| response=='y');
}
    