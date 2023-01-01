#include <iostream>
using namespace std;
main()
{
int choice;
float redrose;
float whiterose;
float tulips;
float totalprice;
float discount;
float payableamount;

cout<<"enter no of red roses:";
cin>>redrose;
cout<<"enter no of white roses:";
cin>>whiterose;
cout<<"enter no of tulips:";
cin>>tulips;

totalprice=(redrose*2.00)+(whiterose*4.10)+(tulips*2.50);
cout<<"total price is:"<<totalprice<<endl;

if(totalprice > 200)
  {
discount = (totalprice*20)/100;
payableamount=totalprice-discount;
cout<<"origional price is:"<<totalprice<<endl;
cout<<"payable amount after discount is:"<<payableamount<<endl;
    }


}