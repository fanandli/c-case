#include <stdio.h>
void put_chars(int ch,int n)
{
	while(n-->0)
		putchar(ch);
}



int main(void){
	int i,len;
	printf("生成一个等腰三角形：\n");
	printf("短边：");
	scanf("%d",&len);
	for(i=1;i<=len;i++)
	{
		put_chars(' ',len-i);
		put_chars('*',i);
		putchar('\n');
	}
} 
//代码清单6-8
//规律要找到
 
