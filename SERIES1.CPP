#include<iostream.h>
#include<conio.h>
void main()
{
   int i,n;
   clrscr();
   cout<<"enter a value =";
   cin>>n;
   for(i=1; i<=n; i++)
   if(i%5!=0 && i%10!=5)
   {
      cout<<" "<<i;
   }
}