#include<iostream>
using namespace std;


namespace name01 {
	int test01 = 10;
}


namespace name02 {
	int test01 = 100;
}


int main002() {
	cout << name02::test01 << endl;  // 空间名::变量名 可以访问指定空间内的内容,防止无法同名
	return 0;
}