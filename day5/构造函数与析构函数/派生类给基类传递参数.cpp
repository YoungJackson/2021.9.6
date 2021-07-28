#include<iostream>
using namespace std;

class Point{
    private:
    int x,y;
    public:
    Point(int a,int b=0){
        x=a;y=b;
        cout<<"Constructing point ("<<x<<","<<y<<")"<<endl;
    }
};

class Line:public Point{
    protected:
    int len;
    public:
    Line(int a,int b,int l):Point(a,b){
        len=l;
        cout<<"Constructing Line,len...."<<len<<endl;
    }
};

int main(){
    Line L1(1,2,3);
    return 0;
}