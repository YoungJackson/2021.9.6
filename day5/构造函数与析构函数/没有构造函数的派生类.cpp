#include<iostream>
using namespace std;

class A
{
public:
    A(){cout<<"构造 A"<<endl;}
    ~A(){cout<<"析构 A"<<endl;}
};

class B:public A{
    public:
    ~B(){cout<<"析构 B"<<endl;}
};

int main(){
    B b;
    system("pause");
}


// 构造 A
// 请按任意键继续. . . 
// 析构 B
// 析构 A