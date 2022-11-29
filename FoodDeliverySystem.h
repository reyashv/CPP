#ifndef FOODDELIVERYSYSTEM_H_INCLUDED
#define FOODDELIVERYSYSTEM_H_INCLUDED
#include <iostream>
#include<string>

using namespace std;
using std::string;

class FoodDeliverySystem
{
public:
    string city;

public:
    FoodDeliverySystem();
    ~FoodDeliverySystem();
    void setFoodDeliverySystem();
    void setcity(int);
    string getcity();
    void checkcity();
    const char* exception()const throw()
    {
        return "Enter valid city name \n";
    }
};

#endif // FOODDELIVERYSYSTEM_H_INCLUDED
