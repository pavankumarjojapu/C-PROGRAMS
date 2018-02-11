//convert days to year,weeks and days
#include<stdio.h>
#include<conio.h>
main()
{
int year,weeks,days;
clrscr();
printf("enter number of days:");
scanf("%d",&days);
year=(days/365);
weeks=(days%365)/7;
days=days-((year*365)+(weeks*7));
printf("the given days are equal to the %d years %d weeks %d days",year,weeks,days);
getch();
return 0;
}