#include <iostream>
#include <string>
using namespace std;
struct studentInfo{
string name;
string lastName;
string school;
double gpa;
};
void printStudent(studentInfo arg);
void capitalize(Student& arg); 

int main()
{
cout<<"-------------Student Lab--------------" ;

const int sNum=3;
for (int i=0; i<sNum; i++ ){
 
studentInfo student;
cout<<"\n\n****Student #"<<i+1<<"****"<<endl;
cout<<"\nName: ";
cin>>student.name;
cout<<"\nLast name: ";
cin>>student.lastName;
cout<<"\nSchool: ";
cin>>student.school;
cout<<"\nWhats you current GPA: ";
cin>>student.gpa;
cout<<"\n\n*******STUDENT #"<<i+1<<" STATS"<<"******"<<endl;  
printStudent(student);
}

return 0;


}
void printStudent(studentInfo arg){
cout<<"\n\nFirst Name: "<<arg.name<<endl;
cout<<"Last Name: "<<arg.lastName<<endl;
cout<<"School: "<<arg.school<<endl;
cout<<"Current GPA: "<<arg.gpa<<endl;
}

void capitalize(Student& arg); {
    
}





