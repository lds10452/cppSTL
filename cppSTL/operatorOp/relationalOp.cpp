#include <iostream>
using namespace std;

class Animal
{
	int m_nAge;
public:
	Animal(int age):m_nAge(age){}
	bool operator==(const Animal& p)
	{
		if (m_nAge == p.m_nAge)
		{
			return true;
		}
		return false;
	}
	bool operator<(const Animal& p)
	{
		if (m_nAge < p.m_nAge)
		{
			return true;
		}
		return false;
	}
	bool operator>(const Animal& p)
	{
		if (m_nAge > p.m_nAge)
		{
			return true;
		}
		return false;
	}
};

void testRelationalOp()
{
	Animal a1(10);
	Animal a2(10);
	Animal a3(20);
	cout << "a1(10)==a2(10): " << (a1 == a2) << "\n" <<
		"a1(10)<a3(20): " << (a1 < a3) << "\n" <<
		"a1(10)>a3(20): " << (a1 > a3) << endl;
}