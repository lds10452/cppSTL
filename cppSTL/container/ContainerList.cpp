#include "ContainerList.h"

void ContainerList::Construction()
{
	list<int> v1(2, 3);
	PrintResult(v1, "list<int> v1(2, 3)");

	list<int> v2(v1.begin(), v1.end());
	PrintResult(v2, "list<int> v2(v1.begin(), v1.end())");

	list<int> v3 = v2;
	PrintResult(v3, "list<int> v3=v2");
}

void ContainerList::Assignment()
{
	m_listContainer.push_back(2);
	m_listContainer.assign(3, 11);
	PrintResult(m_listContainer, "m_listContainer.assign(3, 11)");

	list<int> v1;
	v1.assign(m_listContainer.begin(), m_listContainer.end());
	PrintResult(v1, "v1.assign(m_listContainer.begin(), m_listContainer.end())");

	list<int> v2;
	v2 = v1;
	PrintResult(v2, "v2 = v1");
}

void ContainerList::Capacity()
{
	cout << "m_listContainer.empty(): " << m_listContainer.empty() << endl;
	cout << "m_listContainer.size(): " << m_listContainer.size() << endl;
	m_listContainer.resize(6, 10);
	PrintResult(m_listContainer, "m_listContainer.resize(6,10)");
	m_listContainer.resize(4);
	PrintResult(m_listContainer, "m_listContainer.resize(4)");
}

void ContainerList::OtherOp()
{
	m_listContainer.sort();
	PrintResult(m_listContainer, "m_listContainer.sort()");
	m_listContainer.reverse();
	PrintResult(m_listContainer, "m_listContainer.reverse()");
	list<int>(2, 1).swap(m_listContainer);
	PrintResult(m_listContainer, "list<int>(2,1).swap(m_listContainer)");
}

void ContainerList::Insert()
{
	m_listContainer.clear();
	m_listContainer.push_back(2);
	PrintResult(m_listContainer, "m_listContainer.push_back(2)");
	m_listContainer.push_front(3);
	PrintResult(m_listContainer, "m_listContainer.push_front(3)");
	m_listContainer.insert(m_listContainer.end(), 3);
	PrintResult(m_listContainer, "m_listContainer.insert(m_listContainer.end(), 3)");
	m_listContainer.insert(m_listContainer.begin(), 3, 1);
	PrintResult(m_listContainer, "m_listContainer.insert(m_listContainer.begin(), 3, 1)");
	list<int> list(2, 4);
	m_listContainer.insert(m_listContainer.end(), list.begin(), list.end());
	PrintResult(m_listContainer, "m_listContainer.insert(m_listContainer.end(), list.begin(), list.end())");
}

void ContainerList::Access()
{
	cout << "m_listContainer.front(): " << m_listContainer.front() << endl;
	cout << "m_listContainer.back(): " << m_listContainer.back() << endl;
}

void ContainerList::Deletion()
{
	list<int>::iterator it = m_listContainer.erase(--m_listContainer.end());
	PrintResult(m_listContainer, "m_listContainer.erase(--m_listContainer.end())");
	m_listContainer.erase(--it, it);
	PrintResult(m_listContainer, "m_listContainer.erase(--it, it)");
	m_listContainer.remove(3);
	PrintResult(m_listContainer, "m_listContainer.remove(3)");
	m_listContainer.pop_back();
	PrintResult(m_listContainer, "m_listContainer.pop_back()");
	m_listContainer.pop_front();
	PrintResult(m_listContainer, "m_listContainer.pop_front()");
	m_listContainer.clear();
	PrintResult(m_listContainer, "m_listContainer.clear()");
}

void ContainerList::PrintResult(const list<int>& v, string str)
{
	cout << str + ": ";
	for (list<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
