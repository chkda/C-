#include<iostream>

using namespace std;

class Complex
{
    public:
    float real;
    float imag;
    Complex()
    {
        this->real = 0;
        this->imag = 0;
    }
    Complex(float a, float b)
    {
        this->real = a;
        this->imag = b;
    }
    Complex operator +(Complex &a)
    {
        Complex c;
        c.real = this->real + a.real;
        c.imag = this->imag + a.imag;

        return c;

    }
};

int main()
{
    Complex a(10,20);
    Complex b(20,30);
    Complex c;

    c = a + b;

    cout<<"Real value:"<<c.real<<endl;
    cout<<"Imaginary value:"<<c.imag<<endl;
}