#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
bool runAgain(void);
char userResponse;

int main(){
    
float a,b,c;
cout<<"************Linear Equation Calculator**********"<<endl;

cout<<"\nFormat Example : ax + b = c"<<endl;

do{
cout<<"\n\n\nChoose a:"<<endl;
cin>>a;
cout<<"Choose a b :"<<endl;
cin>>b;
cout<<"Choose c:"<<endl;
cin>>c;


cout<<"Your Equation :"<<a<<"x";
if(b>=0){cout<<"+"<<b;
}else{cout<<"-"<<-b;
}cout<<" = "<<c<<endl;

cout<<"       Step #1: "<<a<<"x"<<" = "<<c-b<<endl;
cout<<"       Step #2: "<<" x = "<<(c-b)/a<<endl;
}while (runAgain());

return 0;
}

bool runAgain(void){
    char response;
    cout<<"\n\nWould you Like to run again y/n ?:";
    cin>>userResponse;
    cin.ignore();
    
    if(userResponse =='y' || userResponse =='Y')
    return(true);
    return (false);
}





