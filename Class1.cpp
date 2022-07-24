#include<iostream>
using namespace std;

class Abc
{
    int a,b,ans;
    public:
       Abc(int a,int b)
       {
           ans=a+b;
          cout<<ans;
       }
};
int main()
{
    Abc obj(10,20);
   
}
