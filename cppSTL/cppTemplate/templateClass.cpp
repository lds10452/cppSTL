#include<iostream>
using namespace std;

template<class nameType, class ageType = int> class Person;
template<typename nameType, typename ageType>
void printPerson2(Person<nameType, ageType>& p);

template<class nameType,class ageType>	//������Ĭ�ϲ���
class Person
{
	friend void printPerson2<>(Person<nameType, ageType>& p);//��Ҫ��<>,��������ʵ��
	nameType m_strName;
	ageType m_nAge;
public:
	Person(nameType name,ageType age):m_strName(name),m_nAge(age){}
	void showPerson();
	/*{
		cout << m_strName << "  " << m_nAge << endl;
	}*/
};
//��Ա��������ʵ��,��Ա��������ʱ���ڵ��ý׶Σ����ļ���д���Ӳ�����������ʵ��д��ͬһ���ļ����ɣ�
template<class nameType,class ageType>
void Person<nameType, ageType>::showPerson()
{
	cout << m_strName << "  " << m_nAge << endl;
}
//��ģ�������Ϊ�����������뷽ʽ
//1.ָ�����������
void printPerson1(Person<string>& p)
{
	p.showPerson();
}
//2.����ģ�廯
template<typename nameType, typename ageType>
void printPerson2(Person<nameType, ageType>& p)
{
	cout << p.m_strName << "  " << p.m_nAge << endl;
	cout << "T1:" << typeid(nameType).name() << "	T2:" << typeid(ageType).name() << endl;
}
//3.������ģ�廯
template<typename T>
void printPerson3(T& p)
{
	p.showPerson();
	cout << "T:" << typeid(T).name() << endl;
}
//class Son:public Person<string,int>//��Ҫָ������������Ͳ��ܼ̳�������������ڴ�
template<class T1,class T2,class T3>//Ҳ������������ģ���������
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
	//Person p("aaa", 10);	//error,�����Զ������Ƶ�
	Person<string> p("bbb", 10);
	p.showPerson();

	printPerson1(p);
	printPerson2(p);
	printPerson3(p);

	Son<string, int, int> s("ccc", 20, 30);
	s.showPerson();
}