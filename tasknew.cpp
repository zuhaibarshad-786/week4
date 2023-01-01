#include<iostream>
using namespace std;
void print(string day,int purchaseamount);
main(){

string day;
cout<<"enter day:";
cin>>day;
int purchaseamount;

cout<<"enter purchaseamount:";
cin>>purchaseamount;

print( day, purchaseamount);

}


void print(string day,int purchaseamount)
{

int discount;

if(day == "sunday")

{
discount=(purchaseamount*10)/100;
cout<<"Discount is:"<<discount<<endl;
cout<<"payable Amount is:"<<purchaseamount - discount<<endl;
}
else{
cout<<"payable amount is:"<<purchaseamount<<endl;
}


}