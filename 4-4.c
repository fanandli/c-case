#include <stdio.h>
int main()
{
	int n1;
	
	do{
		printf("please enter a number:");
		scanf("%d",&n1); 
		if(n1<=0)
			puts("please enter a + number");
	}while(n1<=0);
	printf("this number is reverse:");
	while(n1>0)
	{
		printf("%d",n1%10);
		n1/=10;
	}
	return 0;
	
} 
//代码清单4=-10
//主要就是数学知识要知道，不然不知道如何实现，然后就是代码能力的提高
 
