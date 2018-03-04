//larger and smaller values among three values
#include<stdio.h>
main()
{
	int a,b,c,small,large;
	printf("emter any three vlues:");
	scanf("%d%d%d",&a,&b,&c);
	small=(a<b)?(a<c?a:c):(b<c?b:c);
	large=(a>b)?(a>c?a:c):(b>c?b:c);
	printf(" the larger value is %d and the smaller value is %d",large,small);
}
