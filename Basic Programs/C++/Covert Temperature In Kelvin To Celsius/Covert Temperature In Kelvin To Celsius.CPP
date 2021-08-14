#include<iostream.h>
#include<conio.h>
void main()
{
 float k; int c;
 int deg= 248;
 clrscr();
 cout<<"\tEnter Temp. In Kelvin :  ";
 cin>>k;
 c=k-273.15;    // Converting Kelvin
		//    To Celsius
 cout<<"\tTemperature In Celsius :  "<<c<<char(deg)<<"C";    //


getch();
}