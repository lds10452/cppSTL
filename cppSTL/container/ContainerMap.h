#pragma once
#include "ContainerBase.h"
#include <map>
class ContainerMap:public ContainerBase
{
public:
	void Construction();
	void Assignment();
	void Capacity();
	void OtherOp();
	void Insert();
	void Access();
	void Deletion();
	void PrintResult(map<int, int>& v, string str = "");
private:
	map<int, int> m_mapContainer;
};

