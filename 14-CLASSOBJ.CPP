#include<iostream.h>
#include<conio.h>
class greetings
{
   public:
   char *name;
   void getdata(char *nm)
   {
      name=nm;
   }
   void welcomemsg()
   {
      cout<<"Welcome to c++ oop..."<<name;
   }
};
void main()
{
   clrscr();
   greetings obj; //=new greetings();
   char *nm="MJKACC";
   obj.getdata(nm);
   obj.welcomemsg();
   getch();
}