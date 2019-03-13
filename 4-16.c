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
 //练习4-24 
//需要发现其中的规律然后用数学关系来表示
// 
