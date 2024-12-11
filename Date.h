#include <iostream>

class Date{
    public:
    int day;
    int month;
    int year;
    Date(int day=1,int month=1,int year=2024);
    void updateDay(int day);
    void updateMonth(int month);
    void updateYear(int year);

    private:
    int _day;
    int _month;
    int _year;
};