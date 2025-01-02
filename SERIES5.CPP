#include<iostream.h>
#include<conio.h>
void main()
{
   int t1=0,t2=1,term=0,n;
   cout<<"enter a positive number=";
   cin>>n;
   cout<<"fibonacci series:"<<t1;
   cout<<" "<<t2;
   term=t1+t2;
   while(term<=n)
   {
      cout<<" "<<term;
      t1=t2;
      t2=term;
      term=t1+t2;
   }
}