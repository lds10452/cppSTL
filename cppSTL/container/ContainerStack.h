#pragma once
#include "ContainerBase.h"
#include <stack>
class ContainerStack:public ContainerBase
{
public:
	void Construction();
	void Assignment();
	void Capacity();
	void OtherOp();
	void Insert();
	void Access();
	void Deletion();
	void PrintResult(stack<int>& v, string str = "");
private:
	stack<int> m_stackContainer;
};

