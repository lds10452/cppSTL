#include <iostream>
using namespace std;
class MyPrint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};

class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

void testFunCallOp()
{
	MyPrint p;
	MyAdd add;
	p("add(1 , 2): ");
	cout << add(1 , 2) << endl;
	cout << "MyAdd()(2,3): " << MyAdd()(2, 3) << endl;
}