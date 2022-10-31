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
//ȫ�ֺ���ʵ�������������������Ա����ʵ�ֲ���
//ofstream����ֻ����һ�������뷵������
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