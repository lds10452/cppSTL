#include<iostream>
using namespace std;
template<typename T>
void func()
{
	cout << "func call" << endl;
}

template<typename T>
//T MyAdd(T& a, T& b)//�βμ����ò�����ʽת����MyAdd<int>(a, c)��error
void MyAdd(T a, T b)
{
	cout << "����ģ�壺" << a + b << endl;
}

void MyAdd(int a, int b)
{
	cout << "��ͨ������" << a + b << endl;
}

void testSTLFun()
{
	int a = 10, b = 20;
	char c = 5, d = 15;
	MyAdd(a, b);//�Զ������Ƶ�,������ʽת��
	//����������error,����ȷ����T�����Ͳ���ִ��
	//MyAdd(a, c);	//true,MyAdd<int>(a, c)
	//func();		//true,func<int>()
	MyAdd<int>(a, c);//��ʽָ�����ͣ�������ʽת��

	//1. �������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
	//2. ����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
	MyAdd<>(a, b);
	//3. �������ģ����Բ������õ�ƥ��, ���ȵ��ú���ģ��
	MyAdd(c, d);
}