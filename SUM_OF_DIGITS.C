//sum of digits
#include<stdio.h>
#include<conio.h>
main()
{
int n,x,sum=0;
clrscr();
printf("enter any number:");
scanf("%d",&n);
printf("the sum of the given number %d is:",n);
while(n>0)
{
x=n%10;
sum=sum+x;
n=n/10;
}
printf("%d",sum);
getch();
return 0;
}