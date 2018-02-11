//print the grade of a person
#include<stdio.h>
#include<conio.h>
int mod,m;
char c;
modifier()
{
mod=m%10;
if(mod>=1&&mod<=3)
c='-';
else if(mod>=4&&mod<=7)
c=' ';
else
c='+';
return c;
}
main()
{
clrscr();
printf("enter marks:");
scanf("%d",&m);

if(m>=0&&m<=60)
{
printf("grade F");
}
else if(m>=61&&m<=70)
{
modifier();
printf("grade D%c",c);
}
else if(m>=71&&m<=80)
{
modifier();
printf("grade C%c",c);
}
else if(m>=81&&m<=90)
{
modifier();
printf("grade B%c",c);
}
else
{
modifier();
printf("grade A%c",c);
}
getch();
return 0;
}