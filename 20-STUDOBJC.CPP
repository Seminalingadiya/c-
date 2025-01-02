#include<iostream.h>
#include<conio.h>
class stud_info
{
   public:
   int grno;
   char stnm[20],city[15],contactno[10],gender[6];
   void inputdata()
   {
      cout<<"Enter GRNO:";
      cin>>grno;
      cout<<"Enter Student Name:";
      cin>>stnm;
      cout<<"Enter City:";
      cin>>city;
      cout<<"Enter Contact Number:";
      cin>>contactno;
      cout<<"Enter Gender:";
      cin>>gender;
   }
   void displaydata()
   {
      cout<<"\n"<<grno<<"\t"<<stnm<<"\t"<<city<<"\t"<<contactno<<"t"<<gender;
   }
};
void main()
{
   clrscr();
   stud_info s[10];
   for(int x=0; x<10; x++)
   {
      s[x].inputdata();
   }
   cout<<"\n GRNO \t StudentName \t City \t contact number \t gender";
   for(x=0; x<10; x++)
   {
      s[x].displaydata();
   }
}
