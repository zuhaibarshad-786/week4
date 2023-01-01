#include<iostream>
using namespace std;
main(){

int holidays,workingdays;
int games;
int norm;
cout<<"enter holidays:";
cin>>holidays;
workingdays=365-holidays;
games=workingdays*63+20*127;
cout<<"working days is:"<<workingdays<<endl;
cout<<"time for games is:"<<games<<endl;
norm=30000-games;
cout<<"difference from the norm is:"<<norm<<endl;
cout<<"tom sleeps well:"<<norm<<endl;






}