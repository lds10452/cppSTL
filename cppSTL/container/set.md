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

所有元素在插入时自动被排序，利用仿函数可以改变排序规则。

set和multiset区别：

set不允许容器中有重复的元素，insert会返回结果，表示是否插入成功

multiset允许容器中有重复的元素，不返回结果