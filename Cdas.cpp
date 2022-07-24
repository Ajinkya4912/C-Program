#include<iostream>
using namespace std;

int main()
{
    int ch;
    cout<<"Enter any charcter";
    cin>>ch;

    if((ch>='a' && ch<='z') || (ch>='A'  && ch<='Z'))
    {
        cout<<ch<<"is an Alphabet";
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<ch<<"is an Digit";
    }
    else
    {
        cout<<ch<<"is a Special Charcter";
    }

}