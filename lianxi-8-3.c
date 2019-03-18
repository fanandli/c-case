#include<stdio.h>
#define swap(int,a,b) int x;x=a;a=b;b=x;
int main(){
	int a,b;
	puts("请输入两个整数：");
	scanf("%d %d",&a,&b);
	puts("换过位置后：===="); 
	swap(int,a,b);
	printf("%d\n%d",a,b);
	return 0;
}
