#include <stdio.h>
int main()
{
	int a;
	int i;
	printf("please enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		printf("%d ",i*i);	 
	}
	return 0;
}

