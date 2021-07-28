#include<iostream>
using namespace std;

/*
先构造成员，再构造自身（调用构造函数）
*/

class A{
public:
A(){cout<<"构造 A"<<endl;}
~A(){cout<<"析构 A"<<endl;}
};

class B
{
public:
    B(){cout<<"构造 B"<<endl;}
    ~B(){cout<<"析构 B"<<endl;}
};

class C
{
public:
    C(){cout<<"构造 C"<<endl;}
    ~C(){cout<<"析构 C"<<endl;}
    B b;
    A a;
};

int main()
{
C c;
system("pause");
return 0;
}
// 构造 B
// 构造 A
// 构造 C
// 请按任意键继续. . . 
// 析构 C
// 析构 A
// 析构 B