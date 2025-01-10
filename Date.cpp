#include "Date.h"
#include <iostream>

Date::Date(){
    _month = 1;
    _day = 1;
    _year = 2000;
}

Date::Date(int month,int day,int year){
    _month = month;
    _day = day;
    _year = year;
}

int Date::day(){
    return _day;
}

int Date::month(){
    return _month;
}

int Date::year(){
    return _year;
}

void Date::updateDay(int day){
    _day=day;
}

void Date::updateMonth(int month){
    _month=month;
}

void Date::updateYear(int year){
    _year=year;
}

