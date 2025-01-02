#include<iostream.h>
void main()
{
   int c=1,p=0,n,step=1;
   while(step<11)
   {
      cout<<c;
      n=c+p;
      p=c;
      c=n;
      step++;
   }
}