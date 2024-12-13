#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

void printStrings(const vector<string> &arg);

string randomString(const vector<string>& arg);

int main(){
    
 vector<string> userStrings;
 string end;
 
 cout<<"********Populate the vector with colors below********** ";
 cout<<"\n(Enter \"Stop\" to quit populating the vector)";
 cout<<"\n---------------------------------------------------"<<endl;
 
 while (true){
     cin>>end;
 if(end =="stop"||end=="Stop"){
     break;
 }
 userStrings.push_back(end);
}

printStrings(userStrings);

srand(static_cast<unsigned int>(time(nullptr)));

string random = randomString(userStrings);

if(random.empty()){
    cout<< "No strings in vector"<<endl;
    }else{
    cout<<"\nStrings in vector: "<<random<<endl;
    }
    return 0;
}



void printStrings(const vector<string> &arg){
    cout<<"\nThe Elements in the vector:  "<<endl;
    for (const auto& elements:arg){
        cout<<elements<<endl;
    }
}

string randomString(const vector<string>& arg){
    if(arg.empty()){
        return"No elements in vector ";
    }
    int index = rand()%arg.size();
    return arg[index];
}





