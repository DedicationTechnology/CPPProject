#include<iostream>
using namespace std;


void func01()
{
	int num01 = 10;
	int& num02 = num01;  // &引用的一个作用就是给空间取别名(类似指针),这里表示num01指向10,num02也指向10
	int num03 = num01;  // num03指向num01指向的空间,该空间的值为10
	num02 = 20;  // 修改num02指向的空间的值为20,由于num01也指向该空间所以输出num01也为20
	num03 = 30;  // 修改num03的指向,num03指向值为30的空间,但num01的指向不变
	cout << "num01:" << num01 << "   " << "num02:" << num02 << "   " << "num03:" << num03 << endl;  // >> 20 20 30
}


void func02(int& num)
{
	num = 0;
}


void func03(int num)
{
	num = 1;
}


int main()
{
	//func01();
	int num04 = 40;
	cout << "func03:" << num04 << "   ";  // >> 40
	func02(num04);
	cout << "func04:" << num04 << "   ";  // >> 0
	return 0;
}