#include<iostream>
using namespace std;
void printname(string name);
main(){

string name;
while(true){
cout<<"enter your name:";
cin>>name;
printname(name);
}

}

void printname(string name){
cout<<"your name is:"<<name<<endl;
}