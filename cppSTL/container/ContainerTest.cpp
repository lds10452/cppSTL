#include "ContainerTest.h"
#include "ContainerVector.h"
ContainerTest::ContainerTest()
{
	m_pBase = new ContainerVector;
}

void ContainerTest::Exec()
{
	cout << "���죺" << endl;
	m_pBase->Construction();
	cout << "��ֵ��" << endl;
	m_pBase->Assignment();
	cout << "������" << endl;
	m_pBase->Capacity();
	cout << "������" << endl;
	m_pBase->OtherOp();
	cout << "���룺" << endl;
	m_pBase->Insert();
	cout << "��ȡ��" << endl;
	m_pBase->Access();
	cout << "ɾ����" << endl;
	m_pBase->Deletion();
}
