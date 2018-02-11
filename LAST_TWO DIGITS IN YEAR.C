//extracting last two digits of given year
#include<stdio.h>
#include<conio.h>
main()
{
int y;
clrscr();
printf("enter any year:");
scanf("%d",&y);
y=y%100;
printf("the last two digits of given year is %2d",y);
getch();
return 0;
}