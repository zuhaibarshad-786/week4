#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int, int);
void printmaze();
void playermove(int x,int y);


main()
{

printmaze();
int x = 8;
int y = 8;
playermove(x,y);
  }


void gotoxy(int x,int y)

 {
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);

  }
void playermove(int x,int y)
{
gotoxy(x,y);
cout<<"p";


}
  
void printmaze()
{
cout<<"############################# "<<endl;
cout<<"#                           # "<<endl;
cout<<"#                           # "<<endl;
cout<<"#                           # "<<endl;
cout<<"#                           # "<<endl;
cout<<"#                           # "<<endl;
cout<<"#                           # "<<endl;
cout<<"#                           # "<<endl;
cout<<"#                           # "<<endl;
cout<<"#                           # "<<endl;
cout<<"#                           # "<<endl;
cout<<"#                           # "<<endl;
cout<<"#                           # "<<endl;
cout<<"#                           # "<<endl;
cout<<"#                           # "<<endl;
cout<<"############################# "<<endl;
}