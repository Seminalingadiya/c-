#include<iostream.h>
#include<conio.h>
class demo
{
   public:
   int val;
   void input(int v)
   {
      val=v;
   }
   void display()
   {
      cout<<"\n value is:"<<val;
   }
};
void main()
{
   clrscr();
   demo d1;
   d1.input(10);
   int *ptr=&d1.val;
   int demo::*p=&demo::val;
   cout<<"\n pointer value is :"<<ptr;
   cout<<"\n pointer assign value is:"<<*ptr;
   //cout<<"\n member pointer value is:"<<demo::p;
   cout<<"\n member pointer assign value is:"<<d1.*p;
   d1.display();
   getch();
}