#include<iostream.h>
#include<conio.h>
class constover
{
   public:
      int grno;
      constover()
      {
	 cout<<"\n Hii i am default constructor";
      }
      constover(int grno)
      {
	 constover::grno=grno;
	 cout<<"\n constructor one parameter:"<<grno;
      }
      constover(int grno,char *nm)
      {
	 constover::grno=grno;
	 cout<<"\n constructor two parameter";
	 cout<<"\n grno is" <<grno <<"and student name is:" <<nm;
      }
};
void main()
{
   clrscr();
   constover co1;
   constover co2(234);
   constover co3(2373,"semina");
   getch();
}

