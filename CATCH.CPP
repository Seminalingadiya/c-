#include<iostream>
using namespace std;
void main()
{
    try
    {
        int x;
        char c;
        cout<<"Enter number value:";
        cin>>x;
        cout<<"Enter your name first character:";
        cin>>c;
            if(x<0)
            {
                throw x;
            }
            cout<<"\n successfully passed from number input...";
            if(c=='P' || c=='p')
            throw c;
            cout<<"\n program execution success...";
    }
    catch(int e)
    {
        cout<<endl<<e<<"is negative number not allowed to execute";
    }
    catch(char ch)
    {
        cout<<endl<<ch<<"must out from class...";
    }
    catch(...)
    {
        cout<<"\n default exception catch...";
    }
}