#include<iostream.h>
#include<conio.h>
class demo1
{
   public:
   void display1()
   {
      cout<<"Demo 1 class method called"<<endl;
   }
};
class demo2
{
   public:
   void display2()
   {
      cout<<"Demo 2 class method called"<<endl;
   }
};
class derived : public demo1 , public demo2
{
   public:
   void dispderived()
   {
      cout<<"Derived class method called"<<endl;
   }
};
void main()
{
   clrscr();
   derived obj;
   obj.display1();
   obj.display2();
   obj.dispderived();
   getch();
}
