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
	puts("��������������");
	printf("����1��");	scanf("%d",&a);
	printf("����2��");	scanf("%d",&b);
	
	swap(&a,&b);
	puts("������Ϊ��");
	printf("����1��%d\n",a);	
	printf("����2��%d",b);
	return 0;
}
