#include<iostream>
using namespace std;

main()
 {
while(true)
  { 
int choice;
string countryname;
int ticketprice;
int finalprice;
int discount;

cout<<"enter your country name:";
cin>>countryname;
cout<<"enter ticket price in dollars:";
cin>>ticketprice;
  

if(countryname == "pakistan")
{
discount=(ticketprice*5)/100;
finalprice=(ticketprice-discount);
cout<<"discount price is:"<<discount<<endl;
cout<<"final price is:"<<finalprice<<endl;
  }
 
if(countryname == "ireland")
{
discount=(ticketprice*10)/100;
finalprice=(ticketprice-discount);
cout<<"discount price is:"<<discount<<endl;
cout<<"final price is:"<<finalprice<<endl;
  }

if(countryname == "india")
{
discount=(ticketprice*20)/100;
finalprice=(ticketprice-discount);
cout<<"discount price is:"<<discount<<endl;
cout<<"final price is:"<<finalprice<<endl;
  }

if(countryname == "england")
{
discount=(ticketprice*30)/100;
finalprice=(ticketprice-discount);
cout<<"discount price is:"<<discount<<endl;
cout<<"final price is:"<<finalprice<<endl;
  }

if(countryname == "canada")
{
discount=(ticketprice*45)/100;
finalprice=(ticketprice-discount);
cout<<"discount price is:"<<discount<<endl;
cout<<"final price is:"<<finalprice<<endl;
  }
   }
     }