// C code to answer inquiries about student data. 
#include<stdio.h>
void main()
{
	int a[100][100],i,j,c=5,r,op,id,min,max,n;
	printf("Enter no. of students");
	scanf("%d",&r);
	printf("Enter the student details in the format of id quiz1 quiz2 mid final : \n");
	for(i=0;i<r;i++)
	{
		printf("Enter student details :\n");
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
	}
	while(1)
	{
	printf("\nSelect the option Menu :\n1.View all students’ records\n2. View a student’s records by ID \n3. Show the highest and the lowest final scores \n4.Quit\n ");
	scanf("%d",&op);
	switch(op)
	{
		case 1:printf("\nStudent Details are :\n");printf("\n=============================================");
			printf("\n|StuID\t|Quiz1\t|Quiz2\t|Mid\t|Final\n");
			printf("=============================================\n");
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				printf("|%d\t",a[i][j]);
				printf("\n");
			}
			break;
		case 2:printf("Enter Students ID : ");
			scanf("%d",&id);n=0;
			for(i=0;i<r;i++)
			{	
			if(id==a[i][0])
			{
				n=1;
				printf("\n=============================================");
			    printf("\n|StuID\t|Quiz1\t|Quiz2\t|Mid\t|Final\n");
			    printf("=============================================\n");
				for(j=0;j<c;j++)
				printf("|%d\t",a[i][j]);
				printf("\n");
			}
		    }
		    if(n==0) printf("\nInvalid Student ID\n");
		    break;
		    case 3:	min=max=a[0][4];
				for(i=0,j=c-1;i<r;i++)
	            {	
	    		if(min>a[i][j])
				min=a[i][j];
				else if(max<a[i][j])
				max=a[i][j];
				}
				printf("\nLowest score : %d\nHeighest score : %d\n",min,max);
				break;
			case 4:printf("\n*** Thank you ***\n");
			exit(0);
			default :printf("\nChoose the correct option\n");	
		    
	}
}
	
}

