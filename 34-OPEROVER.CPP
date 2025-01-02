#include<iostream.h>
#include<conio.h>
class demo
{
   public:
   int x;
   demo(int a)
   {
      x=a;
   }
   void operator*()
   {
      x=x*x;
   }
   void operator-()
   {
      x=-x;
   }
   void operator+()
   {
      x=x+x;
   }
   //void operator/() {   x=x/10.0;   }
   void display()
   {
      cout<<"\n value of x is :"<<x;
   }
};
void main()
{
   clrscr();
   int data;
   cout<<"Enter value :";
   cin>>data;
   demo d(data);
   d.display();
   *d;   d.display();
   +d;   d.display();
   -d;   d.display();
   // /d; d.display();
   getch();
}
