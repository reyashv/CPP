#ifndef SWIGGY_H_INCLUDED
#define SWIGGY_H_INCLUDED
#include "FoodDeliverySystem.h"

class Swiggy:public FoodDeliverySystem
{
public:
    int restaurantchoice;
    int ordernumber;
    float damnt;

public:
    Swiggy();
    ~Swiggy();
    void setSwiggy();
    void setrestaurantchoice(int);
    void setordernumber(int);
    void setdamnt(float);
    int getrestaurantchoice();
    int getordernumber();
    void display();
    const char* exception()const throw()
    {
        return "Enter valid choice \n";
    }
};

#endif // SWIGGY_H_INCLUDED
