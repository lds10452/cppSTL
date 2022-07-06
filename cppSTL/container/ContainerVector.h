#pragma once
#include "ContainerBase.h"
#include <vector>
class ContainerVector:public ContainerBase
{
public:
	void Construction();
	void Assignment();
	void Capacity();
	void OtherOp();
	void Insert();
	void Access();
	void Deletion();
	void PrintResult(vector<int> &v,string str = "");
private:
	vector<int> m_vecContainer;
};

