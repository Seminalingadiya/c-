#include<iostream.h>
#include<conio.h>
class demoA
{
   public:
   int a;
   void inputdata()
   {
      cout<<"\n parent class...";
      cout<<"\n Enter value of A:";
      cin>>a;
   }
   void display()
   {
      cout<<"\n value of A is:"<<a;
   }
};
class demoB : public demoA
{
   public:
   int a,b;
   void inputdata()
   {
      demoA::inputdata();
      cout<<"\n child class...";
      cout<<"\n Enter value of A:";
      cin>>a;
      cout<<"\n Enter value of B:";
      cin>>b;
   }
   void display()
   {
      demoA::display();
      cout<<"\n sum of A and B is :"<<(a+b);
   }
};
void main()
{
   clrscr();
   demoB db;
   db.inputdata();
   db.display();
   getch();
}