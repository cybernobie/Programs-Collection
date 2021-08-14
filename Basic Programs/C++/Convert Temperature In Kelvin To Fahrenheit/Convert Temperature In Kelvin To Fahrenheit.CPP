#include<iostream.h>
#include<conio.h>
void main()
{
 float k; int f;
 int deg= 248;
 clrscr();
 cout<<"\tEnter Temperature In Kelvin :  ";
 cin>>k;
 f=k-273;    // Converting Kelvin
 f=(f*1.8)+32;  //    To Fahrenheit
 cout<<"\tTemperature In Fahrenheit :  "<<f<<char(deg)<<"F";    //


getch();
}