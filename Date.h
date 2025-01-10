#pragma once
#include <iostream>


class Date{
    public:
    Date();
    Date(int day,int month, int year);
    int day();
    int month();
    int year();
    void updateDay(int day);
    void updateMonth(int month);
    void updateYear(int year);

    private:
    int _day;
    int _month;
    int _year;
};

