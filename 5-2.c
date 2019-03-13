#include <stdio.h>
int main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)
		a[i]=i+1;
	for(i=0;i<5;i++)
		printf("a[%d]=%d\n",i,a[i]);
	return 0;
 } 
 //练习5-2
 //从中可以看出，数组这里会经常使用for循环来处理数组
 //注意数组下标
  
