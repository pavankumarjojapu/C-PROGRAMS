//convert minutes into hours
#include<stdio.h>
#include<conio.h>
main()
{
int m,h,hm;
clrscr();
printf("enter total minutes:");
scanf("%d",&m);
h=m/60;
hm=m%60;
printf("the total minutes %d is equal to the %d hours and %d minutes",m,h,hm);
getch();
return 0;
}