// program that will prompt the user to input ten integer values. The program will display the smallest and greatest of those values. It also displays the value that occur the most.
#include<stdio.h>
main()
{
	int i,j,a[100],occ[100],n,min,max,most,count,ocr;
	printf("Enter the no. of values : ");
	scanf("%d",&n);
	printf("Enter the values :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	min=max=a[0];most=0;
	for(i=0;i<n;i++)
	{	
	    if(min>a[i])
		min=a[i];
		else if(max<a[i])
		max=a[i];
    }	
	printf("\nSmallest element : %d\nLargest element : %d\n",min,max);
	for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                occ[j] = 0;
            }
        }
        if(occ[i] != 0)
        {
            occ[i] = count;
        }
    }
	 for(i=0; i<n; i++)
    {
        if(occ[i] > most)
        {
            most = occ[i];
            ocr=a[i];
        }
       
    }
    	
    printf("\nThe most occuring element is %d, it occurs %d times in array",ocr,most);

}
