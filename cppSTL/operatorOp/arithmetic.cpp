#include <iostream>
using namespace std;
class Person
{
public:
	Person():m_nAge(0),m_nScore(0){}
	Person(int age,int score):m_nAge(age),m_nScore(score){}
	int m_nAge;
	int m_nScore;
	Person operator+(const Person& p)
	{
		Person temp;
		temp.m_nAge = this->m_nAge + p.m_nAge;
		temp.m_nScore = this->m_nScore + p.m_nScore;
		return temp;
	}
	Person operator+(int val)
	{
		Person temp;
		temp.m_nAge = this->m_nAge + val;
		temp.m_nScore = this->m_nScore + val;
		return temp;
	}
	Person& operator+=(const Person& p)
	{
		this->m_nAge += p.m_nAge;
		this->m_nScore += p.m_nScore;
		return *this;
	}
	void printfPerson()
	{
		cout << "age:" << m_nAge << "	score" << m_nScore << endl;
	}
};
////全局函数实现+号运算符重载
//Person operator+(const Person& p1, const Person& p2)
//{
//	Person temp;
//	temp.m_nAge = p1.m_nAge + p2.m_nAge;
//	temp.m_nScore = p1.m_nScore + p2.m_nScore;
//	return temp;
//}
////运算符重载可以发生函数重载
//Person operator+(const Person& p1, int val)
//{
//	Person temp;
//	temp.m_nAge = p1.m_nAge + val;
//	temp.m_nScore = p1.m_nScore + val;
//	return temp;
//}
void testArithmetic()
{
	Person p1(11, 22);
	Person p2(33, 44);
	Person p = p1 + p2;//相当于Person p = p1.operator+(p2);
	p.printfPerson();

	p1 += p2 += p2;//从右往左计算
	p1.printfPerson();

	Person p3 = p2 + 10;
	p3.printfPerson();
}