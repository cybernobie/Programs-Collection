#include<stdio.h>
#include<conio.h>

void main()

{
int a,b,c;
clrscr();
printf("Enter First Number: ");
scanf("%d",&a);

printf("Enter Second Number: ");
scanf("%d",&b);

c=a;
a=b;
b=c;
printf("\nAfter Swap First No.= %d and Second No.= %d",a,b);
							   getch();
}
