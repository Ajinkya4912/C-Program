#include<iostream>
using namespace std;
int main()
{
    int temp;
    cout<<"Enter the temperature";
    cin>>temp;

    if(temp<0)
    {
        cout<<"Freezing weather";
    }
   else if(temp>=0 && temp<10)
    {
        cout<<"very cold wheather";
    }

    else if(temp>=10 && temp<20)
    {
        cout<<"cold whether"<<endl;
    }
   else if (temp>=20 && temp<30)
    {
        cout<<"Normal whether"<<endl;
    }
    else if(temp >=30 && temp<40)
    {
        cout<<"its hot"<<endl;
    }
    else if(temp>=40)
    {
        cout<<"its very hot"<<endl;
    }
    
}