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
 	printf("������һ��������");
 	scanf("%d",&n);
 	
 	printf("�������ƽ���ǣ�%d\n",sar_int(n));
 	printf("������һ����������");
 	scanf("%lf",&m);
 	
 	printf("�����ƽ����:%f\n",sar_double(m));
 	return 0;
 }
 
