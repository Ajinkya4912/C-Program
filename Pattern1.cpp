#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int i,j;
    int no=4;
    for(int i=1;i<=4;i++)
{
    for(int j=1;j<=i;j++)
    {
    count=count+1;
    cout<<count<<"\t";
    }
    cout<<"\n";


}
}