#include<iostream.h>
#include<conio.h>
class stud_info
{
   int age[5];
   char stnm[5][10];
   public:
      void inputdata()
      {
	 for(int x=0; x<5; x++)
	 {
	    cout<<"Enter Student Nmae:";
	    cin>>stnm[x];
	    cout<<"Enter Student Age:";
	    cin>>age[x];
	 }
      }
      void dispdata()
      {
	 for(int x=0; x<5; x++)
	 {
	    cout<<"\n student name is "<<stnm[x]<<" and it`s age is"<<age[x];
	 }
      }
};
void main()
{
   clrscr();
   stud_info s1;
   s1.inputdata();
   s1.dispdata();
   getch();
}