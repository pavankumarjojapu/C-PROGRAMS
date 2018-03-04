// C program to find the max of an integral data set
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[100],n,i,*mx;
	printf("Enter the number of data values : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the value %d :",i);
		scanf("%d",&a[i]);
	}
	printf("Print 0  ");
		mx=max(a[100],n);
	printf("The maximum number is %d :",*mx);
	
}
int max(int a[100],int n)
{
	int *ptr=malloc(sizeof *ptr),i;
	printf("000000000000000");
	*ptr=a[1];
printf("\nPrint 1 %d ",*ptr);
	for(i=1;i<=n;i++)
	{
	   if(*ptr<a[i])
	   ptr=&a[i];
	   printf("\nPrint 2 %d ",*ptr);
	}
	printf("Print 3 %d ",*ptr);
	return ptr;
}

