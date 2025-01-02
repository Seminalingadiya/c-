#include<iostream.h>
#include<conio.h>
class AccessSpec
{
   private:
      int A;
   protected:
      int B;
   public:
      int C;
   AccessSpec()
   {
      A=1;
      B=2;
      C=3;
   }
   void display()
   {
      cout<<"\n value of A is :"<<A;
      cout<<"\n value of B is :"<<B;
      cout<<"\n value of C is :"<<C;
   }
};
class sub_class : public AccessSpec
{
   public:
   sub_class()
   {
      B=1000;
   }
   void displaysub()
   {
      //cout<<"\n sub class value of A is :"<<A;
      cout<<"\n sub class value of B is :"<<B;
      cout<<"\n sub class value of C is :"<<C;
   }
};
void main()
{
   clrscr();
   AccessSpec as;
   //as.A=10;
   //as.B=20;
   as.C=30;
   as.display();
   sub_class sc;
   //sc.A=100;
   //sc.B=200;
   sc.C=300;
   sc.displaysub();
   sc.display();
   getch();
}































