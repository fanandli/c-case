#include<stdio.h>
int scan_pint(void)
{
	int n;
	do{
		printf("������һ����������");
		scanf("%d",&n);
		if(n<=0)
			printf("�벻Ҫ�������������");
	}while(n<=0);
	return n; 
 } 
 
 int rev_int(int m){
 	int n=0;
 	if(m>0){
 		do{//����Ҫ���һ�� 
 			n=n*10+m%10;
 			m/=10;
		}while(m>0);
	 }
	 return n; 
 }
 
 int main(void){
 	int nx=scan_pint();
 	printf("��ת���ֵ��%d\n",rev_int(nx));
 	return 0;
 }
 //�����嵥6-9
 //�����ѧ�ϵķ���Ҫ��΢���һ��
  
