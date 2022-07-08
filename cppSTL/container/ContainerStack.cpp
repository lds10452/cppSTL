#include "ContainerStack.h"

void ContainerStack::Construction()
{
	for (int i = 0; i < 4; i++)
	{
		m_stackContainer.push(i);
	}
	stack<int> v1=m_stackContainer;
	PrintResult(v1, "stack<int> v1=m_stackContainer");
}

void ContainerStack::Assignment()
{
	stack<int> v1;
	v1 = m_stackContainer;
	PrintResult(v1, "v1 = m_stackContainer");
}

void ContainerStack::Capacity()
{
	cout << "m_stackContainer.empty(): " << m_stackContainer.empty() << endl;
	cout << "m_stackContainer.size(): " << m_stackContainer.size() << endl;
}

void ContainerStack::OtherOp()
{
}

void ContainerStack::Insert()
{
	m_stackContainer.push(6);
	PrintResult(m_stackContainer, "m_stackContainer.push(6)");
}

void ContainerStack::Access()
{
	m_stackContainer.push(6);
	cout << "m_stackContainer.top(): " << m_stackContainer.top() << endl;
}

void ContainerStack::Deletion()
{
	m_stackContainer.pop();
	PrintResult(m_stackContainer, "m_stackContainer.pop()");
}

void ContainerStack::PrintResult(stack<int>& v, string str)
{
	cout << str + ": ";
	while (!v.empty())
	{
		cout << v.top() << " ";
		v.pop();
	}
	cout << endl;
}
