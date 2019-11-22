#include<iostream>

using namespace std;

class Vehicle
{
    public:
    int wheels = 0;
    string color = "blue";
};

class Car:public Vehicle
{
    public:
    bool sunroof;
};

class Scooty:public Vehicle
{
    public:
    bool geared;
};

class A 
{
    public:
    A()
    {
        cout<<"Constructor A is called"<<endl;
    }
};

class B
{
    public:
    B()
    {
        cout<<"Constructor B is called"<<endl;
    }
};

class C :public A,public B
{
    public:
    C ()
    {
        cout<<"Constructor C is called"<<endl;
    }
    
};

int main()
{
    Vehicle v;
    cout<<"The wheels of class Vehicle is "<<v.wheels<<" and color is "<<v.color<<endl;
    Car c;
    c.wheels = 4;
    c.color = "Black";
    c.sunroof = true;
    cout<<"The car has wheels "<<c.wheels<<" and color is "<<c.color<<endl;

    C cc;


}