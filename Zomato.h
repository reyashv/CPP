#ifndef ZOMATO_H_INCLUDED
#define ZOMATO_H_INCLUDED

#include "Swiggy.h"

class Zomato:public Swiggy
{
public:
    string time;
    string date;
    string day;
    int people;
    Swiggy s;

public:
    Zomato();
    ~Zomato();
    void setZomato();
    void setrestaurantchoice(int);
    void setordernumber(int);
    void setdamnt(float);
    void settime(string);
    void setdate(string);
    void setday(string);
    void setpeople(int);
    int getrestaurantchoice();
    int getordernumber();
    float getdamnt();
    string gettime();
    string getdate();
    string getday();
    int getpeople();
    void display();
    const char* exception()const throw()
    {
        return "Enter valid choice \n";
    }
    const char* exceptionday()const throw()
    {
        return "Enter valid day \n";
    }
    const char* exceptionpeople()const throw()
    {
        return "Enter valid number of people \n";
    }
};

#endif // ZOMATO_H_INCLUDED
