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
	while(x%y)//辗转相除法就是取余 
	{
		y=x%y;
	}
	return y;//要让x为长边，y为短边
	 
}
int main()
{
	int a,b;
	printf("请输入两个数：\n"); 
	scanf("%d %d",&a,&b);
	printf("这两个数的最大的公约数是：\n"); 
	printf("%d",gcd(a,b));
	return 0;
} 

 
