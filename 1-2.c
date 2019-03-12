#include <stdio.h>
int main(void){
	int n1,n2;
	puts("please enter two numbers:");
	printf("number1:"); scanf("%d",&n1);
	printf("number2:"); scanf("%d",&n2);
	printf("they are sum:%d.\n",n1+n2);
	return 0;
	
}
/*puts函数，puts("abc")就相当于scanf("abc\n");
*但是如果puts函数里有需要格式化输出的内容就不能这么用
*且没有转换说明功能，即转义字符无效等 
且只有一个实参 
*/
