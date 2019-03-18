#include<stdio.h>
int scan_pint(void)
{
	int n;
	do{
		printf("请输入一个正整数：");
		scanf("%d",&n);
		if(n<=0)
			printf("请不要输入非正整数。");
	}while(n<=0);
	return n; 
 } 
 
 int rev_int(int m){
 	int n=0;
 	if(m>0){
 		do{//这里要理解一下 
 			n=n*10+m%10;
 			m/=10;
		}while(m>0);
	 }
	 return n; 
 }
 
 int main(void){
 	int nx=scan_pint();
 	printf("倒转后的值是%d\n",rev_int(nx));
 	return 0;
 }
 //代码清单6-9
 //这个数学上的方法要稍微理解一下
  
