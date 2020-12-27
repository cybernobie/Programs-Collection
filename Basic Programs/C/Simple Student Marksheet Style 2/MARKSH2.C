#include<stdio.h>
#include<conio.h>
void main()
{
int maxsub=5;
int sub1,sub2,sub3,sub4,sub5,maxmarks=100,tmax=maxsub*100;
int marksobt;
clrscr();
printf("\n\t\t\t\tSTUDENT MARKSHEET");
printf("\n\n\t\t\tStudent Name: Aryan Singh Negi");
printf("\n\t\t\tSudent Roll No.: 21");
printf("\n\n\t\tSubjects\t\tMax. Marks\tMarks Obt.\n");
printf("\t\tPhysics\t\t\t%d\t\t",maxmarks);
 scanf("%d",&sub1);
printf("\t\tChemistry\t\t%d\t\t",maxmarks);
 scanf("%d",&sub2);
 printf("\t\tMaths\t\t\t%d\t\t",maxmarks);
 scanf("%d",&sub3);
 printf("\t\tEnglish\t\t\t%d\t\t",maxmarks);
 scanf("%d",&sub4);
 printf("\t\tComputer Science\t%d\t\t",maxmarks);
 scanf("%d",&sub5);
 marksobt=sub1+sub2+sub3+sub4+sub5;
 int pect=marksobt/5;
 printf("\n\t\t\tTOTAL:\t\t%d\t\t%d",tmax,marksobt);
 printf("\n\n\t\t\tPERCENT: %d%",pect);

getch();
}