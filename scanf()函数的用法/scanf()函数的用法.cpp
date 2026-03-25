#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int a, b, c;
	printf("请输入三个数");
	scanf("%d%d%d", &a, &b, &c);
	printf("a=%d,b=%d,c=%d",a,b,c);
	
	
	char name[10];
	scanf("%s", &name);
	printf("%s有病\n", name);

	int age;
	scanf("%d", &age);
	printf("我%d岁了", age);

	int num1, num2;
	printf("我会做两个整数的加减法哦~请你考考我:\n");
	scanf("%d %d", &num1, &num2);
	printf("%d", num1 + num2);

	double length, width, height;
	printf("请输入长方体的长,宽,高：");
	scanf("%lf%lf%lf", &length, &width, &height);
	printf("长方体的表面积为：%.2lf\n", (length * width + length * height + width * height) * 2);
	printf("长方体的体积为：%.2lf", length * width * height);
	
	
	return 0;
}




























// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单
// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
