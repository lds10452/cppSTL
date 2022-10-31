#include <iostream>
using namespace std;
#include "container/ContainerTest.h"
extern void testOperator();
int main()
{
	//标准容器
	/*ContainerTest test;
	test.Exec();*/

	//运算符重载
	testOperator();
	system("pause");
	return 0;
}