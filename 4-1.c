#include<stdio.h>
int main(void){
	int n1,n2,min,max,sum=0;
	puts("please enter two int:");
	printf("one:"); scanf("%d",&n1);
	printf("two:"); scanf("%d",&n2);
	(n1>n2)? (max=n1)&&(min=n2):(max=n2)&&(min=n1);
	
	do {
		sum+=min;
	}while(min++!=max);
	
	(n1>n2)? (max=n1)&&(min=n2):(max=n2)&&(min=n1);
	printf(">=%d and <=%d's number sum: %d.",min,max,sum);
	return 0;
	
	
} 
