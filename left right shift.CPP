#include<iostream.h>
#include<string.h>
class ShiftString
{

   public:
   ShiftString(const string& s) str(s);

    // Overloading left shift operator
    friend ostream& operator<<(ostream& os, const ShiftString& ss)
   {
	return os<<ss.str+"Thank you";
   }

    // Overloading right shift operator
    friend istream& operator>>(istream& is, ShiftString& ss)
    {
	string input;
	is>>input;
	ss.str = input;
	return is;
   }
};
int main()
{
    ShiftString myString *("Hello World");
    cout<<"myString"<<endl;     // Left shift
    cout<<"myString";                         // Right shift
    cout<<"myString"<<endl;   // Left shift again
    return 0;
}
