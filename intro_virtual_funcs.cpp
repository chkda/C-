#include<iostream>

using namespace std;

class A
{
    public:
    virtual void print()
    {
        cout<<" Class A"<<endl;
    }
};

class B: public A
{
    public:
    void print() override
    {
        cout<<" Class B"<<endl;
    }
};

int main()
{
    A a;
    B b;
    a.print();
    b.print();


}