//example for program for print data in new line
#include<stdio.h>
#include<conio.h>
main()
{
char name[100],address[100];
int age;
float height;
clrscr();
printf("enter your name,age,address and height:");
scanf("%s%d%s%f",&name,&age,&address,&height);
printf("name:%s\nage:%d\naddress:%s\nheight=%f",name,age,address,height);
getch();
return 0;
}
