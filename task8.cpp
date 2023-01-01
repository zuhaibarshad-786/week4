#include<iostream>
using namespace std;

void display(int num1,int num2);

main()
  {
int num1,num2;
cout<<"enter first integer:";
cin>>num1;
cout<<"enter second integer:";
cin>>num2;
display( num1, num2);


  }



void display(int num1,int num2)
  {
if(num1 == num2)
{
cout<<"both integers are equal"<<endl; 
cout<<"true"<<endl;
 }

else {
cout<<"integers are not equal"<<endl;
cout<<"false"<<endl;
  }


 }