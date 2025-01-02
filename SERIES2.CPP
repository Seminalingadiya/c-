#include<iostream.h>
#include<conio.h>
void main()
{
   int i,n;
   clrscr();
   cout<<"enter a positive integer=";
   cin>>n;
   for(i=1; i*i<=n; i++)
   {
      cout<<" "<<i*i;
   }
}