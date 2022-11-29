#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<fstream>
#include<sstream>
#include "Swiggy.h"

using namespace std;

Swiggy::Swiggy()
{
    restaurantchoice=1;
    ordernumber=1;
    damnt=0.0;
}

Swiggy::~Swiggy()
{

}

void Swiggy::setSwiggy()
{
    int i;
    cout<<"LIST OF RESTAURANTS:"<<endl;
    ifstream openFile("C:\\Users\\HP\\OneDrive\\Desktop\\Restaurants.txt",ios::in);
    string line;
    while(!openFile.eof())
    {
        getline(openFile,line);
        cout<<line<<endl;
    }
    openFile.close();
    cout<<"\n Enter your choice(1-8):";
    cin>>restaurantchoice;
    if(restaurantchoice<1 || restaurantchoice>8)
    {
        try
        {
            Swiggy s1;
            throw s1;
        }
        catch(Swiggy &e)
        {
            cout<<e.exception();
            exit(0);
        }
    }
    else
    {
        cout<<"Enter your order number:";
        cin>>ordernumber;
    }

}

void Swiggy::setrestaurantchoice(int restaurantchoice)
{
    this->restaurantchoice=restaurantchoice;
}

void Swiggy::setordernumber(int ordernumber)
{
    this->ordernumber=ordernumber;
}

int Swiggy::getrestaurantchoice()
{
    return restaurantchoice;
}

int Swiggy::getordernumber()
{
    return ordernumber;
}
