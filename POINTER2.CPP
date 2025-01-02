#include<iostream.h>
#include<conio.h>
void main()
{
   int x,x1;
   int *y,*y1,ans;
   int **xx,**xx1;
   clrscr();
   cout<<"Enter value of x :";
   cin>>x;
   cout<<"Enter value of x1 :";
   cin>>x1;
   cout<<"\n address of x is :"<<&x;
   cout<<"\n address of x1 is :"<<&x1;
   y=&x;
   y1=&x1;
   ans=*y+*y1;
   cout<<"\n sum of pointer values:"<<ans;
   xx=&y;
   xx1=&y1;
   cout<<"\n address of x is :"<<*xx <<"value of x :"<<**xx;
   cout<<"\n value of x1 from double pointer"<<**xx1;
   getch();
}
