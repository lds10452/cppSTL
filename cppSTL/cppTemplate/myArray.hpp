#pragma once
#include <iostream>
using namespace std;

template<class T>
class MyArray
{
	T* m_pAddress;
	unsigned int m_nOpacity;
	unsigned int m_nSize;
public:
	MyArray(int opacity);
	~MyArray();
	MyArray(const MyArray& p);
	const MyArray& operator=(const MyArray& p);
	T& operator[](int index);
	void PushBack(const T& p);
	void PopBack();
	int GetOpacity();
	int GetSize();
};

template<class T>
MyArray<T>::MyArray(int opacity)
{
	m_nOpacity = opacity;
	m_nSize = 0;
	m_pAddress = new T[opacity];
}

template<class T>
MyArray<T>::~MyArray()
{
	if (m_pAddress)
		delete[] m_pAddress;
	m_nOpacity = 0;
	m_nSize = 0;
}

template<class T>
MyArray<T>::MyArray(const MyArray<T>& p)
{
	m_nOpacity = p.m_nOpacity;
	m_nSize = p.m_nSize;
	m_pAddress = new T[m_nOpacity];
	for (unsigned int i = 0; i < m_nSize; i++)
	{
		m_pAddress[i] = p.m_pAddress[i];
	}
}

template<class T>
const MyArray<T>& MyArray<T>::operator=(const MyArray<T>& p)
{
	if (m_pAddress)
	{
		delete[] m_pAddress;
		m_pAddress = NULL;
	}
	m_nOpacity = p.m_nOpacity;
	m_nSize = p.m_nSize;
	m_pAddress = new T[m_nOpacity];
	for (unsigned int i = 0; i < m_nSize; i++)
	{
		m_pAddress[i] = p.m_pAddress[i];
	}
	return *this;
}

template<class T>
T& MyArray<T>::operator[](int index)
{
	return m_pAddress[index];
}

template<class T>
void MyArray<T>::PushBack(const T& p)
{
	if (m_nOpacity == m_nSize)
	{
		return;
	}
	m_pAddress[m_nSize] = p;
	m_nSize++;
}

template<class T>
void MyArray<T>::PopBack()
{
	if (m_nSize == 0)
	{
		return;
	}
	m_nSize--;
}

template<class T>
int MyArray<T>::GetOpacity()
{
	return m_nOpacity;
}

template<class T>
int MyArray<T>::GetSize()
{
	return m_nSize;
}