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
//	printf("请输入数组的元素的个数:\n");
//	scanf("%d",&n);
//	
//	printf("请输入数组的各元素的值：\n");
//	for(i=0;i<n;i++){
//		scanf("%d",&v[i]);
//	}
//	rev_intary(v,n);
//	puts("请输入各元素的值。");
//	for(i=0;i<n;i++)
//	{
//		printf("%d",v[i]);
//	}
//	return 0; 
//}

/*---创建一个函数，对元素个数为n的int型数组v进行倒序排列。---*/
 
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
	
	printf("请输入数组的元素个数:");
	scanf("%d",&n);
	
	printf("请输入数组各元素的值。");
	for(i = 0; i < n; i++){
		scanf("%d",&v[i]);
	}
	
	rev_intary(v, n);
	
	puts("输入数组各元素的值。");
	for(i = 0; i < n; i++){
		printf("%d ",v[i]);
	} 
	
	return 0;
}

//有bug 
