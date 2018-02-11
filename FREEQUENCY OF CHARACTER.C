//freequency of a character in given string
#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
char str[100];
int i,j,count;
clrscr();
printf("enter a string:");
gets(str);
for(i=0;str[i]!='\0';i++)
{
count=0;
for(j=0;str[j]!='\0';j++)
{
if(str[j]==str[i])
{
count++;
}
}
printf("%c : %d\n",str[i],count);
}
getch();
return 0;
}