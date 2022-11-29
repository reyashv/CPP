#include<iostream>
#include<string>
#include "UserDetails.h"
//#include "FoodDeliverySystem.h"

using namespace std;
//using std::string;

UserDetails::UserDetails()
{
    name="Name";
    phone=0000000000;
}

UserDetails::~UserDetails()
{

}

void UserDetails::setUserDetails()
{
    cout<<"Enter your name:";
    cin>>name;
    cout<<"\n Enter phone number:";
    cin>>phone;
    d.setDeliveryDetails();
}
