#include <iostream>
using namespace std;

class A{
    int a;
    public:
    A(int x){
        a=x;
        cout<<"Virtual Base A..."<<endl;
    }
};

class B:virtual public A{
    public:
    B(int i):A(i){cout<<"Virtual Base B..."<<endl;}
};

class C:virtual public A{
    int x;
    public:
    C(int i):A(i){cout<<"Constructing C..."<<endl;
    x=i;
    }
};

class ABC:public C,public B{
    public:
    //虚基类由最终派生类初始化
    ABC(int i,int j,int k):C(i),B(j),A(i)//必须对A进行初始化
    {
        cout<<"Constructing ABC..."<<endl;
    }
};

int main(){
    ABC obj(1,2,3);
    system("pause");
    return 0;
}

/*
先调用C的，C继承A,
Virtual Base A...
Constructing C...
Virtual Base B...
Constructing ABC...
*/