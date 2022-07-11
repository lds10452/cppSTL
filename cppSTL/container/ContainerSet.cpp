#include "ContainerSet.h"

void ContainerSet::Construction()
{
	m_setContainer.insert(10);
	m_setContainer.insert(20);
	set<int> v1(m_setContainer);
	PrintResult(v1, "set<int> v1(m_setContainer)");
}

void ContainerSet::Assignment()
{
	set<int> v1;
	v1 = m_setContainer;
	PrintResult(v1, "v1 = m_setContainer");
}

void ContainerSet::Capacity()
{
	cout << "m_setContainer.empty(): " << m_setContainer.empty() << endl;
	cout << "m_setContainer.size(): " << m_setContainer.size() << endl;
}

void ContainerSet::OtherOp()
{
	set<int> v1;
	v1.insert(1);
	v1.insert(2);
	v1.insert(3);
	m_setContainer.swap(v1);
	PrintResult(m_setContainer, "m_setContainer.swap(v1)");

	set<int>::iterator pos = m_setContainer.find(2);
	if (pos != m_setContainer.end())
		cout << "m_setContainer.find(2)找到了元素：2" << endl;
	else
		cout << "m_setContainer.find(2)未找到元素：2" << endl;

	cout << "m_setContainer.count(1): " << m_setContainer.count(1) << endl;
}

void ContainerSet::Insert()
{
	m_setContainer.insert(20);
	PrintResult(m_setContainer, "m_setContainer.insert(20)");
}

void ContainerSet::Access()
{
}

void ContainerSet::Deletion()
{
	m_setContainer.erase(++m_setContainer.begin());
	PrintResult(m_setContainer, "m_setContainer.erase(++m_setContainer.begin())");
	m_setContainer.erase(3);
	PrintResult(m_setContainer, "m_setContainer.erase(3)");
	m_setContainer.erase(m_setContainer.begin(), --m_setContainer.end());
	PrintResult(m_setContainer, "m_setContainer.erase(m_setContainer.begin(), --m_setContainer.end())");
	m_setContainer.clear();
	PrintResult(m_setContainer, "m_setContainer.clear()");
}

void ContainerSet::PrintResult(set<int>& v, string str)
{
	cout << str + ": ";
	for (set<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
