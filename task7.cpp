#include<iostream>
using namespace std;
main()
 {
while(true){
 
string day;
int discount;
int totalpurchaseamount; 
cout<<"enter day:";
cin>>day;
cout<<"enter total purchase amount:";
cin>>totalpurchaseamount;
if(day == "sunday")
{
discount=(totalpurchaseamount*10)/100;
}
else{
 discount=(totalpurchaseamount*5)/100;
}
  cout<<"payableamount is:"<<totalpurchaseamount-discount<<endl;
  cout<<"discount is :"<<discount<<endl;
}
  }