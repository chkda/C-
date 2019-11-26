#include<iostream>

using namespace std;

int main()
{
    int a = 5, b = 7,and_ = 0, or_ = 0,xor_ = 0,left_shift = 0,right_shift = 0;
    and_ = a & b;
    or_ = a | b;
    xor_ = a ^ b;
    left_shift = and_<<2;
    right_shift = and_>>2;
    
    cout<<"AND operation:"<<and_<<endl;
    cout<<"OR operation:"<<or_<<endl;
    cout<<"XOR operation:"<<xor_<<endl;
    cout<<"LEFT shift:"<<left_shift<<endl;
    cout<<"RIGHT shift:"<<right_shift<<endl;

}
