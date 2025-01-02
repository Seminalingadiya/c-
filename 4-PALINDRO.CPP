//inputed number is palindrom number or not
#include<iostream.h>
#include<conio.h>
void main()
{
   int num,rev;
   clrscr();
   cout<<"\n enter number:";
   cin>>num;
   for(; num>0; num/=10)
   {
      rev=rev*10+num%10;
   }
   cout<<(num==rev ? "palindrom" : "not palindrom")<<endl;
}