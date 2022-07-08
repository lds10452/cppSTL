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