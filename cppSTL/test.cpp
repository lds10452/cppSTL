#include <iostream>
using namespace std;
#include "container/ContainerTest.h"
extern void testOperator();
extern void testTemplateBase();
extern void testMyArray();
int main()
{
	////��׼����
	//ContainerTest test;
	//test.Exec();

	////���������
	//testOperator();

	////��׼ģ��
	//testTemplateBase();

	//�����Զ���ģ����
	testMyArray();
	system("pause");
	return 0;
}