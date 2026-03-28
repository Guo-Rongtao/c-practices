#include <stdio.h>
int main(){
	//自加自减运算符：a++  a--  ++a  --a 
	 //单独写一行时，前置后置无区别：
	 int a=10;
	 a++;//=11=++a

	 //与其他代码联合使用时：
	  // a++和a--是先使用a的值，再进行自加自减1：
	 int b = a++;//b=11,a=12
	  // ++a和--a是先进行自加自减1，再使用a的值:
	 int c = ++a;//c=13,a=13

	 //参与计算时，Windows和mac不一样
	 int d = a++ + a++;//Windows:d=25,a=14;mac:d=26,a=14









return 0;
}