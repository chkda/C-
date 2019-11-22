#include<iostream>
#include<cassert>

using namespace std;

class Employee
{
    /* One major difference betweem class and struct is that by default the member variables are 
    private unlike struct where the default initialisation is public.*/
    public:
    int age;
    char gender;
    float salary;
};

class Student
{
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
    float math{0};
    float chem{0};
    float physics{0};

};

int main()
{
    Employee chhaya;
    chhaya.age = 23;
    chhaya.gender = 'M';
    chhaya.salary = 21850.50;

    cout<<"Age:"<<chhaya.age<<"\tSalary:"<<chhaya.salary<<"\tGender:"<<chhaya.gender<<endl;

    Student sanu;
    sanu.set_Math(87.8);
    sanu.set_Chem(85.34);
    sanu.set_Physics(78.32);

    cout<<"Physics:"<<sanu.get_Physics()<<"\tChemistry:"<<sanu.get_Chem()<<"\tMaths:"<<sanu.get_Math()<<endl;

}