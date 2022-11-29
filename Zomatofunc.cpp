#include<iostream>
#include<stdlib.h>
#include<cstring>
#include<fstream>
#include<sstream>
#include "Zomato.h"

using namespace std;
using std::string;

Zomato::Zomato()
{
    time="7.30 PM";
    date="01 Jan";
    day="MONDAY";
    people=0;
}

Zomato::~Zomato()
{

}

void Zomato::setZomato()
{
    int choice,i;
    cout<<"------------------------------------ \n";
    cout<<"Enter your choice:"<<endl;
    cout<<"1. Delivery."<<endl;
    cout<<"2. Dining."<<endl;
    cin>>choice;
    if(choice==1)
    {
        s.setSwiggy();
    }
    else if(choice==2)
    {
        cout<<"BOOK A TABLE"<<endl;
        s.setSwiggy();
        cout<<"Enter day:";
        cin>>day;
        for(i=0;i<day.length();i++)
        {
            if(std::isdigit(day[i])!=0)
            {
                try
                {
                    Zomato z2;
                    throw z2;
                }
                catch(Zomato &e)
                {
                    cout<<e.exceptionday();
                    exit(0);
                }
            }
            else
            {
                cout<<" ";
            }
        }
    }
    cout<<"\n Enter date in the format (01 Jan):";
    cin>>date;
    cout<<"\n Enter time in the format (12:30 PM):";
    cin>>time;
    cout<<"\n Enter the no. of people:(Maximum-15)";
    cin>>people;
    if(people==0 || people>15)
    {
        try
        {
            Zomato z3;
            throw z3;
        }
        catch(Zomato &e)
        {
            cout<<e.exceptionpeople();
            exit(0);
        }
    }
    cout<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"Table Booked on"<<" "<<date<<","<<day<<" "<<"at"<<" 2"<<time<<"for"<<people<<"people"<<endl;
}

void Zomato::settime(string time)
{
    this->time=time;
}

void Zomato::setdate(string date)
{
    this->date=date;
}

void Zomato::setday(string day)
{
    this->day=day;
}

void Zomato::setpeople(int people)
{
    this->people=people;
}

string Zomato::gettime()
{
    return time;
}

string Zomato::getday()
{
    return day;
}

string Zomato::getdate()
{
    return date;
}

int Zomato::getpeople()
{
    return people;
}
