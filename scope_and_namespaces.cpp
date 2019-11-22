#include<iostream>

using namespace std;

class Rectangle
{
    public:
    Rectangle(float wd,float ht)
    {
        set_Height(ht);
        set_Width(wd);
    }
    void set_Width(float w)
    {
        this->width = w;
    }
    void set_Height(float h)
    {
        this->height = h;
    }
    float get_Width()
    {
        return width;
    }
    float get_Height()
    {
        return height;
    }
    float get_Area();
    private:
    float width;
    float height;
};

class Circle
{
    public:
    Circle(float r)
    {
        set_Radius(r);
    }
    void set_Radius(float r)
    {
        this->radius = r;
    }
    float get_Radius()
    {
        return radius;
    }
    float get_Area();
    private:
    float radius;
};

float Rectangle::get_Area()
{
    float ht,wd,area;
    ht = Rectangle::get_Height();
    wd = Rectangle::get_Width();
    area = ht*wd;

    return area;
}

float Circle::get_Area()
{
    float r,area;
    r = Circle::get_Radius();
    area = 3.14*r*r;

    return area;
}

namespace English
{
    void Hello()
    {
        cout<<"Hello World"<<endl;
    }
}

namespace Spanish
{
    void Hello()
    {
        cout<<"Hola Mundo"<<endl;
    }
}

int main()
{
    Rectangle rect(5.6,7.3);
    Circle circ(4);
    cout<<"Rectangle Area:"<<rect.get_Area()<<endl;
    cout<<"Circular Area:"<<circ.get_Area()<<endl;

    English::Hello();
    Spanish::Hello();
}