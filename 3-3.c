#include <stdio.h>
int main(){
	int n1,n2,n3;
	puts("please enter three number:");
	printf("number one:"); scanf("%d",&n1);
	printf("number two:"); scanf("%d",&n2);
	printf("number three:"); scanf("%d",&n3);
	if(n1==n2&&n2==n3)//注意这里不能写成n1&&n2&&n3 
		printf("they all same");
	else if(n1!=n2 && n2!=n3 && n3!=n1){
		printf("they are different");
	} 
	else
		printf("two same");
	return 0;
} 
//练习3-10 
