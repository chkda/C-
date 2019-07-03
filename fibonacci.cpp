#include<iostream>
using namespace std;
int main()
{
int n,a = 0,b = 1,c;
cout<<"Enter the nth term of series:";
cin>>n;
cout<<"Series will go on till:"<<n<<endl;
cout<<a<<" "<<b<<" ";
c = a + b;
for (int i=0;i<n-2;i++)
{
cout<<c<<" ";
a = b;
b = c;
c = a + b;
}
return 0;
}