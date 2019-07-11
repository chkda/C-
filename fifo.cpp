#include<iostream>
#include<stack>
using namespace std;
void print_stack(stack<int> p)
{
while(!p.empty())
    {
        cout<<'\t'<<p.top();
        p.pop();
    }
    cout<<'\n';
}
stack<int> FIFO(stack<int> p)
{
    stack<int> r;
    while(!p.empty())
    {
        r.push(p.top());
        p.pop();
    }
    return r;
}
int main()
{
    stack<int> s;
    stack<int> b;
    s.push(20);
    s.push(33);
    s.push(93);
    s.push(56);
    s.push(21);
    cout<<"The stack is:";
    print_stack(s);
    b = FIFO(s);
    cout<<"FIFO:";
    print_stack(b); 
}