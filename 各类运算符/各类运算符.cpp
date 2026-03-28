#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	//Ⅰ、赋值运算符：=，+=，-=，*=，/=，%=，&=，|=，^=，<<=，>>=
	
	//Ⅱ、Ⅴ关系运算符：==，!=(不等于)，>，<，>=，<=，***true→1，false→0***
	int a;
	scanf("%d", &a);
	if (a % 2 == 0) printf("偶数\n");
	else printf("奇数\n");
	
	int b;
	scanf("%d", &b);
	printf("%d", b <= 100);
	
	/* Ⅲ、逻辑运算符： && (且，真 && 真 → 1，其他所有情况 → 0), || (或), !(非，取反)
	       ! > && > ||，! 右结合，&& 和 || 左结合
	       注意短路效应*/
	int c;
	scanf("%d", &c);
	if ((c >= 10) && (c <= 99)) 
	{printf("%d", (c % 10 != 7) && (c / 10 != 7) && (c % 7 != 0));}
	
	//Ⅳ、三元运算符：    关系式 ？表达式1 ：表达式2 ；
	int a, b, c;
	scanf("%d%d", &a, &b);
	printf("%d", a > b ? a : b);         //等价于max(a,b);
	printf("%d", (a > b ? a : b) > c ? (a > b ? a : b) : c);//等价于max(a,b,c);
	
	int a = 5;
	printf("%d",( a + 2, ++a, a * 6));
	
	
	
	
	
	return 0;
}