#include <stdio.h>
int main(){
	int n1,n2,n3,max;
	puts("please enter three number:");
	printf("number one:"); scanf("%d",&n1);
	printf("number two:"); scanf("%d",&n2);
	printf("number three:"); scanf("%d",&n3);
	max=n1;
	if(max<n2) max=n2;
	if(max<n3) max=n3;
	printf("the max number is:%d",max);
	return 0;	
} 
//输出三个数的最大值，代码清单3-13 
