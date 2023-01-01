#include<iostream>
using namespace std;

void printname(string name,int marks,int grade,int aggregate );

main(){

string name;
char grade;
int aggregate;
cout<<"enter your name:"<<endl;
cin>>name;
int marks;
cout<<"enter your marks:"<<endl;
cin>>marks;
cout<<"enter your grade:"<<endl;
cin>>grade;
cout<<"enter your aggregate:"<<endl;
cin>>aggregate;
printname("zohaib",marks,grade,aggregate);
}

void printname(string name,int marks,int grade,int aggregate){

cout<<"your name is:"<<name<<endl;
cout<<"your marks is:"<<marks<<endl;
cout<<"your grade is:"<<grade<<endl;
cout<<"your aggregate is:"<<aggregate<<endl;

}

