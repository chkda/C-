#include<iostream>

using namespace std;

class Date
{
    public:
    Date(int d,int m,int y)
    {
        set_Day(d);
        set_Month(m);
        set_Year(y);
    }
    void set_Day(int d)
    {
        this->day = d;
    }
    void set_Month(int m)
    {
        this->month = m;
    }
    void set_Year(int y)
    {
        this->year = y;
    }
    int get_Day()
    {
        return day;
    }
    int get_Month()
    {
        return month;
    }
    int get_Year()
    {
        return year;
    }
    private:
    int day{1};
    int month{1};
    int year{1};
};

int main()
{
    Date bday(6,4,1996);
    cout<<"Birthday:"<<bday.get_Day()<<"-"<<bday.get_Month()<<"-"<<bday.get_Year()<<endl;
}