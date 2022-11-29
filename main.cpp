#include <iostream>
#include<stdlib.h>
#include "FoodDeliverySystem.h"
#include "Swiggy.h"
#include "Zomato.h"
#include "DeliveryDetails.cpp"

using namespace std;

int main()
{
    int choice;
    FoodDeliverySystem f;
    Swiggy s;
    Zomato z;
    f.setFoodDeliverySystem();
    cout<<endl;
    cout<<"----------------------------------- \n";
    cout<<"PICK YOUR CHOICE OF FOOD DELIVERY SYSTEM \n";
    cout<<"1. SWIGGY \n";
    cout<<"2. ZOMATO \n";
    cout<<"----------------------------------- \n";
    cout<<"Enter choice 1 or 2:";
    cin>>choice;
    if(choice==1)
    {
        s.setSwiggy();
    }
    else if(choice==2)
    {
        z.setZomato();
    }
    else
    {
        cout<<" ";
        try
        {
            FoodDeliverySystem f1;
            throw f1;
        }
        catch(FoodDeliverySystem &e)
        {
            cout<<e.exception();
            exit(0);
        }
    }
}


//private public
//file display
