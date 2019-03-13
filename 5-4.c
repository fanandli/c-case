#include <stdio.h>
#define NUMBER 5
int main()
{
	int i;
	int tensu[NUMBER];
	int max,min;
	printf("please enter student's score:\n");
	for(i=0;i<NUMBER;i++)
	{
		printf("%2dºÅ:",i+1);
		scanf("%d",&tensu[i]);
		
		
	}
	min=max=tensu[0];
	for(i=1;i<NUMBER;i++){
		if(max<tensu[i])
			max=tensu[i];
		if(min>tensu[i])
			min=tensu[i];
	}
	
	printf("max score:%5d\n",max);
	printf("min score:%5d\n",min);
	
	return 0;
}

//´úÂëÇåµ¥5-11
 
