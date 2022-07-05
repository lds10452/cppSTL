构造

```c++
vector<T> v; //采用模板实现类实现，默认构造函数
vector(v.begin(), v.end());//将v[begin(), end())区间中的元素拷贝给本身。
vector(n, elem);//构造函数将n个elem拷贝给本身。
vector(const vector &vec);//拷贝构造函数。
//例子 使用第二个构造函数 我们可以...
int arr[] = {2,3,4,1,9};
vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));
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
resize(int num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。反之则末尾超出容器长度的元素被删除。
resize(int num, elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。反之则末尾超出容器长度的元素被删除。
capacity();//容器的容量

reserve(int len);	//容器预留len个元素长度，预留位置不初始化，元素不可访问。
					//预留位置，避免多次扩容
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
erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
erase(const_iterator pos);//删除迭代器指向的元素
clear();//删除容器中所有元素
```
