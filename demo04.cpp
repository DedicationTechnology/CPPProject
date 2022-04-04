#include<iostream>
using namespace std;


const int test01 = 10;  // 全局下用const修饰的变量无法修改


void fun01()
{
	volatile const int test02 = 10;  // volatile用于禁止编译器优化,局部下的const修饰的变量可以修改(通过指针在内存下进行修改)
	int* p1 = (int*)&test02;
	*p1 = 100;
	//cout << "p1的地址:" << p1 << endl;  // 得到的地址是一个十六进制数 >>> 000000FA4C1BFB84
	//cout << "test02的地址:" << &test02 << endl;  // 在编译器优化的情况下&test02得到的是内存地址的具体数值 >>> 000000FA4C1BFB84
	//cout << "test02的值:" << test02 << endl;  // 在编译阶段,编译器将代码优化为:cout << "test02的值:" << 10 << endl; >>> 10
	cout << "p1的地址:" << int(p1) << endl;  // 将十六进制数转换为整型进行输出 >>> 166722452
	cout << "test02的地址:" << int(&test02) << endl;  // 在编译器未优化的情况下&test02得到的是内存地址的具体数值的bool值,使用int将其转化为整型输出 >>> 166722452
	cout << "test02的值:" << test02 << endl;  // 在编译器未优化的情况下的得到的就是真实地址test02内的数据 >>> 100
	cout << "p1的值:" << *p1 << endl;  // >>> 100
}
int main()
{
	int* p = (int*)&test01;
	//*p = 100;  // 全局的const不能间接修改
	fun01();
	return 0;
}