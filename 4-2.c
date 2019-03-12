#include <stdio.h>
int main(){
	int n1,n2=1;
	printf("please enter a number:");
	scanf("%d",&n1);
	while(n1>=n2)
	{
		if(n2%2)
			printf("+");
		else
			printf("-");
		n2++;
	}
	return 0;
}
//交替显示+-，使打印出来的个数与输入的数字相同
//用两个变量和使用判断奇偶数的方法来实现

 
