#include<stdio.h>
#define NUMBER 5
int tensu[NUMBER];
int top(void);

int main(void){
	int i;
	printf("������%d��ѧ���ķ���\n",NUMBER);
	for(i=0;i<NUMBER;i++){
		printf("%d:",i+1);
		scanf("%d",&tensu[i]);
	}
	printf("top scores=%d\n",top());
	return 0;
}

int top(void){
	int i;
	int max=tensu[0];
	for(i=1;i<NUMBER;i++)
		if(tensu[i]>max)
			max=tensu[i];
	return max;
}

