#include<iostream.h>
#include<conio.h>
class constdemo
{
    public:
    void addition(int a,int b)const
    {
       cout<<"\n addition is:"<<(a+b);
    }
};
void main()
{
   constdemo cs;
   cs.addition(10,20);
   getch();
}
