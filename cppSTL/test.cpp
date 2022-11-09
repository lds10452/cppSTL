#include <iostream>
using namespace std;
#include "container/ContainerTest.h"
extern void testOperator();
extern void testTemplateBase();
extern void testMyArray();
int main()
{
	////标准容器
	//ContainerTest test;
	//test.Exec();

	////运算符重载
	//testOperator();

	////标准模板
	//testTemplateBase();

	//测试自定义模板类
	testMyArray();
	system("pause");
	return 0;
}