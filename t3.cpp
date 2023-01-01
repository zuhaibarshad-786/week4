#include<iostream>
using namespace std;

void pass(int marks);
void fail(int marks);

main(){

int marks;
cout<<"enter marks:";
cin>>marks;

pass(marks);
fail(marks);

}

void pass(int marks){
if (marks >=50){cout<<"passed"<<endl;
}
}
void fail(int marks){
if(marks<50){
cout<<"fail"<<endl;
}




}

