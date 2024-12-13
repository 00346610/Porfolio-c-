#include <cmath>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int rollDie(void){
return (1+rand()%6);
   int sum;}



int main()
{
    
int rolls =50000;
 srand(time(0));  
int sum;
const int size =13;
int a[size];

for( int i=0; i<size; i++){
    a[i]=0;
}

for(int i=0; i<rolls; i++){
  sum=rollDie()+rollDie();
  a[sum]++;
}
///////print out
for(int i=0; i<size; i++){
    cout<<"Sum "<< i <<" =prob "<<a[i]
   << "\tprobability" <<"= " << 1.0*a[i]/rolls<<endl;
}


    return (0);
}
