#include<stdio.h>
#include<conio.h>

void main()
{
int a,i, f=1;
	   clrscr();
	   textattr(2);
cprintf("Enter The Number: ");
scanf("%d",&a);

for (i=1;i<=a;i++)
{
f=f*i;
}
 textattr(14);
cprintf("Factorial Of %d Is: %d",a,f);
getch();
}