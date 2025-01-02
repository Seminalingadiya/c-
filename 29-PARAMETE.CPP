#include<iostream.h>
#include<conio.h>
class A
{
   public:
   A()
   {
      cout<<"\n Good Morning from default constructor";
   }
   A(char *a)
   {
      cout<<"\n from parameterized constructor Good Bye..."<<a;
   }
};
void main()
{
   clrscr();
   A a1;
   A a2("XYZ");
   getch();
}