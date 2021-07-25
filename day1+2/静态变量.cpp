#include<iostream>
using namespace std;

int i=1;
int main(void){
    static int a;//静态局部变量
    int b=-10;
    int c=0;

    void other(void);

    cout<<"---MAIN---"<<endl;
cout<<"i:"<<i<<"\ta:"<<a<<"\tb:"<<b<<"\tc:"<<c<<endl;

    c=c+8;
    other();
    cout<<"---MAIN---\n";
cout<<"i:"<<i<<"\ta:"<<a<<"\tb:"<<b<<"\tc:"<<c<<endl;
    i=i+10;
    other();

    other();
    system("pause");
    return 0;
    }

    void other(void){
static int a=2;
static int b;
//a,b静态局部变量，全局寿命，局部可见
//第一次进入函数被初始化
int c=10;//c局部变量，具有动态生存期
//每次进入函数都初始化
a=a+2;
i=i+32;
c=c+5;
cout<<"----OTHER------\n";
cout<<"i:"<<i<<"\ta:"<<a<<"\tb:"<<b<<"\tc:"<<c<<endl;
b=a;
}