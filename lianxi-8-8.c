#include<stdio.h>

int gcd(int x,int y)
{
	int temp;
	if(x<y)
	{
		temp=y;
		y=x;
		x=temp;
	}
	while(x%y)//շת���������ȡ�� 
	{
		y=x%y;
	}
	return y;//Ҫ��xΪ���ߣ�yΪ�̱�
	 
}
int main()
{
	int a,b;
	printf("��������������\n"); 
	scanf("%d %d",&a,&b);
	printf("�������������Ĺ�Լ���ǣ�\n"); 
	printf("%d",gcd(a,b));
	return 0;
} 

 
