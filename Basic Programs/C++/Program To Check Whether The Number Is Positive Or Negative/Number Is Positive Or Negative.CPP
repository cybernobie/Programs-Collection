#include<iostream.h>
#include<conio.h>
 void main()
 {
int num;
clrscr();
cout<<"Enter A Number: ";
cin>>num;

if(num>0)
cout<<num<<" is Positive.";
else if(num<0)
cout<<num<<" is Negative.";
else
cout<<num<<" is Zero.";
getch();
 }