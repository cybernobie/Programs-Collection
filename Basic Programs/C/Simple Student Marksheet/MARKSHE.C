#include<stdio.h>
#include<conio.h>
void main()
{
int sub1,sub2,sub3,sub4,sub5;
int maxmarks=100;
float tmaxmarks=500;
int totalmarksobt;
float percent;
clrscr();
printf("Enter Physics Marks Here: ");
scanf("%d",&sub1);
printf("Enter Chemistry Marks Here: ");
scanf("%d",&sub2);
printf("Enter Maths Marks Here: ");
scanf("%d",&sub3);
printf("Enter English Marks Here: ");
scanf("%d",&sub4);
printf("Enter Computer Science Marks Here: ");
scanf("%d",&sub5);
totalmarksobt=sub1+sub2+sub3+sub4+sub5;
clrscr();
textattr(2);
printf("\n\t\t\t\t");cprintf("STUDENT MARKSHEET");
textattr(6);
printf("\n\n\tStudent Name: ");cprintf("Aryan Singh Negi");
printf("\n\n\tStudent Roll No.: ");cprintf("521337\n");
printf("\nSubjects\t\tMarks Obtained\t\tMax. Marks");
printf("\nPhysics\t\t\t%d\t\t\t%d",sub1,maxmarks);
printf("\nChemistry\t\t%d\t\t\t%d",sub2,maxmarks);
printf("\nMaths\t\t\t%d\t\t\t%d",sub3,maxmarks);
printf("\nEnglish\t\t\t%d\t\t\t%d",sub4,maxmarks);
printf("\nComputer Science\t%d\t\t\t%d",sub5,maxmarks);
printf("\n\t");cprintf("TOTAL:");textattr(3);printf("\t\t");cprintf("%d",totalmarksobt);printf("\t\t\t%f",tmaxmarks);
percent=(totalmarksobt/tmaxmarks)*100;
printf("\n\tPercentage:\t");cprintf("%f%",percent);
getch();
}