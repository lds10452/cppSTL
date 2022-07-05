#include "ContainerTest.h"
#include "ContainerVector.h"
ContainerTest::ContainerTest()
{
	m_pBase = new ContainerVector;
}

void ContainerTest::Exec()
{
	cout << "构造：" << endl;
	m_pBase->Construction();
	cout << "赋值：" << endl;
	m_pBase->Assignment();
	cout << "容量：" << endl;
	m_pBase->Capacity();
	cout << "插入：" << endl;
	m_pBase->Insert();
	cout << "存取：" << endl;
	m_pBase->Access();
	cout << "删除：" << endl;
	m_pBase->Deletion();
}
