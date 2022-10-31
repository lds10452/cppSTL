#include <iostream>
using namespace std;
class Car
{
	friend ostream& operator<<(ostream& out, const Car& p);
	int *m_nPrice;
public:
	Car(int price)
	{
		m_nPrice = new int(price);
	}
	~Car()
	{
		if (m_nPrice)
		{
			delete m_nPrice;
			m_nPrice = NULL;
		}
	}
	Car& operator=(const Car& p)
	{
		if (m_nPrice)
		{
			delete m_nPrice;
			m_nPrice = nullptr;
		}
		m_nPrice = new int(*p.m_nPrice);
		return *this;
	}
};

ostream& operator<<(ostream& out, const Car& p)
{
	out << *p.m_nPrice;
	return out;
}

void testEqualOp()
{
	Car c1(33333);
	Car c2(66666);
	Car c3(99999);
	cout << "Car c1(33333): " << c1 << endl;
	c1 = c2 = c3;//´ÓÓÒÍù×óÒÀ´Î¸³Öµ
	cout << "c1 = c2 = c3:c1 " << c1 << " c2: " << c2 << endl;
}