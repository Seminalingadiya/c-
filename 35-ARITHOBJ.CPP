#include<iostream.h>
#include<conio.h>
class arithopr
{
   public:
   int a,b;
   void inputdata()
   {
      cout<<"Enter value of A :";   cin>>a;
      cout<<"Enter value of B :";   cin>>b;
   }
   arithopr operator +(arithopr a1)
   {
      arithopr a3;
      a3.a=a+a1.a;
      a3.b=b+a1.b;
      return a3;
   }
   void display()
   {
      cout<<"\n value of A is :"<<a;
      cout<<"\n value of B is :"<<b;
   }
};
void main()
{
   clrscr();
   arithopr A1,A2,A3;
   cout<<"Enter first object value :\n";
   A1.inputdata();
   cout<<"Enter second object value :\n";
   A2.inputdata();
   A3=A1+A2;
   cout<<"\n first object data"<<endl;
   A1.display();
   cout<<"\n second object data"<<endl;
   A2.display();
   cout<<"\n third answer object data"<<endl;
   A3.display();
   getch();
}

