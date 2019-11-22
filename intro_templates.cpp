#include<iostream>

using namespace std;

template<typename T>
T Sum(T a, T b)
{
    return a + b;
}
template<typename A>
A comparision(A a, A b)
{
    return (a > b)? a:b;
}

int main()
{
    cout<<"Integer sum:"<<Sum(2,3)<<endl;
    cout<<"Double Sum:"<<Sum(19.34,23.65)<<endl;
    cout<<"Char sum:"<<Sum('a','b')<<endl;
    cout<<"Comparision:"<<comparision(2,3)<<endl;
}