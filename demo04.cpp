#include<iostream>
using namespace std;


const int test01 = 10;  // ȫ������const���εı����޷��޸�


void fun01()
{
	volatile const int test02 = 10;  // volatile���ڽ�ֹ�������Ż�,�ֲ��µ�const���εı��������޸�(ͨ��ָ�����ڴ��½����޸�)
	int* p1 = (int*)&test02;
	*p1 = 100;
	//cout << "p1�ĵ�ַ:" << p1 << endl;  // �õ��ĵ�ַ��һ��ʮ�������� >>> 000000FA4C1BFB84
	//cout << "test02�ĵ�ַ:" << &test02 << endl;  // �ڱ������Ż��������&test02�õ������ڴ��ַ�ľ�����ֵ >>> 000000FA4C1BFB84
	//cout << "test02��ֵ:" << test02 << endl;  // �ڱ���׶�,�������������Ż�Ϊ:cout << "test02��ֵ:" << 10 << endl; >>> 10
	cout << "p1�ĵ�ַ:" << int(p1) << endl;  // ��ʮ��������ת��Ϊ���ͽ������ >>> 166722452
	cout << "test02�ĵ�ַ:" << int(&test02) << endl;  // �ڱ�����δ�Ż��������&test02�õ������ڴ��ַ�ľ�����ֵ��boolֵ,ʹ��int����ת��Ϊ������� >>> 166722452
	cout << "test02��ֵ:" << test02 << endl;  // �ڱ�����δ�Ż�������µĵõ��ľ�����ʵ��ַtest02�ڵ����� >>> 100
	cout << "p1��ֵ:" << *p1 << endl;  // >>> 100
}
int main()
{
	int* p = (int*)&test01;
	//*p = 100;  // ȫ�ֵ�const���ܼ���޸�
	fun01();
	return 0;
}