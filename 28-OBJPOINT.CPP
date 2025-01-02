#include<iostream.h>
#include<conio.h>
class demo
{
   public:
   int x,y,ans;
   void input(int a,int b)
   {
      x=a;
      y=b;
   }
   void calculate()
   {
      ans=x*y;
   }

   void display()
   {
      cout<<"\n Multiplication of"<<x<<"and"<<y<<"is:"<<ans;
   }
};
void main()
{
   clrscr();
   demo d1;
   demo *ptrd;
   d1.input(10,20);
   d1.calculate();
   d1.display();
   ptrd=&d1;
   cout<<"\n \n using pointer as reference";
   ptrd->display();
   getch();
}




















