//ATM transactions
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
unsigned long amt=500,withdraw,deposit;
char ch;
int pin,choice;
clrscr();
while(pin!=1625)
{
printf("\nenter your pin number:");
scanf("%d",&pin);
if(pin!=1625)
printf("\ninvalid pin number");
}
do
{
printf("\nATM menu\n1.balance checking\n2.cash withdraw\n3.deposit\n4.exit");
printf("\nenter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("your current balance is %lu",amt);
	break;
case 2:printf("enter amount you want to withdraw:");
	scanf("%lu",&withdraw);
	if(amt<withdraw)
	printf("insufficient amount");
	else if(withdraw%100!=0)
	printf("please enter amount which is multiple of 100");
	else
	{
	amt=amt-withdraw;
	printf("please collect the cash\n");
	printf("your current balance is %lu",amt);
	}
	break;
case 3:printf("enter amount you want to deposit:");
	scanf("%lu",&deposit);
	if(deposit%100!=0)
	printf("please enter amount which is multiple of 100");
	else{
	amt=amt+deposit;
	printf("money added to your account suceessfully\n");
	printf("your current balance is %lu",amt);
	}break;
case 4:exit(0);
	break;
}
	printf("\ndo you want to perform any operations(y/n);");
scanf("%s",&ch);
}while(ch=='y'||ch=='Y');
getch();
return 0;
}
