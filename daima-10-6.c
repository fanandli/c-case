#include <stdio.h>

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int a,b;
	puts("请输入两个整数");
	printf("整数1：");	scanf("%d",&a);
	printf("整数2：");	scanf("%d",&b);
	
	swap(&a,&b);
	puts("互换后为：");
	printf("整数1：%d\n",a);	
	printf("整数2：%d",b);
	return 0;
}
