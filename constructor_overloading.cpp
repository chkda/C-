#include<iostream>

using namespace std;

class Rectangle
{
    private:
    int height;
    int width;

    public:
    Rectangle()
    {
        this->height = 10;
        this->width = 20;
    }
    Rectangle(int a, int b)
    {
        this->height = a;
        this->width = b;
    }
    Rectangle(int a)
    {
        this->height = a;
        this->width = 20;
    }
    Rectangle(Rectangle &a)
    {
        this->height = a.height;
        this->width = a.width;
    }
    int get_height()
    {
        return height;
    }
    int get_width()
    {
        return width;
    }
    ~Rectangle()
    {
        cout<<"Destructor being called"<<endl;
    }

};

int main()
{
    Rectangle rect;
    Rectangle rect_2(20,20);
    Rectangle rect_3(15);
    Rectangle rect_4(rect_2);

    cout<<"Default constructor height "<<rect.get_height()<<" and width "<<rect.get_width()<<endl;
    cout<<"Two args parametrized constructor height "<<rect_2.get_height()<<" and width "<<rect_2.get_width()<<endl;
    cout<<"Single args parametrized constructor height "<<rect_3.get_height()<<" and width "<<rect_3.get_width()<<endl;
    cout<<"Copy constructor height "<<rect_4.get_height()<<" and width "<<rect_4.get_width()<<endl;

}