#include "ContainerMap.h"

void ContainerMap::Construction()
{
	m_mapContainer.insert(make_pair(2, 20));
	m_mapContainer.insert(make_pair(1, 10));
	map<int,int> v1(m_mapContainer);
	PrintResult(v1, "map<int,int> v1(m_mapContainer)");
}

void ContainerMap::Assignment()
{
	map<int, int> v1;
	v1 = m_mapContainer;
	PrintResult(v1, "v1 = m_mapContainer");
}

void ContainerMap::Capacity()
{
	cout << "m_mapContainer.empty(): " << m_mapContainer.empty() << endl;
	cout << "m_mapContainer.size(): " << m_mapContainer.size() << endl;
}

void ContainerMap::OtherOp()
{
	map<int, int> v1;
	v1[6] = 60;
	v1.insert(map<int, int>::value_type(4, 40));
	v1.insert(pair<int, int>(5, 50));
	m_mapContainer.swap(v1);
	PrintResult(m_mapContainer, "m_mapContainer.swap(v1)");

	map<int,int>::iterator pos = m_mapContainer.find(4);
	if (pos != m_mapContainer.end())
		cout << "m_mapContainer.find(4)找到了元素：(4,40)" << endl;
	else
		cout << "m_mapContainer.find(4)未找到元素：(4,40)" << endl;

	cout << "m_mapContainer.count(5): " << m_mapContainer.count(5) << endl;
}

void ContainerMap::Insert()
{
	m_mapContainer.insert(map<int, int>::value_type(8, 80));
	PrintResult(m_mapContainer, "m_mapContainer.insert(map<int, int>::value_type(8, 80))");
	m_mapContainer.insert(pair<int, int>(3, 30));
	PrintResult(m_mapContainer, "m_mapContainer.insert(pair<int, int>(3, 30))");
	m_mapContainer.insert(make_pair(7, 70));
	PrintResult(m_mapContainer, "m_mapContainer.insert(make_pair(7, 70))");
	m_mapContainer[9] = 90;
	PrintResult(m_mapContainer, "m_mapContainer[9] = 90");
}

void ContainerMap::Access()
{
}

void ContainerMap::Deletion()
{
	m_mapContainer.erase(++m_mapContainer.begin());
	PrintResult(m_mapContainer, "m_mapContainer.erase(++m_mapContainer.begin())");
	m_mapContainer.erase(7);
	PrintResult(m_mapContainer, "m_mapContainer.erase(7)");
	m_mapContainer.erase(m_mapContainer.begin(), --m_mapContainer.end());
	PrintResult(m_mapContainer, "m_mapContainer.erase(m_mapContainer.begin(), --m_mapContainer.end())");
	m_mapContainer.clear();
	PrintResult(m_mapContainer, "m_mapContainer.clear()");
}

void ContainerMap::PrintResult(map<int, int>& v, string str)
{
	cout << str + ": ";
	for (map<int,int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "(" << (*it).first << "," << (*it).second << ")";
	}
	cout << endl;
}
