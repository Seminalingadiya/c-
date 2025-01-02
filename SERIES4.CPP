#include<iostream.h>
#include<conio.h>
void main()
{
   int i,j,number=1;
   clrscr();
   cout<<"enter a positive integer:";
   cin>>i;
   for(i=6; i<=4; i++)
   {
      for(j=6; j<=i; j++)
      {
	 cout<<" "<<number;
	 number=number+2;
      }
      number++;
      if(i==3)
      number++;
   }
}
