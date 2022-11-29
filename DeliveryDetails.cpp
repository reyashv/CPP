#include<iostream>
#include<stdlib.h>
#include<string>
//#include "UserDetails.h"
#include "DeliveryDetails.h"

using namespace std;
using std::string;

DeliveryDetails::DeliveryDetails()
{
    doorno=00;
    streetname="Streetname";
    landmark="Landmark";
    pincode=000000;
}

DeliveryDetails::~DeliveryDetails()
{

}

void DeliveryDetails::setDeliveryDetails()
{
    cout<<"Enter Delivery Address Details:";
    cout<<"\n DoorNo.:";
    cin>>doorno;
    cout<<"\n Streetname:";
    cin>>streetname;
    cout<<"\n Landmark:";
    cin>>landmark;
    cout<<"\n Pincode:";
    cin>>pincode;
}
