#include<iostream>
using namespace std;

void maximum(int number1,int number2);
void isequal(int number1,int number2);
void minimum(int number1,int number2);

main(){

 
int choice;
int number1;
int number2;
cout<<"enter number1:";
cin>>number1;
cout<<"enter number2:";
cin>>number2;

  
 maximum( number1, number2);
 isequal( number1, number2);
 minimum( number1, number2);


}
void maximum(int number1,int number2)
 {
if(number1 > number2)
   {
   cout<<"number1 is greater"<<endl;
    }
  }

void isequal(int number1,int number2)
  {
if(number2 > number1)
   {
  cout<<"number2 is greater"<<endl;
    }
  } 
void minimum(int number1,int number2)
 {
if(number1 == number2)
   {
  cout<<"both numbers are equal"<<endl;
    }
  }






