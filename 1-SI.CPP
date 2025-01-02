#include<iostream.h>
#include<conio.h>
void main()
{
   float SI,P,R,N;
   clrscr();
   cout<<"Enter principal`s of amount :";
   cin>>P;
   cout<<"Enter rate of interest :";
   cin>>R;
   cout<<"Enter no of years :";
   cin>>N;
   SI=(P*R*N)/100;
   cout<<"simple interest"<<SI;
   getch();
}