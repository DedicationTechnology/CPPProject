#include<stdio.h>  // printf依赖
#include<stdlib.h>  // system依赖
#define _CRT_SECURE_NO_WARNINGS     //这个宏定义最好要放到文件的第一行,在运行的时候不会出现警告提示


int main001() {
	//system("pause");  // pause程序的作用是等待用户输入任意键
	extern int test;  // extern用于告诉编译器有这个变量但是没有定义所以无法赋值
	//test = 10;  // >>> 会报错
	const int test01 = 10;  // const 修饰的变量不能被更改
	//test01 = 100;  // const 修饰的变量不能通过变量名去修改变量的内容
	printf("%d", test01);
	return 0;
}