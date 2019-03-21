#include <stdio.h>

int factorial(int n)
{
	int i,end=1;
	if(n>0)
	{
		for(i=n;i>0;i--)
			end*=i;	
	}
	else
		return 1;
}
int main()
{
	int num;
	printf("请输入一个整数：");
	scanf("%d",&num);
	printf("该整数的阶乘为:%d\n",factorial(num));
	return 0;
}
