#pragma once
#include "ContainerBase.h"
#include <vector>
class ContainerVector:public ContainerBase
{
public:
	void Construction();
	void Insert();
	void Deletion();
	void Capacity();
	void Assignment();
	void Access();
	void PrintResult(vector<int> &v,string str = "");
private:
	vector<int> m_vecContainer;
};

