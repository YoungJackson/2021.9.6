#include<iostream>
using namespace std;

class A{
    public: 
    void vf(){cout<<"I come from class A"<<endl;}
};

class B:public A{};
class C:public A{};
class D:public B,public C{};

int main() {
    D d;
    //d.vf();//error  d.vf²»Ã÷È·

    system("pause");
    cout<<__cplusplus<<endl;
     return 0;
}

// typedef struct Stag{int a,b,c,d;}S;

// int main(){
//     double x=0;
//     double *p=&x;
//     double &r=x;
//     cout<<sizeof(x)<<endl;
//     cout<<sizeof(p)<<endl;
//     cout<<sizeof(r)<<endl;

// cout<<p<<endl;
// cout<<*p<<endl;
// cout<<x<<endl;
// cout<<r<<endl;
// cout<<&x<<endl;
// cout<<&r<<endl;

// S s;
// S &rs=s;
// cout<<sizeof(s)<<' '<<sizeof(rs)<<endl;
//     return 0;
// }
