#include <iostream>
using namespace std;
#include "container/ContainerTest.h"
extern void testOperator();
extern void testTemplateBase();
int main()
{
	////��׼����
	//ContainerTest test;
	//test.Exec();

	////���������
	//testOperator();

	//��׼ģ��
	testTemplateBase();
	system("pause");
	return 0;
}