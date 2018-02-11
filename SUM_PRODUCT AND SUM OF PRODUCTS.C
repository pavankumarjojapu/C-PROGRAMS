//sum,product and sum of squares for two numbers
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a,b;//decalration of variables
clrscr();
printf("enter a,b values:");
scanf("%d%d",&a,&b);
printf("\nthe sum of a and b is: %d",(a+b));
//sum of two numbers
printf("\nthe product  of a and b is: %d",(a*b));
//product of two numbers
printf("\nthe sum of squares of a and b is: %d",a*a+b*b);
//sum of squares of two numbers
getch();
return 0;
}
