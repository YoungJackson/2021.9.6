#include<iostream>
using namespace std;

int main(int argc,char const *argv[]){
    int x1(5);
    int x2(7);
    swap(x1,x2);
    cout<<"x1="<<x1<<"\tx2="<<x2<<endl;
    system("pause");
    return 0;
}

void swap(int &a,int & b){
    int t;
    t=a;
    a=b;
    b=t;
}