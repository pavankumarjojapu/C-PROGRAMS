//print time
#include<stdio.h>
#include<conio.h>
main()
{
int h,m,s;
clrscr();
a:printf("enter a valid time :");
scanf("%d%d%d",&h,&m,&s);
if(h>=0&&h<=23&&m>=0&&m<=59&&s>=0&&s<=59)
printf("%d:%d:%d",h,m,s);
else
{
printf("invalid format\n");
goto a;
}
getch();
return 0;
}
