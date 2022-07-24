#include<iostream>
using namespace std;

class Abc
{
    public:
    int a,b,res;
    int Addition(int a,int b)
    {
         return a+b;
    }
};
int main()

{Abc obj;
int res=0;

res=obj.Addition(10,20);
    cout<<res;
}