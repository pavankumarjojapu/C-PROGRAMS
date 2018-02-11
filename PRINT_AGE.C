//print age grater 18 lessthan 30
#include<stdio.h>
#include<conio.h>
main()
{
int age;
clrscr();
a:printf("enter your age:");
scanf("%d",&age);
if(age>=18&&age<=30)
goto a;
else
printf("invalid age");
getch();
return 0;
}