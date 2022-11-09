#include "myArray.hpp"
#include <ostream>

template<typename T>
ostream& operator<<(ostream& out, MyArray<T>& p)
{
	out << "data:";
	for (int i = 0; i < p.GetSize(); i++)
	{
		out << p[i] << "  ";
	}
	out << "\n" << "opacity:" << p.GetOpacity() << "  size:" << p.GetSize();
	return out;
}

void test01()
{
	MyArray<int> array(5);
	for (int i = 0; i < 5; i++)
	{
		array.PushBack(i);
	}
	cout << array << endl;
	array.PopBack();
	MyArray<int> array1(array);
	cout << array1 << endl;
	MyArray<int> array2(10);
	array2 = array;
	cout << array2 << endl;
}

class Student
{
public:
	string m_strName;
	int m_nAge;
	Student(){}
	Student(string name,int age):m_strName(name),m_nAge(age){}
};

void printStudent(MyArray<Student>& p)
{
	cout << "opacity:" << p.GetOpacity() << "  size:" << p.GetSize() << endl;
	for (int i = 0; i < p.GetSize(); i++)
	{
		cout << "name:" << p[i].m_strName << "  age:" << p[i].m_nAge << endl;
	}
}

void test02()
{
	MyArray<Student> students(6);
	Student student1("aaa", 10);
	Student student2("bbb", 20);
	Student student3("ccc", 30);
	Student student4("ddd", 40);
	students.PushBack(student1);
	students.PushBack(student2);
	students.PushBack(student3);
	students.PushBack(student4);
	printStudent(students);

}

void testMyArray()
{
	//test01();
	test02();
}