#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
void print();


main()
{
system("cls");


print();

cout<<"W"<<endl;

print();

cout<<"I"<<endl;

cout<<"s"<<endl;

   }

void gotoxy(int x,int y)

{
 
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

  }

void print(){
cout<<"A"<<endl;

      }

  
