#include <stdio.h>
void put_chars(int ch,int n)
{
	while(n-->0)
		putchar(ch);
}



int main(void){
	int i,len;
	printf("����һ�����������Σ�\n");
	printf("�̱ߣ�");
	scanf("%d",&len);
	for(i=1;i<=len;i++)
	{
		put_chars(' ',len-i);
		put_chars('*',i);
		putchar('\n');
	}
} 
//�����嵥6-8
//����Ҫ�ҵ�
 
