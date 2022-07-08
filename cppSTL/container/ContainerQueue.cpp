#include "ContainerQueue.h"

void ContainerQueue::Construction()
{
	for (int i = 0; i < 4; i++)
	{
		m_queueContainer.push(i);
	}
	queue<int> v1 = m_queueContainer;
	PrintResult(v1, "queue<int> v1=m_queueContainer");
}

void ContainerQueue::Assignment()
{
	queue<int> v1;
	v1 = m_queueContainer;
	PrintResult(v1, "v1 = m_queueContainer");
}

void ContainerQueue::Capacity()
{
	cout << "m_queueContainer.empty(): " << m_queueContainer.empty() << endl;
	cout << "m_queueContainer.size(): " << m_queueContainer.size() << endl;
}

void ContainerQueue::OtherOp()
{
}

void ContainerQueue::Insert()
{
	m_queueContainer.push(6);
	PrintResult(m_queueContainer, "m_queueContainer.push(6)");
}

void ContainerQueue::Access()
{
	m_queueContainer.push(1);
	m_queueContainer.push(6);
	cout << "m_queueContainer.front(): " << m_queueContainer.front() << endl;
	cout << "m_queueContainer.back(): " << m_queueContainer.back() << endl;
}

void ContainerQueue::Deletion()
{
	m_queueContainer.pop();
	PrintResult(m_queueContainer, "m_queueContainer.pop()");
}

void ContainerQueue::PrintResult(queue<int>& v, string str)
{
	cout << str + ": ";
	while (!v.empty())
	{
		cout << v.front() << " ";// << v.back() << " ";
		v.pop();
	}
	cout << endl;
}
