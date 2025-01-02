#include<iostream.h>
#include<conio.h>
class animal
{
   public:
   void sound()
   {
      cout<<"animal make a sound"<<endl;
   }
};
class dog:public animal
{
   public:
   void sound()
   {
      cout<<"Dog barks..."<<endl;
   }
};
class cat:public animal
{
   public:
   void sound()
   {
      cout<<"cat meows..."<<endl;
   }
};
void main()
{
   clrscr();
   animal animal;
   dog dog;
   cat cat;
   animal.sound();
   dog.sound();
   cat.sound();
   getch();
}
