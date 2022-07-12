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

