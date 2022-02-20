#include<stdio.h>
#include<conio.h>
#include<math.h>

/* Define function here */
#define f(x) 1/(1+x)

int main()
{
 float a, b, integration=0.0, h, k;
 int i, n;
 clrscr();
 printf("Enter Lower limit of integration: ");
 scanf("%f", &a);
 printf("Enter Upper limit of integration: ");
 scanf("%f", &b);
 printf("Enter number of sub intervals: ");
 scanf("%d", &n);

 /* Calculation */
 /* Finding step size */
 h = (b - a)/n;

 /* Finding Integration Value */
 integration = f(a) + f(b);
 for(i=1; i<= n-1; i++)
 {
  k = a + i*h;
  if(i%2==0)
  {
   integration = integration + 2 * f(k);
  }
  else
  {
   integration = integration + 4 * f(k);
  }
 }
 integration = integration * h/3;
 printf("\nRequired value of integration is: %.3f", integration);
 getch();
 return 0;
}
