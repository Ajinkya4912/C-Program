#include<iostream>
using namespace std;
int main()
{
    int num=12334574; int count=0;

    while(num>0)
    {
        num=num/10;
        count++;
    }
cout<<count;
}