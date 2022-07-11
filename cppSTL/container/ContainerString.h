#pragma once
#include "ContainerBase.h"
#include <string>
class ContainerString:public ContainerBase
{
public:
	void Construction();
	void Assignment();
	void Capacity();
	void OtherOp();
	void Insert();
	void Access();
	void Deletion();
	void Append();
	void Find();
	void Replace();
	void Compare();
	void Substr();
	void PrintResult(const string& v, string str = "");
private:
	string m_strContainer;
};

