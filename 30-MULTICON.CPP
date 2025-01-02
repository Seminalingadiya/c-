#include<iostream.h>
#include<conio.h>
class arithconst
{
   public:
   float x,y,a;
   arithconst()
   {
      x=50.5;
      y=30.5;
   }
   arithconst(float x)
   {
      x=a;
      y=20.5;
   }
   arithconst(float a,float b)
   {
      x=a;
      y=b;
   }
   void addition()
   {
      cout<<"\n Addition is :"<<(x+y);
   }
   void substraction()
   {
      cout<<"\n Substraction is :"<<(x-y);
   }
   void multiplication()
   {
      cout<<"\n Multiplication is :"<<(x*y);
   }
   void division()
   {
      cout<<"\n Division is :"<<(x/y);
   }
  // void modulus()  {   cout<<"\n Modulus is :"<<(x%y);   }
};
void main()
{
   clrscr();
   arithconst ac1;
   arithconst ac2(10.5);
   arithconst ac3(5.5,5.5);

   cout<<"\n Default constructor data :";
   ac1.addition();
   ac1.substraction();
   ac1.multiplication();
   ac1.division();
   //ac1.modulus();

   cout<<"\n single parameter constructor data :";
   ac2.addition();
   ac2.substraction();
   ac2.multiplication();
   ac2.division();
   //ac2.modulus();

   cout<<"\n two parameter constructor data :";
   ac3.addition();
   ac3.substraction();
   ac3.multiplication();
   ac3.division();
   //ac3.modulus();
   getch();
}

