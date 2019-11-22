#include<iostream>
#include<vector>

using namespace std;

int main()
{
    /* Vectors are examples of containers that come in a C++ STL. You can look up what is STL and what are containers.
    Vectors are sequence containers. They are example of dynamic arrays. There are four categories of functions associated
    with vectors.They are - iterators,capacity,element access and modifiers. The code demo for functions associated with 
    each category is  given below. Why use vectors over normal arrays ? 
    Check this link-https://www.geeksforgeeks.org/advantages-of-vector-over-array-in-c/ */
    vector<int> a;

    cout<<"-----------------------Capacity-----------------------"<<endl;
    for(int i=1;i<=5;i++)
    {
        a.push_back(i);
    }
    cout<<"Size:"<<a.size()<<endl;
    cout<<"Capacity:"<<a.capacity()<<endl;
    cout<<"Max size:"<<a.max_size()<<endl;

    a.resize(4);

    cout<<"After resize"<<endl;
    cout<<"Size:"<<a.size()<<endl;
    cout<<"Capacity:"<<a.capacity()<<endl;

    if (a.empty() == false)
    {
        cout<<"Vector is not empty"<<endl;
    }
    else
    {
        cout<<"Vector is empty"<<endl;
    }
    cout<<"The elements are:";
    for (int i=0;i<=a.size();i++)
    {
        cout<<a[i]<<"\t";
    }
    a.shrink_to_fit();
    cout<<"\nAfter using shrink to fit"<<endl;
    cout<<"Capacity:"<<a.capacity()<<endl;
    cout<<"Request to change capacity"<<endl;
    a.reserve(20);
    cout<<"New capacity:"<<a.capacity()<<endl;

    cout<<"-----------------------Iterators-----------------------"<<endl;
    /* Here we come across two kinds of iterators-iterators and constant iterators. When we start iteration
    using normal iteration we can change the value to place where the iterator is pointing to but in case
    of constant iterator we cant change the value of the memory where the iterator is pointing to.*/
    cout<<"Normal Iteration with adding 2 to each element"<<endl;
    cout<<"The elements are:";
    for (auto ni=a.begin(); ni !=a.end();++ni)
    {
        *ni = *ni + 2;
        cout<<*ni<<"\t";
    }
    
    cout<<"\nReverse Iteration with subtracting 2 from each element"<<endl;
    cout<<"The elements are:";
    for (auto ni=a.begin(); ni !=a.end();++ni)
    {
        *ni = *ni - 2;
        cout<<*ni<<"\t";
    }

    cout<<"\nConstant Iteration"<<endl;
    cout<<"The elements are:";
    for (auto ni=a.cbegin(); ni !=a.cend();++ni)
    {
        cout<<*ni<<"\t";
    }
    
    cout<<"\nConstant Reverse Iteration"<<endl;
    cout<<"The elements are:";
    for (auto ni=a.crbegin(); ni !=a.crend();++ni)
    {
        cout<<*ni<<"\t";
    }
    
    cout<<endl;
    cout<<"-----------------------Element Access-----------------------"<<endl;

    cout<<"Using Reference operator for the second place :"<<a[1]<<endl;
    cout<<"Using the at() operator for the third place:"<<a.at(2)<<endl;
    cout<<"Using the front() operator:"<<a.front()<<endl;
    cout<<"Using the back() operator:"<<a.back()<<endl;

    cout<<"-----------------------Modifiers-----------------------"<<endl;
    cout<<"Assigning to the current vector using assign()"<<endl;
    a.assign(3,50);
    cout<<"The elements are:";
    for (auto ni=a.cbegin(); ni !=a.cend();++ni)
    {
        cout<<*ni<<"\t";
    }
    cout<<"Using insert() to insert an element"<<endl;
    a.insert(a.begin(),30);
    cout<<"The elements are:";
    for (auto ni=a.cbegin(); ni !=a.cend();++ni)
    {
        cout<<*ni<<"\t";
    }
    cout<<endl;
    a.erase(a.begin()+2);
    cout<<"The elements after erasing";
    for (auto ni=a.cbegin(); ni !=a.cend();++ni)
    {
        cout<<*ni<<"\t";
    }
    cout<<endl;

    a.pop_back();
    cout<<"The elements after pop_back() are:";
    for (auto ni=a.cbegin(); ni !=a.cend();++ni)
    {
        cout<<*ni<<"\t";
    }
    cout<<endl;
    a.clear();
    cout<<"The elements after clear() are:";
    for (auto ni=a.cbegin(); ni !=a.cend();++ni)
    {
        cout<<*ni<<"\t";
    }
    cout<<endl;
}