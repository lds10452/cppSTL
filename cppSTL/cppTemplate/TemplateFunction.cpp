#include<iostream>
using namespace std;
template<typename T>
void func()
{
	cout << "func call" << endl;
}

template<typename T>
//T MyAdd(T& a, T& b)//形参加引用不能隐式转换，MyAdd<int>(a, c)即error
void MyAdd(T a, T b)
{
	cout << "函数模板：" << a + b << endl;
}

void MyAdd(int a, int b)
{
	cout << "普通函数：" << a + b << endl;
}

void testSTLFun()
{
	int a = 10, b = 20;
	char c = 5, d = 15;
	MyAdd(a, b);//自动类型推导,不能隐式转换
	//以下两个均error,必须确定出T的类型才能执行
	//MyAdd(a, c);	//true,MyAdd<int>(a, c)
	//func();		//true,func<int>()
	MyAdd<int>(a, c);//显式指定类型，可以隐式转换

	//1. 如果函数模板和普通函数都可以实现，优先调用普通函数
	//2. 可以通过空模板参数列表来强制调用函数模板
	MyAdd<>(a, b);
	//3. 如果函数模板可以产生更好的匹配, 优先调用函数模板
	MyAdd(c, d);
}