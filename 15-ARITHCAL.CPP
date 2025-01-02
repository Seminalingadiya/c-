#include<iostream.h>
#include<conio.h>
class arithoper
{
   int firstvalue,secondvalue;
   public:
      void inputdata(int first,int second)
      {
	 firstvalue=first;
	 secondvalue=second;
      }
      void addition()
      {
	 cout<<"\n addition is :"<<(firstvalue+secondvalue);
      }
      void substraction()
      {
	 cout<<"\n substraction is :"<<(firstvalue-secondvalue);
      }
      void multiplication()
      {
	 cout<<"\n multiplication is :"<<(firstvalue*secondvalue);
      }
      void division()
      {
	 cout<<"\n division is :"<<(firstvalue/secondvalue*1.0);
      }
      void modulus()
      {
	 cout<<"\n modulus is :"<<(firstvalue%secondvalue);
      }
};
void main()
{
   arithoper ao;
   int x,y;
   clrscr();
   cout<<"Enter first value :";   cin>>x;
   cout<<"Enter second value :";   cin>>y;
   ao.inputdata(x,y);
   ao.addition();
   ao.substraction();
   ao.multiplication();
   ao.division();
   ao.modulus();
   getch();
}