#include<iostream>
using namespace std;


namespace name01 {
	int test01 = 10;
}


namespace name02 {
	int test01 = 100;
}


int main002() {
	cout << name02::test01 << endl;  // �ռ���::������ ���Է���ָ���ռ��ڵ�����,��ֹ�޷�ͬ��
	return 0;
}