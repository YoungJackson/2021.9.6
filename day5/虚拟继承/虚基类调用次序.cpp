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

/*���н��
Constructing B
Constructing A
Constructing B1

Constructing A       //��ΪB�Ѿ�������̳�һ���ˣ����Բ����ٵ���
Constructing B2

Constructing A     //������̳еĵ����꣬�ٵ��ó�Ա�������������Լ��Ĺ��캯��
Constructing D
*/