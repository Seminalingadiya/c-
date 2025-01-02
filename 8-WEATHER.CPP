#include<iostream.h>
#include<conio.h>
void main()
{
   int month;
   clrscr();
   cout<<"Enter the month number[1-12] :";
   cin>>month;
   switch(month)
   {
      case 1:
	 cout<<"January - winter";
	 break;
      case 2:
	 cout<<"february - winter";
	 break;
      case 3:
	 cout<<"march - spring";
	 break;
      case 4:
	 cout<<"april - summer";
	 break;
      case 5:
	 cout<<"may - summer";
	 break;
      case 6:
	 cout<<"June - summer";
	 break;
      case 7:
	 cout<<"July - monsoon";
	 break;
      case 8:
	 cout<<"august - monsoon";
	 break;
      case 9:
	 cout<<"september - monsoon";
	 break;
      case 10:
	 cout<<"october - autumn";
	 break;
      case 11:
	 cout<<"november - autumn";
	 break;
      case 12:
	 cout<<"december - winter";
	 break;
      default:
	 cout<<"Invalid month number. please enter a number between 1 to 12.";
   }
}