//scop resolution operator
#include<iostream.h>
#include<conio.h>
int m=10; //global m
void main()
{
   int m=20; //local m
   clrscr();
   {
      int k=m;
      int m=30;
      cout<<"we are in inner block \n";
      cout<<"k="<<k<<"\n";
	 cout<<"m="<<m<<"\n";
	 cout<<"::m="<<::m<<"\n";
   }
   cout<<"\n we are in outer block \n";
   cout<<"m="<<m<<"\n";
   cout<<"::m="<<::m<<"\n";
   getch();
}