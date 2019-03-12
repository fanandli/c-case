#include <stdio.h>
int main()
{
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		printf("%d",b%10);
	}
	return 0;	
}
//练习4-14 
//使用数学的方法打印出需要的数字 
