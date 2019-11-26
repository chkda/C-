#include<iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

int main()
{
    int x = 5, y = 6;
    float m = 20.12, n = 30.33;
    double p = 23.567, q = 0.3456;
    cout<<"Integer Sum:"<<sum(x,y)<<endl;
    cout<<"Float Sum:"<<sum(m,n)<<endl;
    cout<<"Double Sum:"<<sum(p,q)<<endl;
}