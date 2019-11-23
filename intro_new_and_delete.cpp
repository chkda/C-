#include<iostream>

using namespace std;

int main()
{
    int *ptr = new int(45);
    int *arr_ptr = new int[4];
    for (int i=0; i<3; i++)
    {
        *ptr = ++*ptr;
        arr_ptr[i] = i;
        cout<<"Address: "<<ptr<<" Value: "<<*ptr<<endl;
        cout<<"Address at array pointer: "<<&arr_ptr[i]<<" Value:"<<arr_ptr[i]<<endl;
    }

    delete ptr;
    delete[] arr_ptr;
}