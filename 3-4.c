#include <stdio.h>
int main(){
	int n1,n2;
	puts("please enter two number:");
	printf("number one:"); scanf("%d",&n1);
	printf("number two:"); scanf("%d",&n2);
	if((n1-n2)>0&&(n1-n2)<=10)
		printf("difference less than 10");
	else if((n1-n2)>0&&(n1-n2)>10)
		printf("difference more than 10");
	else if((n1-n2)<0&&(n2-n1)<=10)
		printf("difference less than 10");
	else if((n1-n2)<0&&(n2-n1)>10)
		printf("difference more than 10");
	
	return 0;
} 
