//#include<stdio.h>
//void rev_intary(int v[],int n)
//{
//	int i=0;
//	int j=n-1;
//	int num=0;
//	for(i=0;i<n/2;i++){
//		num=v[i];
//		v[i]=v[j-i];
//		v[j-i]=num;
//	}
//}
//
//int main()
//{
//	int n,v[n],i;
//	printf("�����������Ԫ�صĸ���:\n");
//	scanf("%d",&n);
//	
//	printf("����������ĸ�Ԫ�ص�ֵ��\n");
//	for(i=0;i<n;i++){
//		scanf("%d",&v[i]);
//	}
//	rev_intary(v,n);
//	puts("�������Ԫ�ص�ֵ��");
//	for(i=0;i<n;i++)
//	{
//		printf("%d",v[i]);
//	}
//	return 0; 
//}

/*---����һ����������Ԫ�ظ���Ϊn��int������v���е������С�---*/
 
#include <stdio.h>
 
void rev_intary(int v[], int n){
	int temp, i;
	
	for(i = 0;i < n/2; i++){
		temp = v[i];
		v[i] = v[n-i-1];
		v[n-i-1] = temp;
	}
} 
 
int main(void)
{
	int n, v[n], i;
	
	printf("�����������Ԫ�ظ���:");
	scanf("%d",&n);
	
	printf("�����������Ԫ�ص�ֵ��");
	for(i = 0; i < n; i++){
		scanf("%d",&v[i]);
	}
	
	rev_intary(v, n);
	
	puts("���������Ԫ�ص�ֵ��");
	for(i = 0; i < n; i++){
		printf("%d ",v[i]);
	} 
	
	return 0;
}

//��bug 
