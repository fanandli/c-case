#include <stdio.h>
int main()
{
	int n1,n2,i,max,min,j;
	printf("enter a number:");
	scanf("%d",&n1);
	printf("enter another number:");
	scanf("%d",&n2);
	if(n1>n2)
	{
		max=n1;
		min=n2;
	}else
	{
		max=n2;
		min=n1;
	}
	for(i=1;i<=min;i++)
	{
		for(j=1;j<=max;j++)
			printf("*");
		printf("\n");
	}
	
		
		
} 
