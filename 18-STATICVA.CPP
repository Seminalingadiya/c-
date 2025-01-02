#include<iostream.h>
#include<conio.h>
class TotalStudent
{
   int grno;
   static int cnt;
   public:
      int count;
      void setgrno(int gr)
      {
	 grno=gr;
	 cnt++;
	 count++;
      }
      void getTotalStudent()
      {
	 cout<<"\n Total Number of students are:"<<cnt;
	 cout<<"\n Total Number of students as per object:"<<count;
      }
};
int TotalStudent::cnt=0;
void main()
{
   clrscr();
   int grno;
   TotalStudent ts1,ts2,ts3;
   ts1.count=ts2.count=ts3.count=0;
   cout<<"\n Enter first object values:"<<endl;
   for(int x=1; x<=3; x++)
   {
      cout<<"Enter Grno :";   cin>>grno;
      ts1.setgrno(grno);
   }
   cout<<"\n Enter second object values:"<<endl;
   for(x=1; x<=5; x++)
   {
      cout<<"Enter Grno :";   cin>>grno;
      ts2.setgrno(grno);
   }
   cout<<"\n Enter third object values:"<<endl;
   for(x=1; x<=2; x++)
   {
      cout<<"Enter Grno :";   cin>>grno;
      ts3.setgrno(grno);
   }
   cout<<"\n value of first object :"<<endl;
   ts1.getTotalStudent();
   cout<<"\n value of second object :"<<endl;
   ts2.getTotalStudent();
   cout<<"\n value of third object :"<<endl;
   ts3.getTotalStudent();
   getch();
}