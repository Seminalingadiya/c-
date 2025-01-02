#include<iostream>
using namespace std;
void main()
{
   float x,y;
   cout<<"Enter first value:";
   cin>>x;
   cout<<"Enter second value:";
   cin>>y;
   try
   {
      if(y==0)
      {
	 throw runtime_error("value is zero with divisible error";
      }

      double ans=x/y;
      cout<<"division is:"<<ans;
   }
   catch(const std::exception & e)
   {
      cout<<"error code:"<<error<<"error is:"<<e.what()<<'\n';
   }
}