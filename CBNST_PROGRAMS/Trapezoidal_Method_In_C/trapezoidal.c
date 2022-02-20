#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#include<string.h>

#define f(x) 1/(1+x)
void main()
{
float a,b,h,j,integration=0.0;
int i,n;
clrscr();
printf("\nEnter The Range");
printf("\nLower Limit (a): ");
scanf("%f",&a);
printf("\nUpper Limit (b): ");
scanf("%f",&b);
printf("\nEnter Number Of Interval : ");
scanf("%d",&n);
h=( b - a )/n;
integration=f(a)+f(b);
for(i=1;i<n;i++)
{
 j=a+i*h;
 integration=integration + 2 * f(j);
}

integration=integration * h/2;
printf("\nValue Of Integration is : %.3f",integration);
printf("\nPress Any Key To Exit!");
getch();
}
