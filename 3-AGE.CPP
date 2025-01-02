#include<iostream.h>
#include<conio.h>
void main()
{
   int age;
   clrscr();
   cout<<"Enter your age:";
   cin>>age;
   if(age>=0 && age<=12)
   {
      cout<<"child";
   }
   else if(age>=13 && age<=19)
   {
      cout<<"teenage";
   }
   else if(age>=20 && age<=35)
   {
      cout<<"young";
   }
   else if(age>=36 && age<=55)
   {
      cout<<"younger";
   }
   else
   {
      cout<<"older";
   }

}
