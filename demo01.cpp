#include<stdio.h>  // printf����
#include<stdlib.h>  // system����
#define _CRT_SECURE_NO_WARNINGS     //����궨�����Ҫ�ŵ��ļ��ĵ�һ��,�����е�ʱ�򲻻���־�����ʾ


int main001() {
	//system("pause");  // pause����������ǵȴ��û����������
	extern int test;  // extern���ڸ��߱������������������û�ж��������޷���ֵ
	//test = 10;  // >>> �ᱨ��
	const int test01 = 10;  // const ���εı������ܱ�����
	//test01 = 100;  // const ���εı�������ͨ��������ȥ�޸ı���������
	printf("%d", test01);
	return 0;
}