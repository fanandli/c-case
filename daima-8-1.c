#include <stdio.h>

int sar_int(int n)
{
	return n*n;
 } 
 double sar_double(double m)
 {
 	return m*m;
 }
 
 int main(){
 	int n;
 	double m;
 	printf("请输入一个整数：");
 	scanf("%d",&n);
 	
 	printf("这个数的平方是：%d\n",sar_int(n));
 	printf("请输入一个浮点数：");
 	scanf("%lf",&m);
 	
 	printf("这个的平方是:%f\n",sar_double(m));
 	return 0;
 }
 
