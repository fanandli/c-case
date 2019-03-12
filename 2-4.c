#include <stdio.h>
int main(){
	int talln;
	puts("please enter your tall,i call tell you standard weight:");
	scanf("%d",&talln);
	printf("your standard weight is:%.1fkg.",(double)(talln-100)*0.9);
	return 0;
}
