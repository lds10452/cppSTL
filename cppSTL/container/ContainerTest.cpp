#include "ContainerTest.h"
#include "ContainerString.h"
#include "ContainerVector.h"
#include "ContainerDeque.h"
#include "ContainerList.h"
#include "ContainerStack.h"
#include "ContainerQueue.h"
#include "ContainerSet.h"
#include "ContainerMap.h"
ContainerTest::ContainerTest()
{
	//m_pBase = new ContainerString;
	//m_pBase = new ContainerVector;
	//m_pBase = new ContainerDeque;
	//m_pBase = new ContainerList;
	//m_pBase = new ContainerStack;
	//m_pBase = new ContainerQueue;
	//m_pBase = new ContainerSet;
	m_pBase = new ContainerMap;
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
