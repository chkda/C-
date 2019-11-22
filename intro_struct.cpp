#include<iostream>
#include<cassert>

using namespace std;

struct Employee
{
    /* Here we are introducing an example of struct type. Struct is a user defined 
    data type that is used to store a group of items with non similar datatypes.
    Here age,gender and salary are respective data members of the employee. By default
    they are public i.e., they can be accessed directly. The member variables are not 
    initialised.*/
    int age;
    char gender;
    float salary;
};

struct Student
{
    /* Here we give an example of struct with access specifiers- public and private.
    The access specifier public helps us to access the member variables directly while
    the access specifier private retricts the access of the member variable. The member 
    variables have a default initialisation.
    
    We also introduce accessor and mutators here. Accessors are generally functions that
    are used to get the value of a member function on the other hand mutators are functions
    that are used to set some value to the private member variables. They are also called as
    getter and setter functions.
    
    We have used this pointer to access the member variable. Normally, this pointer is used
    to represent the address on object inside the member function. */
    public:
    float get_Math()
    {
        return math;
    }
    float get_Chem()
    {
        return chem;
    }
    float get_Physics()
    {
        return physics;
    }
    void set_Math(float marks)
    {
        this->math = marks;
    }
    void set_Chem(float marks)
    {
        this->chem = marks;
    }
    void set_Physics(float marks)
    {
        this->physics = marks;
    }


    private:
    float physics{0};
    float chem{0};
    float math{0};
};

int main()
{
    Employee chhaya;
    chhaya.age = 23;
    chhaya.gender = 'M';
    chhaya.salary = 21850.50;

    assert(chhaya.age == 23);
    assert(chhaya.gender == 'M');
    assert(chhaya.salary == 21850.50);

    cout<<"Age:"<<chhaya.age<<"\tGender:"<<chhaya.gender<<"\tSalary:"<<chhaya.salary<<endl;

    Student sanu;
    sanu.set_Math(87.50);
    sanu.set_Chem(85.00);
    sanu.set_Physics(82.75);

    cout<<"Physics:"<<sanu.get_Physics()<<"\tChemistry:"<<sanu.get_Chem()<<"\tMaths:"<<sanu.get_Math()<<endl;
}