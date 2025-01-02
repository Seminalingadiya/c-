#include<iostream.h>
#include<conio.h>
inline void calculatesum(int x,int y)
{
   cout<<"sum of x and y is :"<<(x+y) <<endl;
}
void main()
{
   int first,second;
   clrscr();
   cout<<"enter first value :"; cin>>first;
   cout<<"enter second value :"; cin>>second;
   calculatesum(first,second);
   calculatesum(55,22);
   calculatesum(100,200);
   getch();
}