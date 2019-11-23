#include<iostream>

using namespace std;

int main()
{
    int val = 32;
    int *ptr = NULL;
    int x = 0;
    ptr = &val;
    *ptr = *ptr + 1;
    x = val;
    cout<<"Value:"<<val<<endl;
    cout<<"Address:"<<&val<<endl;
    cout<<"Pointer:"<<ptr<<endl;
    cout<<"Value:"<<*ptr+1<<endl;
    cout<<"Value:"<<x<<endl;
    ptr = &x;
    cout<<"pointer address:"<<ptr<<endl;
}