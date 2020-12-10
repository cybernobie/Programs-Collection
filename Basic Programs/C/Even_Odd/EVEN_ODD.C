#include<stdio.h>
#include<conio.h>

void main()
{
 int num;
 clrscr();
 printf("Enter Any Number: ");
 scanf("%d",&num);

 if(num%2==0)
 {
  printf("%d was even",num);
 }
 else
 {
 printf("%d was odd",num);
 }
 getch();
}