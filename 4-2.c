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
//������ʾ+-��ʹ��ӡ�����ĸ����������������ͬ
//������������ʹ���ж���ż���ķ�����ʵ��

 
