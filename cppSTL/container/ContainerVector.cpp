#include "ContainerVector.h"

void ContainerVector::Construction()
{
	vector<int> v1(2, 3);
	PrintResult(v1,"vector<int> v1(2, 3)");

	vector<int> v2(v1.begin(), v1.end());
	PrintResult(v2, "vector<int> v2(v1.begin(), v1.end())");

	vector<int> v3(v2);
	PrintResult(v3, "vector<int> v3(v2)");
}

void ContainerVector::Insert()
{
	m_vecContainer.clear();
	m_vecContainer.push_back(2);
	PrintResult(m_vecContainer, "m_vecContainer.push_back(2)");
	m_vecContainer.insert(m_vecContainer.end(), 3);
	PrintResult(m_vecContainer, "m_vecContainer.insert(m_vecContainer.end(), 3)");
	m_vecContainer.insert(m_vecContainer.begin(), 3, 1);
	PrintResult(m_vecContainer, "m_vecContainer.insert(m_vecContainer.begin(), 3, 1)");
}

void ContainerVector::Deletion()
{
	m_vecContainer.erase(m_vecContainer.begin() + 3);
	PrintResult(m_vecContainer, "m_vecContainer.erase(m_vecContainer.begin() + 3)");
	m_vecContainer.erase(m_vecContainer.begin(), m_vecContainer.begin() + 2);
	PrintResult(m_vecContainer, "m_vecContainer.erase(m_vecContainer.begin(), m_vecContainer.begin() + 2)");
	m_vecContainer.pop_back();
	PrintResult(m_vecContainer, "m_vecContainer.pop_back()");
	m_vecContainer.clear();
	PrintResult(m_vecContainer, "m_vecContainer.clear()");
}

void ContainerVector::Capacity()
{
	cout << "m_vecContainer.empty(): " << m_vecContainer.empty() << endl;
	cout << "m_vecContainer.capacity(): " << m_vecContainer.capacity() << endl;
	cout << "m_vecContainer.size(): " << m_vecContainer.size() << endl;
	m_vecContainer.resize(6,10);
	PrintResult(m_vecContainer, "m_vecContainer.resize(6,10)");
	m_vecContainer.resize(4);
	PrintResult(m_vecContainer, "m_vecContainer.resize(4)");
}

void ContainerVector::Assignment()
{
	//m_vecContainer.push_back(2);
	m_vecContainer.assign(3, 11);
	PrintResult(m_vecContainer, "m_vecContainer.assign(3, 11)");

	vector<int> v1;
	v1.assign(m_vecContainer.begin(), m_vecContainer.end());
	PrintResult(v1, "v1.assign(m_vecContainer.begin(), m_vecContainer.end())");

	vector<int> v2;
	v2 = v1;
	PrintResult(v2, "v2 = v1");
}

void ContainerVector::Access()
{
	cout << "m_vecContainer.at(3): " << m_vecContainer.at(3) << endl;
	cout << "m_vecContainer[3]: " << m_vecContainer[3] << endl;
	cout << "m_vecContainer.front(): " << m_vecContainer.front() << endl;
	cout << "m_vecContainer.back(): " << m_vecContainer.back() << endl;
}

void ContainerVector::PrintResult(vector<int>& v, string str)
{
	cout << str+": ";
	for (vector<int>::iterator it= v.begin();it!=v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
