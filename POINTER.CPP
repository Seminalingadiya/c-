#include<iostream.h>
#include<conio.h>
void main()
{
   int x;
   int *y;
   clrscr();
   cout<<"Enter value of x :";
   cin>>x;
   cout<<"\n address of x is :"<<&x;
   y=&x;
   cout<<"\n address of y is :"<<y;
   cout<<"\n address value is :"<<*y;
   getch();
}