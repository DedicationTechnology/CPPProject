#include<iostream>
using namespace std;


void func01()
{
	int num01 = 10;
	int& num02 = num01;  // &���õ�һ�����þ��Ǹ��ռ�ȡ����(����ָ��),�����ʾnum01ָ��10,num02Ҳָ��10
	int num03 = num01;  // num03ָ��num01ָ��Ŀռ�,�ÿռ��ֵΪ10
	num02 = 20;  // �޸�num02ָ��Ŀռ��ֵΪ20,����num01Ҳָ��ÿռ��������num01ҲΪ20
	num03 = 30;  // �޸�num03��ָ��,num03ָ��ֵΪ30�Ŀռ�,��num01��ָ�򲻱�
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