#include<iostream.h>
#include<conio.h>
void pyramid(char *c)
{
   int i=0;
   while(c[i]!=NULL)
   {
      int j=0;
      while(j<=i)
      {
	 cout<<" "<<c[j++];
      }
      i++;
      cout<<endl;
   }
}
void main()
{
  clrscr();
  char *c;
  cout<<"Enter String:";
  cin>>c;
  pyramid(c);
  getch();
}

