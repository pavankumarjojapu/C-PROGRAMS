//arithenetic operations
#include<stdio.h>
#include<conio.h>
int *a,*b,ch,choice,p,q;
void add();
void sub();
void mul();
void div();
void mod();
main()
{
clrscr();
printf("enter a,b values:");
scanf("%d%d",&p,&q);
a=&p;
b=&q;
do
{
printf("\n**********arithemetic operations*********");
printf("\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.modulus\n6.exit");
printf("\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:add();
	break;
case 2:sub();
	break;
case 3:mul();
	break;
case 4:div();
	break;
case 5:mod();
	break;
case 6:exit(0);
}
printf("\ndo u want to perform any other operations press 1:");
scanf("%d",&choice);
}while(choice==1);
return 0;
}
void add()
{
printf("addition of %d and %d id:%d",p,q,(*a)+(*b));
}
void sub()
{
printf("subtraction of %d and %d id:%d",p,q,(*a)-(*b));
}
void mul()
{
printf("multiplication of %d and %d id:%d",p,q,(*a)*(*b));
}
void div()
{
printf("division of %d and %d id:%d",p,q,(*a)/(*b));
}
void mod()
{
printf("modulus of %d and %d id:%d",p,q,(*a%*b));
}
