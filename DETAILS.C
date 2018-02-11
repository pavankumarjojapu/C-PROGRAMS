#include<stdio.h>
#include<conio.h>
void details(char[],char[]);
main()
{
char name[100],add[100];
clrscr();
printf("enter user name:");
scanf("%s",name);
printf("enter address:");
scanf("%s",add);
details(name,add);
getch();
return 0;
}
void details(char name[],char add[])
{
printf("\n\nuser name is:%s",name);
printf("\naddress is:%s",add);
}