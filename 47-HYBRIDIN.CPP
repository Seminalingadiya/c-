#include<iostream.h>
#include<conio.h>
//base class
class base
{
   public:
   void dispb()
   {
      cout<<"based class method called"<<endl;
   }
};
//derived class
class div1:public base
{
   public:
   void dispd1()
   {
      cout<<"Derived class method called"<<endl;
   }
};
//another derived class
class div2:public base
{
   public:
   void dispd2()
   {
      cout<<"Derived class method called"<<endl;
   }
};
//hybrid class
class hybrid:public div1,public div2
{
   public:
   void disph()
   {
      cout<<"hybrid class method called"<<endl;
   }
};
void main()
{
   clrscr();
   hybrid h;
   base b;
   b.dispb();
   h.dispd1();
   h.dispd2();
   h.disph();
   getch();
}
