#include <iostream>
using namespace std;
class MyInteger {
	friend ostream& operator<<(ostream& out, const MyInteger& integer);
	//friend MyInteger& operator++(MyInteger& p);
	//friend MyInteger operator++(MyInteger& p, int);
public:
	MyInteger() { m_nValue = 0; }
	MyInteger& operator++()//前置++
	{
		m_nValue++;
		return *this;
	}
	MyInteger operator++(int)//后置++
	{
		MyInteger temp = *this;
		m_nValue++;
		return temp;
	}
private:
	int m_nValue;
};
////全局实现前置++
//MyInteger& operator++(MyInteger& p)
//{
//	p.m_nValue++;
//	return p;
//}
////全局实现后置++
//MyInteger operator++(MyInteger& p, int)
//{
//	MyInteger temp = p;
//	p.m_nValue++;
//	return temp;
//}
ostream& operator<<(ostream& out, const MyInteger& integer)
{
	out << integer.m_nValue;
	return out;
}
void testIncrease()
{
	MyInteger integer;
	cout << integer++ << endl;//不能后置++++
	cout << integer << endl;

	MyInteger integer1;
	cout << ++++integer1 << endl;
	cout << integer1 << endl;
}