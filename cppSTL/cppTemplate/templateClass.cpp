#include<iostream>
using namespace std;

template<class nameType, class ageType = int> class Person;
template<typename nameType, typename ageType>
void printPerson2(Person<nameType, ageType>& p);

template<class nameType,class ageType>	//可以有默认参数
class Person
{
	friend void printPerson2<>(Person<nameType, ageType>& p);//需要加<>,建议类内实现
	nameType m_strName;
	ageType m_nAge;
public:
	Person(nameType name,ageType age):m_strName(name),m_nAge(age){}
	void showPerson();
	/*{
		cout << m_strName << "  " << m_nAge << endl;
	}*/
};
//成员函数类外实现,成员函数创建时机在调用阶段，分文件编写链接不到（声明和实现写入同一个文件即可）
template<class nameType,class ageType>
void Person<nameType, ageType>::showPerson()
{
	cout << m_strName << "  " << m_nAge << endl;
}
//类模板对象作为函数参数传入方式
//1.指定传入的类型
void printPerson1(Person<string>& p)
{
	p.showPerson();
}
//2.参数模板化
template<typename nameType, typename ageType>
void printPerson2(Person<nameType, ageType>& p)
{
	cout << p.m_strName << "  " << p.m_nAge << endl;
	cout << "T1:" << typeid(nameType).name() << "	T2:" << typeid(ageType).name() << endl;
}
//3.整个类模板化
template<typename T>
void printPerson3(T& p)
{
	p.showPerson();
	cout << "T:" << typeid(T).name() << endl;
}
//class Son:public Person<string,int>//需要指定父类参数类型才能继承来给子类分配内存
template<class T1,class T2,class T3>//也可灵活给出父类模板参数类型
class Son :public Person<T1, T3>
{
	T2 m_nHeight;
public:
	Son(T1 name,T2 height,T3 age):m_nHeight(height),Person<T1,T3>(name,age){}
	void showPerson()
	{
		cout << m_nHeight<<"  ";
		Person<T1,T3>::showPerson();
	}
};
void testTemplateClass()
{
	//Person p("aaa", 10);	//error,不能自动类型推导
	Person<string> p("bbb", 10);
	p.showPerson();

	printPerson1(p);
	printPerson2(p);
	printPerson3(p);

	Son<string, int, int> s("ccc", 20, 30);
	s.showPerson();
}