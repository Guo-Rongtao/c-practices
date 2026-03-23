#include <iostream>

int main()
{
	//整数的数据类型有：short、int、long、long long
	//短整型short：占用2个字节，范围-32768~32767
	//整型int：占用4个字节，范围-2147483648~2147483647
	//长整型long：占用4个字节（Windows和Linux 32位），范围-2147483648~2147483647；占用8个字节（Linux 64位），范围-9223372036854775808~9223372036854775807
	long a = 1000L;     //用long定义时要加后缀L或l
	printf("a = %ld\n", a);   //要用%ld输出
	//长长整型long long（C99才有）：占用8个字节，范围-9223372036854775808~9223372036854775807
	long long b = 10000000000LL;   //用long long定义时要加后缀LL或ll
	printf("b = %lld\n", b);   //要用%lld输出


	//用sizeof运算符可以查看数据类型的大小
	printf("sizeof(short) = %d\n", sizeof(short));

    return 0;
}


