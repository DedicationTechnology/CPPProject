#include "demo01.h"
using namespace std;

void test001::func001()
{
	cout << "hello func001";
}


struct stru001
{
	char name[64];
	int age;
	void func002()
	{
		cout << "hello stru001.func002" << endl;  // �ṹ���ڿ��Զ��庯��
	}
};


void func001()
{
	stru001 struc01;  // ����ṹ�����
	struc01.func002();
}


int main003()
{
	func001();
	return 0;
}
