
#include<stdio.h>
#include<conio.h>
int main()
{
char pwd[20];
char uname[20];
char c=' ';
int i=0;
clrscr();
printf("\nenter username\t:");
gets(uname);
printf("\nenter the password\t:");
while (i<=9)
{
pwd[i]=getch();
c=pwd[i];
if(c==13) break;
else printf("*");
i++;
}
pwd[i]='\0';
i=0;
printf("\nusername : %s",uname);
printf("\npassword : %s",pwd);
getch();
return 0;
}
