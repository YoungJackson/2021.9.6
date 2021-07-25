#include<iostream>
using namespace std;

class A{
    public:
    static void f(A a);
    private:
    int x;
};

void A::f(A a){

    //静态成员函数只能引用属于该类的静态数据成员或静态成员函数。
    cout<<a.x+8<<endl;
}

int main(){

    A a;
    a.f(A());
    system("pause");
    return 0;
}