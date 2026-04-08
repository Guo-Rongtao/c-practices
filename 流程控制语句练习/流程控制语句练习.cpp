#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
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

	//5.二的次幂：输入一个整数，判断其是否为2的幂次方
	int g;
	scanf("%d", &g);
	while (g > 1 && g % 2 == 0) g /= 2;
	if (g == 1) printf("yes!");
	else  printf("no!");

	//6.折纸问题：有一张厚度0.1mm的足够大的纸，折叠多少次才有珠穆朗玛峰的高度？（8844430mm）
	int h = 0;
	double i = 0.1;
	while (i < 8844430){ 
		i *= 2; 
		h++; }
    printf("%d\n", h);
	
	int j = 0;
	double k = 0.1;
	for (; k < 8844430; k *= 2) j++;
	printf("%d\n", j);

	//7.整数反转：输入一个整数，将其反转，例如：123→321
	int l, m, n = 0, rev = 0;
	scanf("%d", &l);
	while (l > 10) {
		m=l % 10;
		n++;
		rev += m * pow(10, n);
	}
	printf("%d", rev);              //这是错的

	
	int num, reversed = 0;
    printf("请输入一个整数：");
	scanf("%d", &num);
	// 循环反转
	while (num != 0) {
		int digit = num % 10;        // 取最后一位
		reversed = reversed * 10 + digit;  // 拼接到反转数字里
		num = num / 10;}              // 去掉最后一位
    printf("反转后的数字：%d\n", reversed);

	
	char str[20];  // 存数字字符串
	printf("请输入一个整数：");
	scanf("%s", str);
	int len = strlen(str);
	int left = 0, right = len - 1;
	// 反转字符串
	while (left < right) {
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;}
    printf("反转后的数字：%s\n", str);


	//8.开平方根：给定一个数，求其算术平方根的整数部分
	int o,p=1;
	printf("请输入一个整数：");
	scanf("%d", &o);
	while (p * p <= o) {
		p++;
	}
	printf("%d",p-1);

	









	return 0;
}