#include "ContainerString.h"

void ContainerString::Construction()
{
	string v1(3, 'e');
	PrintResult(v1, "string v1(3, 'e')");
	string v2("hello");
	PrintResult(v2, "string v2(hello)");
	string v3=v2;
	PrintResult(v3, "string v3=v2");
}

void ContainerString::Assignment()
{
	m_strContainer = "str";
	PrintResult(m_strContainer, "m_strContainer = str");
	m_strContainer = string("pause");
	PrintResult(m_strContainer, "m_strContainer = string(pause)");
	m_strContainer = 't';
	PrintResult(m_strContainer, "m_strContainer = 't'");
	m_strContainer.assign("png");
	PrintResult(m_strContainer, "m_strContainer.assign(png)");
	m_strContainer.assign("welcome", 4);
	PrintResult(m_strContainer, "m_strContainer.assign(welcome, 4)");
	m_strContainer.assign(string("list"));
	PrintResult(m_strContainer, "m_strContainer.assign(string(list))");
	m_strContainer.assign(3, 'u');
	PrintResult(m_strContainer, "m_strContainer.assign(3, 'u')");
}

void ContainerString::Capacity()
{
}

void ContainerString::OtherOp()
{
	Append();
	Find();
	Replace();
	Compare();
	Substr();
}

void ContainerString::Insert()
{
	m_strContainer = "";
	m_strContainer.insert(0, "eee");
	PrintResult(m_strContainer, "m_strContainer.insert(0, eee)");
	m_strContainer.insert(2, string("ccc"));
	PrintResult(m_strContainer, "m_strContainer.insert(2, string(ccc))");
	m_strContainer.insert(4, 3, 'f');
	PrintResult(m_strContainer, "m_strContainer.insert(4, 3, 'f')");
}

void ContainerString::Access()
{
	m_strContainer[2] = 'd';
	PrintResult(m_strContainer, "m_strContainer[2] = 'd'");
	m_strContainer.at(4) = 't';
	PrintResult(m_strContainer, "m_strContainer.at(4) = 't'");
}

void ContainerString::Deletion()
{
	m_strContainer.erase(1, 2);
	PrintResult(m_strContainer, "m_strContainer.erase(1, 2)");
}

void ContainerString::Append()
{
	cout << "  ---拼接--: " << endl;
	m_strContainer = "";
	m_strContainer += 'I';
	PrintResult(m_strContainer, "m_strContainer += 'I'");
	m_strContainer += " love ";
	PrintResult(m_strContainer, "m_strContainer +=  love ");
	m_strContainer += string("play ");
	PrintResult(m_strContainer, "m_strContainer += string(play )");
	m_strContainer.append("game");
	PrintResult(m_strContainer, "m_strContainer.append(game)");
	m_strContainer.append(":LOL DNF", 4);
	PrintResult(m_strContainer, "m_strContainer.append(:LOL DNF, 4)");
	m_strContainer.append(string("LOL and DNF"), 3, 4);
	PrintResult(m_strContainer, "m_strContainer.append(string(LOL and DNF), 3, 4)");
	m_strContainer.append(string(" DNF"));
	PrintResult(m_strContainer, "m_strContainer.append(string( DNF))");
	m_strContainer.append(1, '!');
	PrintResult(m_strContainer, "m_strContainer.append(1, '!')");
}

void ContainerString::Find()
{
	cout << "  ---查找--: " << endl;
	int pos=string("bcabcdeabcd").find(string("abc"), 0);
	PrintResult(to_string(pos), "int pos=string(bcabcdeabcd).find(string(abc), 0)");
	pos = string("bcabcdeabcd").find("abc", 3);
	PrintResult(to_string(pos), "pos = string(bcabcdeabcd).find(abc, 3)");
	pos = string("bcabcdeabcd").find("bcd", 0, 2);
	PrintResult(to_string(pos), "pos = string(bcabcdeabcd).find(bcd, 0, 2)");
	pos = string("bcabcdeabcd").find('c', 3);
	PrintResult(to_string(pos), "pos = string(bcabcdeabcd).find('c', 3)");
	pos = string("bcabcdeabcd").rfind(string("abc"), 0);
	PrintResult(to_string(pos), "pos = string(bcabcdeabcd).rfind(string(abc), 0)");
	pos = string("bcabcdeabcd").rfind("abc", 3);
	PrintResult(to_string(pos), "pos = string(bcabcdeabcd).rfind(abc, 3)");
	pos = string("bcabcdeabcd").rfind("bcd", 0, 2);
	PrintResult(to_string(pos), "pos = string(bcabcdeabcd).rfind(bcd, 0, 2)");
	pos = string("bcabcdeabcd").rfind('c', 3);
	PrintResult(to_string(pos), "pos = string(bcabcdeabcd).rfind('c', 3)");
}

void ContainerString::Replace()
{
	cout << "  ---替换--: " << endl;
	m_strContainer.replace(0, 1, string("you"));
	PrintResult(m_strContainer, "m_strContainer.replace(0, 1, string(you))");
	m_strContainer.replace(0, 3, "he");
	PrintResult(m_strContainer, "m_strContainer.replace(0, 1, he)");
}

void ContainerString::Compare()
{
	cout << "  ---比较--: " << endl;
	int ret = string("hello").compare(string("hEllo"));
	PrintResult(to_string(ret), "int ret = string(hello).compare(string(hEllo))");
	ret = string("hello").compare("kello");
	PrintResult(to_string(ret), "ret = string(hello).compare(kello)");
}

void ContainerString::Substr()
{
	cout << "  ---子串--: " << endl;
	cout << "string(abcdefg).substr(2, 3): " << string("abcdefg").substr(2, 3) << endl;
}

void ContainerString::PrintResult(const string& v, string str)
{
	cout << str + ": ";
	cout << v;
	cout << endl;
}


