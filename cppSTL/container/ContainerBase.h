#pragma once
#include <iostream>
using namespace std;
class ContainerBase
{
public:
	/*!
	 *  构造
	 */
	virtual void Construction()=0;
	/*!
	 *  插入
	 */
	virtual void Insert() = 0;
	/*!
	 *  删除
	 */
	virtual void Deletion() = 0;
	/*!
	 *  容量大小
	 */
	virtual void Capacity() = 0;
	/*!
	 *  赋值
	 */
	virtual void Assignment() = 0;
	/*!
	 *  存取
	 */
	virtual void Access() = 0;
};

