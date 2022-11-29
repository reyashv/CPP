#include<iostream>
#include<stdlib.h>
#include<cstring>
#include "FoodDeliverySystem.h"

using namespace std;

FoodDeliverySystem::FoodDeliverySystem()
{
    city="city";
}

FoodDeliverySystem::~FoodDeliverySystem()
{

}

void FoodDeliverySystem::setFoodDeliverySystem()
{
    int i;
    cout<<"Enter your city:";
    cin>>city;
    for(i=0;i<city.length();i++)
    {
        if(std::isdigit(city[i])!=0)
        {
            try
            {
                FoodDeliverySystem f2;
                throw f2;
            }
            catch(FoodDeliverySystem &e)
            {
                cout<<e.exception();
                exit(0);
            }
        }
        else
        {
            cout<<" ";
        }
    }
}

void FoodDeliverySystem::setcity(int city)
{
    this->city=city;
}

string FoodDeliverySystem::getcity()
{
    return city;
}
