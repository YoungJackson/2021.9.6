#include<iostream>
using namespace std;

class A{
public:
A(){cout<<"Constructing A "<<endl;}
~A(){cout<<"Destructing A "<<endl;}
};

class B
{
public:
B(){cout<<"Constructing B "<<endl;}
~B(){cout<<"Destructing B "<<endl;}
};

class C
{
public:
C(){cout<<"Constructing C "<<endl;}
~C(){cout<<"Destructing C "<<endl;}
};

class D:public C
{
public:
    D(){cout<<"Constructing D"<<endl;}
    ~D(){cout<<"Destructing D "<<endl;}

    B b;
    A a;
    C c;
};

int main(){
    D d;
    return 0;
}


// Constructing C 基类
// Constructing B 成员
// Constructing A 成员
// Constructing C 成员
// Constructing D 自身
// Destructing D
// Destructing C
// Destructing A
// Destructing B
// Destructing C