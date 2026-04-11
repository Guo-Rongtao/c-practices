#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
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
		int num, reversed = 0;
    printf("请输入一个整数：");
	scanf("%d", &num);
	// 循环反转
	while (num != 0) {
		reversed = reversed * 10 + num % 10;  // 拼接到反转数字里
		num /= 10;}              // 去掉最后一位
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

	int q;
	printf("请输入一个整数：");
	scanf("%d", &q);
	printf("%d", sqrt(q));

	//9.回文数：判断一个数正着读和倒着读是否是同一个数，如121，95159.
	int r,s=0;
	scanf("%d", &r);
	int t = r;
	while (r != 0) {
		s = s * 10 + r % 10;
		r / 10;
	}
	t == s ? printf("他是回文数") : printf("他b不是回文数");

	//10.两数相除：要求不用乘除和取余，求两数相除得到的商和余数
	int u, v, w=0;
	scanf("%d %d", &u,&v);
	while (u > v) {
		u -= v;
		w++;
	}
	printf("商是%d，余数是%d", w, u);
	
	//11.打印一个三行五列的'*'
	for (int row = 1; row <= 3; row++) {
		for (int column = 1; column <= 5; column++)	printf("*");
		printf("\n");
	}
	
	//12.打印一个五行五列的三角形
	   //(1)倒序三角形
	   for (int row = 5; row >= 1; row--) {
		for (int column = 1; column <= row; column++)	printf("*");
		printf("\n");
	    }
	   //(2)正序三角形
	   for (int row = 1; row <= 5; row++) {
		   for (int column = 1; column <= row; column++)	printf("*");
		   printf("\n");
	   }
	
	//13.打印九九乘法表
    	
	   for (int row = 1; row <= 9; row++) {
		   for (int column = 1; column <= row;column++) {
			   printf("%d * %d = %d\t", column, row, row * column);}
           printf("\n");
	   }
	
	//14.计算质数：给定一个整数，计算所有小于等于它的质数的数量
	   int count1, quantity = 0;
	   scanf("%d", &count1);

	   if (count1 == 1) printf("质数的个数是1");
	   else {
		   for (int number = 1; number <= count1; number++) {        //count1是输入的整数
																   	 //number是用以考虑从1开始到count1的所有整数
			   int numA = 0;									   	 //num是取从1开始到number的整数
			                                                         //numA是表示number的因数个数
			   for (int num = 1; num <= number; num++) {
				   if (number % num == 0) numA++;}
			   
			   if (numA == 2) quantity++;
		   }
		   printf("质数的个数是%d", quantity);

	   }

	//15.计算：1^1+2^2+3^3+...+10^10
	   long long plus = 0;
	   for (int num = 1; num <= 10; num++) {
		   plus += pow(num, num);
	   }
	   printf("%lld", plus);
	
	//16.找出0~1000内所有满足要求的数，要求：该数每一位数字加起来和为15

	   for (int i = 1; i <= 1000; i++) {
		   int res = 0, temp = i;
		   while (1) {
			   res += temp % 10;
			   temp = temp / 10;
			   if (temp == 0) break;
		   }
		   if (res == 15) printf("%d ", i);
	   }
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}