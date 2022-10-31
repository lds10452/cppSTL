//#include <ostream>
#include <iostream>
using namespace std;
class Book
{
	friend ostream& operator<<(ostream& out, const Book& book);
public:
	Book(string name,int num):m_strName(name),m_nNum(num){}
private:
	string m_strName;
	int m_nNum;
};
//全局函数实现左移重载运算符，成员函数实现不了
//ofstream对象只能有一个，必须返回引用
ostream& operator<<(ostream& out, const Book& book)
{
	out << book.m_strName << " have " << book.m_nNum;
	return out;
}

void testLeftShift()
{
	Book book("English", 200);
	cout << book << " pages.." << endl;
}