#include<iostream.h>
#include<conio.h>
class demoA
{
   public:
   int a;
   demoA()
   {
      cout<<"\n Good Morning from Demo A constructor...";
   }
   void displayA()
   {
      cout<<"\n value of A is :"<<a;
   }
};
class demoB : public demoA
{
   public:
   int b;
   demoB()
   {
      cout<<"\n Good Morning from Demo B constructor...";
   }
   void displayB()
   {
      cout<<"\n value of B is :"<<b;
   }
};
void main()
{
   clrscr();
   demoB B1;
   B1.a=10;
   B1.b=20;
   B1.displayA();
   B1.displayB();
   getch();
}
