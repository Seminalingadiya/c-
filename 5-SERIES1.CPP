#include<iostream.h>
void main()
{
   int step=1,c=6,gap=3;
   for(step=1; step<11; step++)
   {
      cout<<c;
      c=c+gap;
      gap=gap+2;
   }
}


