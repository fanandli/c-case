#include <stdio.h>
 
int main(void)
{
	int a, b, c;
	
	puts("let's draw a pyramid!");
	printf("How many layers does this pyramid have?");	scanf("%d",&a);
	
	for(b = 1; b <= a; b++){
		for (c = 0; c < a - b; c++)
			printf("+");
		for (c = 0; c < (2*b - 1); c++)
			printf("*");
		printf("\n");
	}
	
	return 0;
 } 
 //��ϰ4-24 
//��Ҫ�������еĹ���Ȼ������ѧ��ϵ����ʾ
// 
