#ifndef CLOCK
#define CLOCK
class Clock
{
private:
    int Hour,Minute,Second;
public:
   Clock(int NewH,int NewM,int NewS);
   Clock(Clock &c);//�������캯����������ӣ����������Զ�����һ���������캯�����Ӳ��Ӷ�����ֱ��ʹ��
void SetTime(int NewH,int NewM,int NewS);
void ShowTime();
    ~Clock();//�������������������Զ�����һ��Ĭ�ϵ���������
};
#endif


/*
#ifndef   ��ʶ��
       �����1
#else
       �����2
#endif
�������ʶ����δ������������������1�������������2��
*/