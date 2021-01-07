#include<stdio.h>
#include<conio.h>
void main()
{
char vowel;
printf("Enter Any Char: ");
scanf("%c",&vowel);
if (vowel=='a'||vowel=='A'||vowel=='e'||vowel=='E'||vowel=='i'||vowel=='I'||vowel=='o'||vowel=='O'||vowel=='u'||vowel=='U')
{
printf("%c Is a Vowel.",vowel);
}
else
{
printf("%c Is Not a Vowel",vowel);
}
getch();
}
