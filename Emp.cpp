#include<iostream>
using namespace std;

class emp
{
    int eid;
    int salary;

    public:
    void accept(int e,int s)
    {
        eid=e;
        salary=s;
    }
    void display();
}s1;
void emp::display()
{
    cout<<"\n  eid="<<eid;
    cout<<"\n salary="<<salary;
}
    int main()
    {
        emp s1;
        s1.accept(12,18000);
        s1.display();
    }
