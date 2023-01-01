#include <iostream>
using namespace std;

void display(string name);

main(){
while(true){
string name;
cout<<" enter your name :";
cin>>name;
if(name == "irzam")
{
display(name);
}
}

}

void display(string name)
{

cout<<name<<endl;
}

