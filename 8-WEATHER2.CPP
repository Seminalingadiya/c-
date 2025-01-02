#include<iostream.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   cout<<"\n1.january \n2.february \n3.march \n4.april \n5.may \n6.june \n7.july \n8.august \n9.september \n10.octomber \n11.november \n12.december \n13.exit";
   cout<<"\n enter the month number :"; cin>>a;
   switch(a)
   {
      case 1:
	 cout<<"january";
	 cout<<"\n weather is winter";
	 break;
      case 2:
	 cout<<"february";
	 cout<<"\n weather is winter";
	 break;
      case 3:
	 cout<<"march";
	 cout<<"\n weather is spring";
	 break;
      case 4:
	 cout<<"april";
	 cout<<"\n weather is summer";
	 break;
      case 5:
	 cout<<"may";
	 cout<<"\n weather is summer";
	 break;
      case 6:
	 cout<<"june";
	 cout<<"\n weather is summer";
	 break;
      case 7:
	 cout<<"july";
	 cout<<"\n weather is sprinkler";
	 break;
      case 8:
	 cout<<"august";
	 cout<<"\n weather is monsoon";
	 break;
      case 9:
	 cout<<"september";
	 cout<<"\n weather is monsoon";
	 break;
      case 10:
	 cout<<"octomber";
	 cout<<"\n weather is monsoon";
	 break;
      case 11:
	 cout<<"november";
	 cout<<"\n weather is autumn";
	 break;
      case 12:
	 cout<<"december";
	 cout<<"\n weather is winter";
	 break;
      case 13:
	 cout<<"exit program...";
	 break;
      default:
	 cout<<"wrong choice...";
   }
}