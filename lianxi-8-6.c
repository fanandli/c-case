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
	printf("������һ��������");
	scanf("%d",&num);
	printf("�������Ľ׳�Ϊ:%d\n",factorial(num));
	return 0;
}
