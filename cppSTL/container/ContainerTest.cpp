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
	cout << "构造：" << endl;
	m_pBase->Construction();
	cout << "赋值：" << endl;
	m_pBase->Assignment();
	cout << "容量：" << endl;
	m_pBase->Capacity();
	cout << "其他：" << endl;
	m_pBase->OtherOp();
	cout << "插入：" << endl;
	m_pBase->Insert();
	cout << "存取：" << endl;
	m_pBase->Access();
	cout << "删除：" << endl;
	m_pBase->Deletion();
}
