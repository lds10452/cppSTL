#pragma once
#include "ContainerBase.h"
#include <set>
class ContainerSet:public ContainerBase
{
public:
	void Construction();
	void Assignment();
	void Capacity();
	void OtherOp();
	void Insert();
	void Access();
	void Deletion();
	void PrintResult(set<int>& v, string str = "");
private:
	set<int> m_setContainer;
};

