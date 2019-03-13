#include <stdio.h>
int main()
{
	int i;
	int tensu[5];
	int sum=0;//notice
	printf("please enter student's score:\n");
	for(i=0;i<5;i++)
	{
		printf("%2d号:",i+1);
		scanf("%d",&tensu[i]);
		sum+=tensu[i];
		
	}
	printf("sum:%5d\n",sum);
	printf("average score:%5.1f\n",(double)sum/5);
	return 0;
}
//使用数组后的操作更加的方便
//代码清单5-9
 
