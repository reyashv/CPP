#ifndef USERDETAILS_H_INCLUDED
#define USERDETAILS_H_INCLUDED
#include<iostream>
#include<string>
#include "DeliveryDetails.h"
#include "FoodDeliverySystem.h"

using namespace std;
//using std::string;

class UserDetails:public FoodDeliverySystem
{
public:
    string name;
    int phone;
    DeliveryDetails d;
public:
    UserDetails();
    ~UserDetails();
    void setUserDetails();
    void setname(string);
    void setphone(int);
    string getname();
    int getphone();
};

#endif // USERDETAILS_H_INCLUDED
