#include<stdio.h>
#define swap(int,a,b) int x;x=a;a=b;b=x;
int main(){
	int a,b;
	puts("����������������");
	scanf("%d %d",&a,&b);
	puts("����λ�ú�===="); 
	swap(int,a,b);
	printf("%d\n%d",a,b);
	return 0;
}
