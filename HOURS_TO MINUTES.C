//program for convert hours into minutes
#include<stdio.h>
#include<conio.h>
main()
{
int h,m,tm;
clrscr();
printf("enter hours:");
scanf("%d",&h);
printf("enter minutes:");
scanf("%d",&m);
tm=(h*60)+m;
printf("the given %d hours and %d minutes is totally in minutes :%d",h,m,tm);
getch();
return 0;
}