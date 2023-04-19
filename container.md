### 1.vector

![在这里插入图片描述](https://img-blog.csdnimg.cn/20200610135524421.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MTk2OTY5MA==,size_16,color_FFFFFF,t_70)

构造

```c++
vector<T> v; //采用模板实现类实现，默认构造函数
vector(v.begin(), v.end());//将v[begin(), end())区间中的元素拷贝给本身。
vector(n, elem);//构造函数将n个elem拷贝给本身。
vector(const vector &vec);//拷贝构造函数。
```

赋值

```c++
assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem);//将n个elem拷贝赋值给本身。
vector& operator=(const vector  &vec);//重载等号操作符

swap(vec);	// 将vec与本身的元素互换。
```

大小

```c++
size();//返回容器中元素的个数
empty();//判断容器是否为空
resize(int num);//重新指定容器的长度为num，若容器变长，则以默认值0填充新位置。反之则末尾超出容器长度的元素被删除。
resize(int num, elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。反之则末尾超出容器长度的元素被删除。
capacity();//容器的容量

reserve(int len);	//容器预留len个元素长度，预留位置不初始化，元素不可访问。
					//预留位置，避免多次扩容。
```

存取

```c++
at(int idx); //返回索引idx所指的数据，如果idx越界，抛出out_of_range异常。
operator[];//返回索引idx所指的数据，越界时，运行直接报错
front();//返回容器中第一个数据元素 
back();//返回容器中最后一个数据元素
```

插入

```c++
insert(const_iterator pos, int count,ele);//迭代器指向位置pos插入count个元素ele.
insert(const_iterator pos, ele); //迭代器指向位置pos插入元素ele
push_back(ele); //尾部插入元素ele
```

删除

```c++
pop_back();//删除最后一个元素
erase(const_iterator start, const_iterator end);//删除迭代器[start，end)之间的元素
erase(const_iterator pos);//删除迭代器指向的元素
clear();//删除容器中所有元素
```

说明：

resize影响容量和大小。reserve影响容量。

利用vector<int>(v).swap(v);收缩容量。

构造：构造对象初始化；赋值：清空容器原元素再赋值；插入：在原容器基础插入数据。

erase(iterator start, iterator end); 删除迭代器从start到end之间的元素，不包含end位置元素



### 2.deque

![在这里插入图片描述](https://img-blog.csdnimg.cn/20200612152352632.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MTk2OTY5MA==,size_16,color_FFFFFF,t_70)

构造

```c++
deque<T> deqT;//默认构造形式
deque(beg, end);//构造函数将[beg, end)区间中的元素拷贝给本身。
deque(n, elem);//构造函数将n个elem拷贝给本身。
deque(const deque &deq);//拷贝构造函数。
```

赋值

```c++
assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem);//将n个elem拷贝赋值给本身。
deque& operator=(const deque &deq); //重载等号操作符

swap(deq);// 将deq与本身的元素互换
```

大小

```c++
deque.size();//返回容器中元素的个数
deque.empty();//判断容器是否为空
deque.resize(num);//重新指定容器的长度为num,若容器变长，则以默认值0填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
deque.resize(num, elem); //重新指定容器的长度为num,若容器变长，则以elem值填充新位置,如果容器变短，则末尾超出容器长度的元素被删除。
```

存取

```c++
at(idx);//返回索引idx所指的数据，如果idx越界，抛出out_of_range。
operator[];//返回索引idx所指的数据，如果idx越界，不抛出异常，直接出错。
front();//返回第一个数据。
back();//返回最后一个数据
```

插入

```c++
push_back(elem);//在容器尾部添加一个数据
push_front(elem);//在容器头部插入一个数据
insert(pos,elem);//在pos位置插入一个elem元素的拷贝，返回新数据的位置。
insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
```

删除

```c++
pop_back();//删除容器最后一个数据
pop_front();//删除容器第一个数据
clear();//移除容器的所有数据
erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
erase(pos);//删除pos位置的数据，返回下一个数据的位置。
```

说明：

deque较vector的区别在于：

1.deque可以双端操作。

2.没有容量概念，避开了像vector容量不足，需要重新配置空间，复制，释放的轮回。

3.由于其复杂的迭代器架构，访问元素的效率比vector低。



### 3.list

![img](https://img-blog.csdnimg.cn/20200612154313732.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MTk2OTY5MA==,size_16,color_FFFFFF,t_70)

构造

```c++
list<T> lstT;//list采用采用模板类实现,对象的默认构造形式：
list(beg,end);//构造函数将[beg, end)区间中的元素拷贝给本身。
list(n,elem);//构造函数将n个elem拷贝给本身。
list(const list &lst);//拷贝构造函数。
```

赋值

```c++
assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem);//将n个elem拷贝赋值给本身。
list& operator=(const list &lst);//重载等号操作符
swap(lst);//将lst与本身的元素互换。
```

大小

```c++
size();//返回容器中元素的个数
empty();//判断容器是否为空
resize(num);//重新指定容器的长度为num，若容器变长，则以默认值0填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
resize(num, elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
```

存取

```c++
front();//返回第一个元素。
back();//返回最后一个元素。
```

插入

```c++
push_back(elem);//在容器尾部加入一个元素
push_front(elem);//在容器开头插入一个元素
insert(pos,elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值。
insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值。
```

删除

```c++
pop_front();//从容器开头移除第一个元素
pop_back();//删除容器中最后一个元素
clear();//移除容器的所有数据
erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置。
erase(pos);//删除pos位置的数据，返回下一个数据的位置。
remove(elem);//删除容器中所有与elem值匹配的元素。(自定义数据类型，必须重载等号运算符)
```

优点：

动态分配空间，用多少分配多少，不会造成内存浪费。

插入删除快速，修改指针即可，不需要移动大量元素。

缺点：

空间（指针域）和时间（遍历）耗费较大

说明：

不支持随机访问。

插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的。

erase(pos);会使迭代器pos失效。

不能begin()+2的操作。

所有不支持随机访问的迭代器，不可以用系统提供的算法，所以这个类内部会提供，比如list的反转和排序API。



### 4.stack

![在这里插入图片描述](https://img-blog.csdnimg.cn/2020061215355733.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MTk2OTY5MA==,size_16,color_FFFFFF,t_70)

构造

```c++
stack<T> stkT;//stack采用模板类实现， stack对象的默认构造形式： 
stack(const stack &stk);//拷贝构造函数
```

赋值

```c++
stack& operator=(const stack &stk);//重载等号操作符
```

大小

```c++
empty();//判断堆栈是否为空
size();//返回堆栈的大小
```

存取

```c++
top();//返回栈顶元素
```

插入

```c++
push(elem);//向栈顶添加元素
```

删除

```c++
pop();//从栈顶移除第一个元素
```

说明：

先进后出。

不提供迭代器，不允许有遍历的行为，只有栈顶元素才能被使用。



### 5.queue

![在这里插入图片描述](https://img-blog.csdnimg.cn/20200612154022390.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MTk2OTY5MA==,size_16,color_FFFFFF,t_70)

构造

```c++
queue<T> queT;//queue采用模板类实现，queue对象的默认构造形式：
queue(const queue &que);//拷贝构造函数
```

赋值

```c++
queue& operator=(const queue &que);//重载等号操作符
```

大小

```c++
empty();//判断队列是否为空
size();//返回队列的大小
```

存取

```c++
back();//返回最后一个元素
front();//返回第一个元素
```

插入

```c++
push(elem);//往队尾添加元素
```

删除

```c++
pop();//从队头移除第一个元素
```

说明：

先进先出。队尾加元素，队头移除元素。

不提供迭代器，不允许有遍历的行为，只有队头和队尾元素才能被使用。



### 6.set

构造

```c++
set<T> st;//set默认构造函数：
mulitset<T> mst; //multiset默认构造函数: 
set(const set &st);//拷贝构造函数
```

赋值

```c++
set& operator=(const set &st);//重载等号操作符

swap(st);//交换两个集合容器
```

大小

```c++
size();//返回容器中元素的数目
empty();//判断容器是否为空
```

存取

```c++

```

插入

```c++
insert(elem);//在容器中插入元素。
```

删除

```c++
clear();//清除所有元素
erase(pos);//删除pos迭代器所指的元素，返回下一个元素的迭代器。
erase(beg, end);//删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
erase(elem);//删除容器中值为elem的元素。
```

其他

```c++
find(key);//查找键key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
count(key);//查找键key的元素个数

//对组的创建方式：
pair<type, type> p ( value1, value2 ); 
pair<type, type> p = make_pair( value1, value2 );
//对组的赋值
pair<type, type> p1 = p;
```

说明：

所有元素在插入时自动被排序，默认排序规则为从小到大，利用仿函数可以改变排序规则。

对于自定义数据类型，set必须指定排序规则才可以插入数据。

set和multiset区别：

set不允许容器中有重复的元素，insert会返回结果，表示是否插入成功

multiset允许容器中有重复的元素，不返回结果



### 7.map

构造

```c++
map<T1, T2> mapTT;//map默认构造函数: 
map(const map &mp);//拷贝构造函数
```

赋值

```c++
map& operator=(const map &mp);//重载等号操作符

swap(mp);//交换两个集合容器
```

大小

```c++
size();//返回容器中元素的数目
empty();//判断容器是否为空
```

存取

```c++

```

插入

```c++
insert(elem); //在容器中插入元素。
```

删除

```c++
clear();//删除所有元素
erase(pos);//删除pos迭代器所指的元素，返回下一个元素的迭代器。
erase(beg,end);//删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
erase(keyElem);//删除容器中key为keyElem的对组。
```

其他

```c++
find(key);//查找键key是否存在,若存在，返回该键的元素的迭代器；/若不存在，返回map.end();
count(keyElem);//返回容器中key为keyElem的对组个数。要么是0，要么是1。对multimap来说，值可能大于1。
```

说明：

map中所有元素都是pair

所有元素都会根据元素的键值自动排序，默认排序规则为从小到大，利用仿函数可以改变排序规则。

键值不可修改，实值可修改。

对于自定义数据类型，set必须指定排序规则才可以插入数据。

map和multimap**区别**：

map不允许容器中有重复key值元素

multimap允许容器中有重复key值元素



### 8.string

构造

```c++
string();//创建一个空的字符串 例如: string str;      
string(const string& str);//使用一个string对象初始化另一个string对象
string(const char* s);//使用字符串s初始化
string(int n, char c);//使用n个字符c初始化
```

赋值

```c++
string& operator=(const char* s);//char*类型字符串 赋值给当前的字符串
string& operator=(const string &s);//把字符串s赋给当前的字符串
string& operator=(char c);//字符赋值给当前的字符串
string& assign(const char *s);//把字符串s赋给当前的字符串
string& assign(const char *s, int n);//把字符串s的前n个字符赋给当前的字符串
string& assign(const string &s);//把字符串s赋给当前字符串
string& assign(int n, char c);//用n个字符c赋给当前字符串
string& assign(const string &s, int start, int n);//将s从start开始n个字符赋值给字符串
```

大小

```c++

```

存取

```c++
char& operator[](int n);//通过[]方式取字符
char& at(int n);//通过at方法获取字符
```

插入

```c++
string& insert(int pos, const char* s); //插入字符串
string& insert(int pos, const string& str); //插入字符串
string& insert(int pos, int n, char c);//在指定位置插入n个字符c
```

删除

```c++
string& erase(int pos, int n = npos);//删除从Pos开始的n个字符 
```

拼接

```c++
string& operator+=(const string& str);//重载+=操作符
string& operator+=(const char* str);//重载+=操作符
string& operator+=(const char c);//重载+=操作符
string& append(const char *s);//把字符串s连接到当前字符串结尾
string& append(const char *s, int n);//把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s);//同operator+=()
string& append(const string &s, int pos, int n);//把字符串s中从pos开始n个字符连接到当前字符串结尾
string& append(int n, char c);//在当前字符串结尾添加n个字符c
```

查找

```c++
int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
int find(const char* s, int pos = 0) const;  //查找s第一次出现位置,从pos开始查找
int find(const char* s, int pos, int n) const;  //从pos位置查找s的前n个字符第一次位置
int find(const char c, int pos = 0) const;  //查找字符c第一次出现位置
int rfind(const string& str, int pos = npos) const;//查找str最后一次位置,从pos开始查找
int rfind(const char* s, int pos = npos) const;//查找s最后一次出现位置,从pos开始查找
int rfind(const char* s, int pos, int n) const;//从pos查找s的前n个字符最后一次位置
int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
```

替换

```c++
string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
string& replace(int pos, int n, const char* s); //替换从pos开始的n个字符为字符串s
```

比较

```c++
/*
compare函数在>时返回 1，<时返回 -1，==时返回 0。
比较区分大小写，比较时参考字典顺序，排越前面的越小。
大写的A比小写的a小。
*/
int compare(const string &s) const;//与字符串s比较
int compare(const char *s) const;//与字符串s比较
```

子串

```c++
string substr(int pos = 0, int n = npos) const;//返回由pos开始的n个字符组成的字符串
```

说明：

"123"为const char *类型，不可修改内容，string str=“123”，可修改内容，如str[0]=‘4’。

find由pos位置从左往右查找，rfind由pos位置从右往左查找，找不到返回-1；

```c++
string类型转换成const char*：const char* p = string("123").c_str();
```



