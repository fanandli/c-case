#include <stdio.h>
int main (){
	int i,j;
	int width,height;
	printf("let's draw a pitcure!\n");
	puts("enter width:"); scanf("%d",&width);
	puts("enter height:"); scanf("%d",&height);
	
	for(i=1;i<=height;i++){
		for(j=1;j<=width;j++){
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}
