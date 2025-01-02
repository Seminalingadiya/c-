#include<iostream.h>
#include<conio.h>
void main()
{
   int n, num=2, diff=3;
   clrscr();
   cout<<"Enter a positive integer:";
   cin>>n;
   cout<<"sequence:";
   while(num<=n)
   {
      cout<<num<<" ";
      num+=diff;
      diff+=2;
   }
}
