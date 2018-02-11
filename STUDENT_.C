//student details
#include<stdio.h>
#include<conio.h>
void personal_details();
int academic_details();
void other_details();
void display();
int ch;
char name[100],mail[100],add[150],dob[10];
char phno[10];
char stuid[10];
int ssc,dip,two1,two2,three;
float agg,tagg;
char areaofinterest[100],hobby[100],techskills[100],nontechskills[100];
main()
{
clrscr();
printf("\nwelcome to student database");
while(1)
{
printf("\n1.enter details \n2.display\n3.exit");
printf("\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:personal_details();
	academic_details();
	other_details();
	break;
case 2:display();
break;
case 3:exit(0);
}
}
}
void personal_details()
{
printf("enter your name:");
scanf("%s",name);
printf("enter your date of birth:");
scanf("%s",dob);
printf("enter phone number:");
scanf("%s",phno);
printf("enter mail id:");
scanf("%s",mail);
printf("enter address:");
scanf("%s",add);
}
int academic_details()
{
printf("enter student id:");
scanf("%s",stuid);
printf("enter ssc precentage:");
scanf("%d",&ssc);
printf("enter dip percentage:");
scanf("%d",&dip);
printf("enter 2-1 percentage:");
scanf("%d",&two1);
printf("enter 2-2 percentage:");
scanf("%d",&two2);
printf("enter 3-1 percentage:");
scanf("%d",&three);
agg=(two1+two2+three)/3;
tagg=(agg+ssc+dip)/3;
return 0;
}
void other_details()
{
printf("enter area of interest:");
scanf("%s[^\n]",areaofinterest);
printf("enter hobies:");
scanf("%s",hobby);
printf("enter technical skills:");
scanf("%s",techskills);
printf("enter non technical skills:");
scanf("%s",nontechskills);
}
void display()
{
printf("\n the student details are:");
printf("\nname of the student:%s",name);
printf("\nmobile number:%s",phno);
printf("\ndate of birth:%s",dob);
printf("\nemail id:%s",mail);
printf("\naddress is:%s",add);
printf("\nthe aggregate percentage of U.G:%f",agg);
printf("\nthe aggregate of total academic:%f",tagg);
printf("\narea of interest:%s",areaofinterest);
printf("\nhobies:%s",hobby);
printf("\ntechnical skills:%s",techskills);
printf("\non technical skills:%s",nontechskills);
}