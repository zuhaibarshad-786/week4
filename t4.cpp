#include<iostream>
using namespace std;

void checkresult(int marks);


main(){

int marks;
cout<<"enter marks:";
cin>>marks;

checkresult(marks);


}

void checkresult(int marks){
if (marks >=50){cout<<"passed"<<endl;
}


if(marks<50){
cout<<"fail"<<endl;
}




}

