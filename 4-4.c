#include <stdio.h>
int main()
{
	int n1;
	
	do{
		printf("please enter a number:");
		scanf("%d",&n1); 
		if(n1<=0)
			puts("please enter a + number");
	}while(n1<=0);
	printf("this number is reverse:");
	while(n1>0)
	{
		printf("%d",n1%10);
		n1/=10;
	}
	return 0;
	
} 
//�����嵥4=-10
//��Ҫ������ѧ֪ʶҪ֪������Ȼ��֪�����ʵ�֣�Ȼ����Ǵ������������
 
