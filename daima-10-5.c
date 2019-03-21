#include <stdio.h>

void sum_diff(int n1,int n2,int *sum,int *diff)
{
	*sum=n1+n2;
	*diff=(n1>n2)?n1-n2:n2-n1;
}

int main()
{
	int na,nb;
	int wa,sa=0;
	puts("请输入两个整数");
	printf("整数1：");	scanf("%d",&na);
	printf("整数2：");	scanf("%d",&nb);
	sum_diff(na,nb,&wa,&sa);
	printf("两个数之和是%d,两个数之差是%d\n",wa,sa);
	return 0;
}
