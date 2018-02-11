//count number of words in astring
#include<stdio.h>
#include<conio.h>
#define max 1000
main()
{
char string[max];
int i=0,words=1;
clrscr();
printf("enter a string:");
gets(string);
while(string[i]!='\0')
{
if(string[i]==' '||string[i]=='\n'||string[i]=='\t')
{
words++;
}
i++;
}
printf("the number of words in the given string are %d",words);
getch();
return 0;
}