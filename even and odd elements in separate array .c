//C program to input elements in array and put even and odd elements in separate array Input
#include<stdio.h>
void main()
{
	int a[100],e[100],o[100],n,i;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the elements : ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	
	e[i]=0;o[i]=0;
    }
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		e[i]=a[i];
		else
		o[i]=a[i];
	}
	printf("\nEven no.s are :\n");
	for(i=0;i<n;i++)
	{
		if(e[i]!=0)
	printf("%d\t",e[i]);
    }
	printf("\nOdd no.s are :\n");
	for(i=0;i<n;i++)
	{
		if(o[i]!=0)
	printf("%d\t",o[i]);
    }
	
}
