#include<iostream>
using namespace std;

/*
�ȹ����Ա���ٹ����������ù��캯����
*/

class A{
public:
A(){cout<<"���� A"<<endl;}
~A(){cout<<"���� A"<<endl;}
};

class B
{
public:
    B(){cout<<"���� B"<<endl;}
    ~B(){cout<<"���� B"<<endl;}
};

class C
{
public:
    C(){cout<<"���� C"<<endl;}
    ~C(){cout<<"���� C"<<endl;}
    B b;
    A a;
};

int main()
{
C c;
system("pause");
return 0;
}
// ���� B
// ���� A
// ���� C
// �밴���������. . . 
// ���� C
// ���� A
// ���� B