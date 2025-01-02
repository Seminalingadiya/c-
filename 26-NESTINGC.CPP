#include<iostream.h>
#include<conio.h>
class outer
{
   class inner
   {
      public:
      void display()
      {
	 cout<<"\n good morning from inner class method";
      }
   };
   public:
   void outdisplay()
   {
      cout<<"good morning from outer class method";
   }
   //inner i1;
};
void main()
{
   clrscr();
   outer s1;
   s1.outdisplay();
   outer::inner i1;   //private inner class member object creation
   i1.display();
   //s1.i1.display();   //object to object of inner class member
   getch();
}