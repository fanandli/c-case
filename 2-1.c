#include <stdio.h>
int main(void){
	int n1;
	int n2;
	puts("please enter two numbers:");
	printf("the number a:"); scanf("%d",&n1);
	printf("the number b:"); scanf("%d",&n2);
	
	printf("a is %lf%% b.",(double)n1/n2*100);
	return 0;
} 
//����Ҫע��double�ͺ�%lf��ʹ�� 
//��ϰ2-1 
