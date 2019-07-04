#include<iostream>
using namespace std;
int main()
{
int num,rev=0,mod,div,temp=0;
cout<<"Enter the number to be checked:";
cin>>num;
cout<<num<<endl;
temp = num;
while(temp != 0)
{
mod = temp%10;
rev = rev*10 + mod;
temp = temp/10;
}
if (rev == num)
{
cout<<"palindrome number";
}
else
{
cout<<"not a palindrome number";
}

}
