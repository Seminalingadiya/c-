#include<iostream.h>
#include<conio.h>
void main()
{
   int tmp,num,sum,digit;
   clrscr();
   cout<<"Enter an integer number:";
   cin>>tmp;
   while(tmp>0)
   {
      digit=tmp%10;
      sum=sum+digit*digit*digit;
      tmp=tmp/10;
   }
   if(num==sum)
   cout<<"armstrong number="<<num;
   else
   cout<<"not armstrong number="<<num;
}