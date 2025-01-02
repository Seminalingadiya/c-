#include<iostream.h>
#include<conio.h>
class base
{
   public:
   virtual void display(int x=10)
   {
      cout<<"\n Hellowww good byee...";
      cout<<"\n base value of x is :"<<x;
   }
};
class derived : public base
{
   public:
   virtual void display(int x=100)
   {
      cout<<"\n Thank you for calling me...";
      cout<<"\n derived value of x is :"<<x;
   }
};
void main()
{
   clrscr();
   base *b=new derived();
   b->display();
   b->display(1000);
   getch();
}
