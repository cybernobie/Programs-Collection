#include<stdio.h>
#include<conio.h>

void main()
{
int a,b;
clrscr();
printf("Enter First Number: ");
scanf("%d",&a);
printf("Enter Second Number: ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\nValue After Swap of First No.=%d and Second No.=%d",a,b);
getch();
}