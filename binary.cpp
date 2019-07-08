#include<iostream>
#include<stack>
using namespace std;
int main()
{
int num,mod,temp;
stack<int> bin;
cout<<"Enter the number:";
cin>>num;
temp = num;
cout<<"Binary number:";
while(temp!=0)
{
mod = temp % 2;
bin.push(mod);
temp = temp/2;
}
cout<<"Binary number:";
while(!bin.empty())
{
    cout<<bin.top();
    bin.pop();
}
return 0;
}