#include<stdio.h>
#include<conio.h>

void main()
{
int num;
int one,two,three,four,five,six,seven,eight,nine,ten;
		clrscr();
printf("Enter A Number: ");
scanf("%d",&num);
one=num*1;
two=num*2;
three=num*3;
four=num*4;
five=num*5;
six=num*6;
seven=num*7;
eight=num*8;
nine=num*9;
ten=num*10;
clrscr();
textcolor(GREEN);
printf("\n\t\t\t");cprintf("Table Of %d Was: ",num);printf("\n\n");
printf("\t%d X 1 = %d\n",num,one);
printf("\t%d X 2 = %d\n",num,two);
printf("\t%d X 3 = %d\n",num,three);
printf("\t%d X 4 = %d\n",num,four);
printf("\t%d X 5 = %d\n",num,five);
printf("\t%d X 6 = %d\n",num,six);
printf("\t%d X 7 = %d\n",num,seven);
printf("\t%d X 8 = %d\n",num,eight);
printf("\t%d X 9 = %d\n",num,nine);
printf("\t%d X 10 = %d\n",num,ten);

getch();
}