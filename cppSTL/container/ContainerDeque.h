#pragma once
#include "ContainerBase.h"
#include <deque>
class ContainerDeque:public ContainerBase
{
public:
	void Construction();
	void Assignment();
	void Capacity();
	void OtherOp();
	void Insert();
	void Access();
	void Deletion();
	void PrintResult(deque<int>& v, string str = "");
private:
	deque<int> m_dequeContainer;
};

