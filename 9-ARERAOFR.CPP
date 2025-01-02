#include<iostream.h>
#include<conio.h>
//without argument without return
void rectangle();
void triangle();
void circle();
float length,height,radius;
void main()
{
   clrscr();
   cout<<"Enter length :";
   cin>>length;
   cout<<"Enter height :";
   cin>>height;
   cout<<"Enter radius :";
   cin>>radius;
   rectangle();
   triangle();
   circle();
   getch();
}
void rectangle()
{
   cout<<"length of rectangle is ::"<<length <<endl;
   cout<<"height of rectangle is ::"<<height <<endl;
   float area = length * height;
   cout<<""<<endl;
   cout<<"area of rectangle ::"<<area <<endl;
}
void triangle()
{
   cout<<"length of triangle is ::"<<length <<endl;
   cout<<"height of triangle is ::"<<height <<endl;
   cout<<""<<endl;
   cout<<"area of triangle ::"<<((1.0/2.0)*length*height) <<endl;
}
void circle()
{
   cout<<"radius of circle is ::"<<radius <<endl;
   cout<<""<<endl;
   cout<<"area of circle is ::"<<(3.14*radius*radius) <<endl;
}
