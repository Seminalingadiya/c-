#include <iostream.h>
#include <conio.h>
void main()
{
    int country, state;
    clrscr();
    cout << "Select a country:\n1. USA\n2. India\n3. Japan\n";
    cin >> country;
    switch (country)
     {
	case 1:
	    cout << "Select a state in the USA:\n1. California\n2. New York\n3. Texas\n";
	    cin >> state;
	    switch (state)
	    {
		case 1:
		    cout << "Festivals in California: easter,parades,rodeos\n";
		    break;
		case 2:
		    cout << "Festivals in New York: ferragosto,easter parades,new year`s eve.\n";
		    break;
		case 3:
		    cout << "Festivals in Texas: juneteenth,venice,cannes,berlin \n";
		    break;
		default:
		    cout << "Invalid state selection\n";
	    }
	    break;

	case 2:
	    cout << "Select a state in India:\n1. Maharashtra\n2. Gujrat\n3. Rajasthan\n";
	    cin >> state;
	    switch (state)
	    {
		case 1:
		    cout << "Festivals in Maharashtra: gudhi padwa,ganesh chathurthi,diwali,holi \n";
		    break;
		case 2:
		    cout << "Festivals in Gujrat: navratri,uttrayan,janamasthami,dussehra \n";
		    break;
		case 3:
		    cout << "Festivals in Rajasthan: gangour,diwali,uttrayan,holi\n";
		    break;
		default:
		    cout << "Invalid state selection\n";
	    }
	    break;

	case 3:
	    cout << "Select a state in Japan:\n1. Tokyo\n2. Osaka\n3. Kyoto\n";
	    cin >> state;
	    switch (state)
	    {
		case 1:
		    cout << "Festivals in Tokyo: kanda matsuri,fireworks displays,sanja matsuri \n";
		    break;
		case 2:
		    cout << "Festivals in Osaka: tenjin,aizen,tokaebisu,setsubun \n";
		    break;
		case 3:
		    cout << "Festivals in Kyoto: aoi matsuri,jidai,miyako,toka ebisu \n";
		    break;
		default:
		    cout << "Invalid state selection\n";
	    }
	    break;

	default:
	    cout << "Invalid country selection\n";
    }
}
