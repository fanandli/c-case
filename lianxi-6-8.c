#include <stdio.h>
int min_of(const int v[],int n)
{
	int i;
	int min=v[0];
	for(i=0;i<n;i++)
	{
		if(v[i]<min)
			min=v[i];
	}
	return min;
}

int main(){
	int minx;
	int v[]={2,3,423,45,65,7675};
	minx=min_of(v,6);
	printf("%d",minx);
	return 0;
	
}
