#include<iostream>
#include"clock.h"
using namespace std;

Clock::Clock(int NewH,int NewM,int NewS){
this->Hour=NewH;
this->Minute=NewM;
this->Second=NewS;
}

Clock::Clock(Clock &c){
    this->Hour=c.Hour;
    this->Minute=c.Minute;
    this->Second=c.Second;
}

void Clock::SetTime(int NewH,int NewM,int NewS){
//�Ӳ���thisָ��һ��
this->Hour=NewH;
this->Minute=NewM;
this->Second=NewS;
}

void Clock::ShowTime(){
    cout<<this->Hour<<":"<<this->Minute<<":"<<this->Second<<endl;
}
//��������
Clock::~Clock(){
}

int main(){
    Clock c(0,0,0);
    c.SetTime(10,20,30);
    c.ShowTime();
    //�������캯������
    Clock c1(c);
    c1.ShowTime();
    c.SetTime(90,98,100);
    c1.ShowTime();
    system("pause");
    return 0;
}