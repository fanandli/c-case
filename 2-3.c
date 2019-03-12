#include <stdio.h>
int main(){
	double n1;
	printf("please enter a float number:");
	scanf("%lf",&n1);
	printf("you enter number is :%f",n1);
	
}

//注意：定义一个浮点型变量要用double,在printf中对于浮点数的转义字符是%f.
//在scanf中对于浮点数的转义字符则是%lf
//sacnf中的&不要忘记 
