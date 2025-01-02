#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class shiftopr
{
   public:
   void operator<<(char *c)
   {
      puts(c);
      puts("Thank You...");
   }
   void operator>>(char *c)
   {
      puts(c);
      puts("Thank You...");
   }
};
void main()
{
   clrscr();
   shiftopr cout,cin;
   cout<<"\n Good Morning";
   char *c="Good Byee";
   cin>>c;
   getch();
}
