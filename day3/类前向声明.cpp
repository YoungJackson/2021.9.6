/*
使用前向引用声明虽然可以解决一些问题，但它并不是万能的。需要注意的是，
尽管使用了前向引用声明，但是在提供一个完整的类声明之前，不能声明该类的对象，
也不能在内联成员函数中使用该类的对象。请看下面的程序段：
*/

//第一种
#include<iostream>
/*class Fred;
class Barney{
    Fred x;//错误，类Fred的声明不完善
};
class Fred{
    Barney y;
};*/
//第二种
class Fred;//前向引用声明

class Barney{
    public:
    void method(){
     //   x->ya
    }
    private:
    Fred *x;//正确，经过前向引用声明，可以声明Fred类的对象指针
};

class Fred
{
private:
    /* data */
public:
    void yaya();
private:
Barney *y;

};


