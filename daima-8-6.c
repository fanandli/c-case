#include<stdio.h>

int factorial(int n){
	if(n>0)
		return n*factorial(n-1);
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
