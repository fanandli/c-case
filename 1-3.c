#include <stdio.h>
int main(void){
	int no;
	printf("please a number:");
	scanf("%d",&no);
	printf("this number's last number:%d",no%10);
	return 0;
} 
//取一个整数的最后一位数字的数学操作是通过取余来获得 
