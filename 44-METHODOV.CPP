#include<iostream.h>
#include<conio.h>
class constover
{
   public:
      int grno;
      void display()
      {
	 cout<<"\n Hii i am default method";
      }
      void dispgrno(int grno)
      {
	 cout<<"\n method one parameter:"<<grno;
      }
      void disp(int grno,char *nm)
      {
	 cout<<"\n method two parameter";
	 cout<<"\n grno is" <<grno <<"and student name is:" <<nm;
      }
};
void main()
{
   clrscr();
   constover c1;
   c1.display();
   c1.dispgrno(234);
   c1.disp(2373,"semina");
   getch();
}

