#ifndef DELIVERYDETAILS_H_INCLUDED
#define DELIVERYDETAILS_H_INCLUDED
//#include "FoodDeliverySystem.h"
#include "UserDetails.h"
#include<iostream>
#include<string>

using namespace std;
//using std::string;

//class DeliveryDetails: public UserDetails
class DeliveryDetails
{
public:
    int doorno;
    string streetname;
    string landmark;
    int pincode;

public:
    DeliveryDetails();
    ~DeliveryDetails();
    void setDeliveryDetails();
    void setdoorno(int);
    void setstreetname(string);
    void setlandmark(string);
    void setpincode(int);
    int getdoorno();
    string getstreetname();
    string getlandmark();
    int getpincode();
};

#endif // DELIVERYDETAILS_H_INCLUDED
