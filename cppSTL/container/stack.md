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