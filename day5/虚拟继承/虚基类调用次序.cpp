#include <iostream>
using namespace std;

class A{
    int a;
    public:
    A(){cout<<"Constructing A"<<endl;}
};

class B{
    public:
    B(){cout<<"Constructing B"<<endl;}
};

class B1:virtual public B,virtual public A{
    public:
    B1(int i){cout<<"Constructing B1\n\n"<<endl;}
};

class B2:public A,virtual public B
{
public:
B2(int j){cout<<"Constructing B2\n"<<endl;}
};

class D:public B1,public B2{
    public:
    D(int m,int n):B1(m),B2(n){cout<<"Constructing D"<<endl;}
    A a;
};

int main(){
    D d(1,2);
    system("pause");
    return 0;
}

/*运行结果
Constructing B
Constructing A
Constructing B1

Constructing A       //因为B已经被虚拟继承一次了，所以不用再调用
Constructing B2

Constructing A     //把虚拟继承的调用完，再调用成员函数，最后调用自己的构造函数
Constructing D
*/