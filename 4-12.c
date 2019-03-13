#include <stdio.h>
int main()
{
	int retry;
	int n1,i;
	do{
		do{
		printf("please enter a number:");
		scanf("%d",&n1);
		if(n1<=0)
			printf("error");			
	}while(n1<=0);
	
	for(i=1;i<=n1;i++)
		putchar('*');
	putchar('\n');
	printf("continue?\n");
	printf("Yes----0;No------9");
	scanf("%d",&retry);	
		
	}while(retry==0);
	return 0;

} 
