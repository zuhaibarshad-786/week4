#include<iostream>
using namespace std;
void printMenu();
void calculateAggregate(string,int,int,int);
void compareMarks(string,int,string,int);


void printMenu(){
cout<<"**********************************************"<<endl;
cout<<"*  UNIVERSITY ADMISSION MANAGEMENT SYSTEM    *"<<endl;
cout<<"**********************************************"<<endl;
}
void calculateAggregate(string name,int matricMarks,int interMarks,int ecatMarks)
{

float aggregate;
cout<<"enter name:";
cin>>name;
cout<<"enter matric marks:";
cin>>matricMarks;
cout<<"enter inter marks:";
cin>>interMarks;
cout<<"enter ecat marks:";
cin>>ecatMarks;

aggregate=(matricMarks*30)/1100+(interMarks*30)/550+(ecatMarks*40)/400;
cout<<"aggregate:"<<aggregate<<endl;
}
void compareMarks(string,int,string,int)
{





}

 
main(){

string name;
int matricMarks;
int interMarks;
int ecatMarks;
printMenu();
calculateAggregate(name,matricMarks,interMarks,ecatMarks);


}