#include<stdio.h>
#define NUMBER 5
int max_of(int v[],int n)
{
	int i;
	int max=v[0];
	for(i=1;i<n;i++)
		if(v[i]>max)
			max=v[i];
	return max;
}

int main(void){
	int i;
	int eng[NUMBER];
	int mat[NUMBER];
	int max_e,max_m;
	printf("������%d��ѧ���ķ�����\n",NUMBER);
	for(i=0;i<NUMBER;i++){
		printf("[%d]Ӣ�",i+1);	scanf("%d",&eng[i]);
		printf("   ��ѧ��");		scanf("%d",&mat[i]);
		
	} 
	max_e=max_of(eng,NUMBER);
	max_m=max_of(mat,NUMBER);//���������ʱ��ֱ��д�������Ϳ��ԣ�����Ҫ��[] 
	printf("top english:%d\n",max_e);
	printf("top maths:%d\n",max_m);
	return 0;
	
}
