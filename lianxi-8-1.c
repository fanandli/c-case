#include <stdio.h>

#define diff(x,y) ((x>y)?(x-y):(y-x))
int main()
{
	int x,y;
	printf("����������:");
	scanf("%d %d",&x,&y);

	printf("������ֵĲ��ǣ�%d",diff(x,y));
	return 0;
}
 
