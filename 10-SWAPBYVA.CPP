#include<iostream.h>
#include<conio.h>
void swapping(int first,int second)
{
   first = first + second;
   second = first - second;
   first = first - second;
   cout<<"After swapping first value is :"<<first <<"and second value is :"<<second;
}
void main()
{
   int mainval1,mainval2;
   clrscr();
   cout<<"Enter first value :";
   cin>>mainval1;
   cout<<"Enter second value :";
   cin>>mainval2;
   swapping(mainval1,mainval2);
   getch();
}

