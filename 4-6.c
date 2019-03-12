#include <stdio.h>
int main()
{
	printf("i can tell you any sum:");
	int n,sum,i;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		sum+=i;
	}
	printf("this sum are:%d",sum);
	return 0;
}
