#include <iostream>
using namespace std;
#include "container/ContainerTest.h"
extern void testOperator();
extern void testTemplateBase();
int main()
{
	////标准容器
	//ContainerTest test;
	//test.Exec();

	////运算符重载
	//testOperator();

	//标准模板
	testTemplateBase();
	system("pause");
	return 0;
}