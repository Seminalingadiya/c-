/*#include<iostream.h>
#include<conio.h>
void sum(int a,int b=20,int c=10)
{
   cout<<"sum of A and B is :"<<(a+b+c)<<endl;
}
void main()
{
   clrscr();
   sum(100,200);
   sum(50);
   //sum();
   sum(20,20,20);
   sum(20,50);
   getch();
} */

#include<iostream.h>
#include<conio.h>
void sum(int a,int b=20,int c=10)
{
   cout<<"sum of A and B is :"<<(a+b+c)<<endl;
}
void sum(float a=10, float b=20)
{
   cout<<"sum of A and B floating point:"<<(a+b)<<endl;
}
/*void sum(int a=100,int b=200)
{
}*/
void sum(int a,float b)
{
   cout<<"sum of integer A and B floating point:"<<(a+b)<<endl;
}
void main()
{
   clrscr();
   sum(100,200);
   sum(50);
   //sum();
   sum(20,20,20);
   sum(20,50);
   sum();
   //sum(2.5);
   //sum(3.5,5.5);
   //sum(10,15.5);
   getch();
}