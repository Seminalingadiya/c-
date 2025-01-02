#include"iostream.h"
#include"conio.h"
class base
{
   public:
      base()
      {
	 cout<<"\n Good Morning from parent class...";
      }
      virtual void display()=0;
};
class derived : base
{
   public:
      derived()
      {
	 cout<<"\n Good Morning from child class...";
      }
      void display()
      {
	 cout<<"\n Good Byee from derived display...";
      }
};
void main()
{
   clrscr();
   derived D1;
   D1.display();
   getch();
}
