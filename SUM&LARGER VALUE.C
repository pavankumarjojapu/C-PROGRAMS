//sum of n numbers and large number
#include<stdio.h>
#include<conio.h>
main()
{
int x,i,n,add=0,h=0;
clrscr();
printf("enter no of values:");
scanf("%d",&n);
printf("enter any %d values:",n);
for(i=0;i<n;i++)
{
scanf("%d",&x);
add=add+x;
if(x>h)
{
h=x;
}
}
printf("addition of given %d numbers is %d",n,add);
printf("\nlarger value among the %d values is %d",n,h);
getch();
return 0;
}
