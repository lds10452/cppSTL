#pragma once
#include "ContainerBase.h"
#include <queue>
class ContainerQueue:public ContainerBase
{
public:
	void Construction();
	void Assignment();
	void Capacity();
	void OtherOp();
	void Insert();
	void Access();
	void Deletion();
	void PrintResult(queue<int>& v, string str = "");
private:
	queue<int> m_queueContainer;
};

