#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int temp,sum=0,mod;
// three digit armstrong number
for (int i=100; i<=999;i++)
{
temp = i;
while (temp!=0)
{
mod = temp % 10;
sum = sum + pow(mod,3);
temp = temp/10;
}
//cout<<"sum:"<<sum<<endl;
if (sum == i)
{
cout<<"Armstrong no:"<<i<<endl;
}  
sum = 0;  
}
return 0;
}