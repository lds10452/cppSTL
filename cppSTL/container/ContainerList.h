#pragma once
#include "ContainerBase.h"
#include <list>
class ContainerList:public ContainerBase
{
public:
	void Construction();
	void Assignment();
	void Capacity();
	void OtherOp();
	void Insert();
	void Access();
	void Deletion();
	void PrintResult(const list<int>& v, string str = "");
private:
	list<int> m_listContainer;
};

