#include<iostream>
using namespace std;
void iseligible(int age);

main(){
while(true){

int age;
cout<<"enter age:";
cin>>age;
iseligible(age);}
}

void iseligible(int age){

if (age >= 18){cout<<"person is eligible to vote"<<endl;
}

if(age < 18){cout<<"you are not eligible"<<endl;}



}



