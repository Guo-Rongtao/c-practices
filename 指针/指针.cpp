#include <stdio.h>
void swap1(int num1, int num2);
void swap2(int* p_a, int* p_b);
int* swap3();
int main()
{
//指针 == 内存地址
//我们会用一个指针变量将指针存起来，然后把指针变量也简称叫指针
//格式：
// 数据类型* 变量名;
	double abc = 10.0;
	double* p1 = &abc;          //此处的 * 只是个标记,初始化赋值时不能直接赋值一个数据，他会把数据当成地址来存储
	printf("%lf\n", *p1);     //此处的 * 是解引用运算符，在使用时如果要通过指针来获取内存地址存储的数据则要加*，如果只是单纯要使用指针变量则不加*
	*p1 = 200.0;              //修改数据
	printf("%lf\n", *p1);     
//指针变量占用的内存大小与数据类型无关，与编译器有关，32位编译器则为4字节，64位则为8字节
	printf("%zu\n", sizeof(p1));



//指针的作用：
  
  //操作其他函数中的变量：
	int a = 10, b = 20;
	swap1(a, b);
	printf("a=%d b=%d\n", a, b);     //此时会发现调用函数后没有变化，是因为把a,b传递给num1,num2了但是并没有返回,出了函数就失效
	swap2(&a, &b);
	printf("a=%d b=%d\n", a, b);     //此时调用函数后才变化，是因为把a,b地址传递给函数并做出了改变
	
	//如果要延长函数中变量生命周期，可设置static静态变量
	int* p_num = swap3();
	printf("%d\n", *p_num);









	
return 0;
}
void swap1(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
void swap2(int* p_a, int* p_b) {
	int temp = *p_a;
	*p_a = *p_b;
	*p_b = temp;
}
int* swap3() {
	static int num = 10;
	return &num;
}
