#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	//1.正逆向打印数字：正向输出1~5，反向输出5~1
	for (int i = 1; i <= 5; i++) printf("%d\n",i);
	for (int i = 5; i >= 1; i--) printf("%d\n",i);
	
	//2.累加求和：求1+2+3+4+5
	int a = 0;                               //d
	for (int i = 1; i <= 5; i++) a += i;
	printf("%d\n", a);
	
	//3.求偶数和：求1~100间所有偶数的和
	int b = 0;
	for (int i = 0; i <= 100 ; i=i+2) b += i;
	printf("%d\n", b);
	
	int c = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) c += i;	}

	//4.统计满足条件的数字：录入两个数字，统计两数之间能同时被6和8整除的数有多少个
	int d,e,f=0;
	scanf("%d %d", &d, &e);
	int min = d > e ? e : d, max = d > e ? d : e;
	for (int i =min; i <=max; i++) { if (i % 24 == 0) f++; }
	printf("%d", f);
	return 0;
}