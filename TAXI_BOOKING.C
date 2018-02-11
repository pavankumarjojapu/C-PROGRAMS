#include<stdio.h>
#include<string.h>
#include<conio.h>
char name[100],gmail[100],pwd[100],cpwd[100],sr[100],des[100],date[15];
unsigned long mb;
int km,rs,amt,ch;
main()
{
clrscr();
printf("***********welcome to taxi registration**********");
printf("\nenter your name:");
scanf("%s",name);
printf("enter your mobile number:");
scanf("%d",&mb);
printf("enter your mail id:");
scanf("%s",gmail);
printf("enter password:");
scanf("%s",pwd);
printf("confirm password:");
scanf("%s",cpwd);
while(strcmp(pwd,cpwd))
{
printf("mismatch of password and confirm password");
printf("\nenter the confirm password again");
scanf("%s",&cpwd);
}
printf("\nregistered sucessfully");
tmenu();
printf("\nenter source:");
scanf("%s",rs);
printf("enter destination:");
scanf("%s",des);
printf("enter the distance in kilometers:");
scanf("%d",&km);
printf("enter the booking date:");
scanf("%s",date);
if(ch==1)
amt=km*29;
else{
 if(ch==2)
amt=km*35;
}
display();
getch();
return 0;
}
int tmenu()
{
printf("tariff plan\n1.day time\n2.nyt time\n3.exit");
printf("\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("from morning 6 to evng 8(29 rupees for a kilometer)");
	break;
case 2:printf("from evng 8 to mng 6(35 rupees for a kilometer");
	break;
case 3:exit(0);
}
return ch;
}
display()
{
printf("\n---------------------booking details--------------------------");
printf("\nuser name:%s",name);
printf("\nmobile number:%d",mb);
printf("\nemail id:%s",gmail);
if(ch==1)
printf("\ntravel slot is day time");
else
{
if(ch==2)
printf("\ntravel slot is nyt time");
}
printf("\nfrom the source :%s",sr);
printf("\nto the desination :%s",des);
printf("\nnumber of kilometers is :%d",km);
printf("\ntotal amount to be paid is :%d",amt);
printf("\ndate :%s",date);
printf("\n\n\t\t thank u for using taxi");
return 0;
}