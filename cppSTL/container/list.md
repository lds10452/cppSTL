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