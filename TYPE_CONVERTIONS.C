//type converssion
#include<stdio.h>
#include<conio.h>
main()
{
int a;
float b;
char c;
clrscr();
printf("enter an integer value:");
scanf("%d",&a);
printf("enter a float value:");
scanf("%f",&b);
printf("enter a character:");
scanf("%c",&c);
printf("\nfloat to integer=%d",(int)b);
printf("\ninteger to float=%f",(float)a);
printf("\ncharacter to integer=%d",c);
getch();
return 0;
}