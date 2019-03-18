#include <stdio.h>
#define sqr(x) ((x)*(x))
int main()
{
	int n;
	double x;
	printf("请输入一个整数:");
	scanf("%d",&n);
	printf("这个数的平方是：%d\n",sqr(n));
	printf("请输入一个浮点数:");
	scanf("%lf",&x);
	printf("这个数的平方是：%f",sqr(x));
	return 0;
}
