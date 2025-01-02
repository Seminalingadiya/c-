#include<iostream.h>
#include<conio.h>
class demoA
{
   public:
   demoA()
   {
      cout<<"\n from demoA constructor...";
   }
   void message()
   {
      cout<<"Good Morning";
   }
};
class demoB
{
   public:
   demoB(demoA d)
   {
      d.message();
   }
};
void main()
{
   clrscr();
   demoA DA;
   demoB DB(DA);
   getch();
}
