#include <stdio.h>
int main(){
	int n;
	int i;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n/5;i++) puts("*****");
	for(i=1;i<=n%5;i++) puts("*");
	return 0;
}
