#include <stdio.h>

#define diff(x,y) ((x>y)?(x-y):(y-x))
int main()
{
	int x,y;
	printf("请输入数字:");
	scanf("%d %d",&x,&y);

	printf("这个数字的差是：%d",diff(x,y));
	return 0;
}
 
