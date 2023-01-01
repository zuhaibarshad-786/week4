#include <iostream>
using namespace std;
void print(string statement);
main()
{
int choice;
string statement;
cout<<"enter true or false:";
cin>>statement;
print(statement);

}


void print(string statement)
{

if(statement == "true")
{
cout<<"false"<<endl;
}

if(statement == "false")
{
cout<<"true"<<endl;
   }

  }