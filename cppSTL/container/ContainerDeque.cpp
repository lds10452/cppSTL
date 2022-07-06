#include "ContainerDeque.h"

void ContainerDeque::Construction()
{
	deque<int> v1(2, 3);
	PrintResult(v1, "deque<int> v1(2, 3)");

	deque<int> v2(v1.begin(), v1.end());
	PrintResult(v2, "deque<int> v2(v1.begin(), v1.end())");

	deque<int> v3=v2;
	PrintResult(v3, "deque<int> v3=v2");
}

void ContainerDeque::Assignment()
{
	m_dequeContainer.push_back(2);
	m_dequeContainer.assign(3, 11);
	PrintResult(m_dequeContainer, "m_dequeContainer.assign(3, 11)");

	deque<int> v1;
	v1.assign(m_dequeContainer.begin(), m_dequeContainer.end());
	PrintResult(v1, "v1.assign(m_dequeContainer.begin(), m_dequeContainer.end())");

	deque<int> v2;
	v2 = v1;
	PrintResult(v2, "v2 = v1");
}

void ContainerDeque::Capacity()
{
	cout << "m_dequeContainer.empty(): " << m_dequeContainer.empty() << endl;
	cout << "m_dequeContainer.size(): " << m_dequeContainer.size() << endl;
	m_dequeContainer.resize(6, 10);
	PrintResult(m_dequeContainer, "m_dequeContainer.resize(6,10)");
	m_dequeContainer.resize(4);
	PrintResult(m_dequeContainer, "m_dequeContainer.resize(4)");
}

void ContainerDeque::OtherOp()
{
	deque<int>(2, 1).swap(m_dequeContainer);
	PrintResult(m_dequeContainer, "deque<int>(2,1).swap(m_dequeContainer)");
}

void ContainerDeque::Insert()
{
	m_dequeContainer.clear();
	m_dequeContainer.push_back(2);
	PrintResult(m_dequeContainer, "m_dequeContainer.push_back(2)");
	m_dequeContainer.push_front(3);
	PrintResult(m_dequeContainer, "m_dequeContainer.push_front(3)");
	m_dequeContainer.insert(m_dequeContainer.end(), 3);
	PrintResult(m_dequeContainer, "m_dequeContainer.insert(m_dequeContainer.end(), 3)");
	m_dequeContainer.insert(m_dequeContainer.begin(), 3, 1);
	PrintResult(m_dequeContainer, "m_dequeContainer.insert(m_dequeContainer.begin(), 3, 1)");
	m_dequeContainer.insert(m_dequeContainer.begin() + 1, m_dequeContainer.begin() + 3, m_dequeContainer.begin() + 5);
	PrintResult(m_dequeContainer, "m_dequeContainer.insert(m_dequeContainer.begin() + 1, m_dequeContainer.begin() + 3, m_dequeContainer.begin() + 5)");
}

void ContainerDeque::Access()
{
	cout << "m_dequeContainer.at(3): " << m_dequeContainer.at(3) << endl;
	cout << "m_dequeContainer[3]: " << m_dequeContainer[3] << endl;
	cout << "m_dequeContainer.front(): " << m_dequeContainer.front() << endl;
	cout << "m_dequeContainer.back(): " << m_dequeContainer.back() << endl;
}

void ContainerDeque::Deletion()
{
	deque<int>::iterator it=m_dequeContainer.erase(m_dequeContainer.begin() + 3);
	PrintResult(m_dequeContainer, "m_dequeContainer.erase(m_dequeContainer.begin() + 3)");
	m_dequeContainer.erase(it, it + 2);
	PrintResult(m_dequeContainer, "m_dequeContainer.erase(it, it + 2)");
	m_dequeContainer.pop_back();
	PrintResult(m_dequeContainer, "m_dequeContainer.pop_back()");
	m_dequeContainer.pop_front();
	PrintResult(m_dequeContainer, "m_dequeContainer.pop_front()");
	m_dequeContainer.clear();
	PrintResult(m_dequeContainer, "m_dequeContainer.clear()");
}

void ContainerDeque::PrintResult(deque<int>& v, string str)
{
	cout << str + ": ";
	for (deque<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
