#include <stdio.h>
#define sqr(x) ((x)*(x))
int main()
{
	int n;
	double x;
	printf("������һ������:");
	scanf("%d",&n);
	printf("�������ƽ���ǣ�%d\n",sqr(n));
	printf("������һ��������:");
	scanf("%lf",&x);
	printf("�������ƽ���ǣ�%f",sqr(x));
	return 0;
}
