//#include<stdio.h>
//
//void put_stars(int n)
//{
//	while(n-->0)
//		putchar('*');
//}
//
//int main()
//{
//	int i,len;
//	printf("trangle:\n");
//	printf("min:");
//	scanf("%d",&len);
//	for(i=1;i<=len;i++){
//		put_stars(i);
//		putchar('\n'); 
//	}	
//	return 0;
//}


//˼·Ҫ��΢ע��һ��
//�����嵥6-7
 
#include<stdio.h>
void put_char(int ch,int n)
{
	while(n-->0)
		putchar(ch);
}

int main()
{
	int i,len;
	printf("display a trangle:\n");
	printf("min:");
	scanf("%d",&len);
	for(i=1;i<=len;i++)
	{
		put_char(' ',len-i);
		put_char('*',i);
		putchar('\n');
	}
	return 0;
}










