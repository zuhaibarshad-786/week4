#include<iostream>
using namespace std;
main(){

int number1,number2;
int add,multiply,subtract,divide;
char oper;
cout<<"enter first number:";
cin>>number1;
cout<<"enter second number:";
cin>>number2;
cout<<"enter operater (+,-,*,/):";
cin>>oper;


if(oper == '+')
{
add=number1+number2;
cout<<"sum is:"<<add<<endl;
 }

if(oper == '*')
{
multiply=(number1*number2);
cout<<"multiply is:"<<multiply<<endl;
 }


if(oper == '-')
{
subtract=(number1-number2);
cout<<"subtract is:"<<subtract<<endl;
 }



if(oper == '/')
{
divide=(number1/number2);
cout<<"divide is:"<<divide<<endl;
 }

   }