//weekly pay salary of an employee
#include<stdio.h>
#include<conio.h>
main()
{
int h,s;
clrscr();
printf("enter how many hours employee can work in a day:");
scanf("%d",&h);
printf("enter the salary pay for an hour:");
scanf("%d",&s);
s=s*h*7;
printf("weekly salary of an employee is %d",s);
getch();
return 0;
}