#pragma once
#include <iostream>
using namespace std;
class ContainerBase
{
public:
	/*!
	 *  ����
	 */
	virtual void Construction()=0;
	/*!
	 *  ����
	 */
	virtual void Insert() = 0;
	/*!
	 *  ɾ��
	 */
	virtual void Deletion() = 0;
	/*!
	 *  ������С
	 */
	virtual void Capacity() = 0;
	/*!
	 *  ��ֵ
	 */
	virtual void Assignment() = 0;
	/*!
	 *  ��ȡ
	 */
	virtual void Access() = 0;
};

