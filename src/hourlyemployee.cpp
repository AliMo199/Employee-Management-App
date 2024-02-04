#include "hourlyemployee.h"

hourlyemployee::hourlyemployee(){}

hourlyemployee::~hourlyemployee(){}

void hourlyemployee::getinfo(){
    employee::getinfo();
    cout<<"\nEnter hours worked:";
    cin>>hoursworked;
    cout<<"Enter Pay per hour rate:";
    cin>>h_rate;
}
void hourlyemployee::displayinfo(){
    employee::displayinfo();
    sum=hoursworked*h_rate;
    cout<<"Pay:"<<sum;
    cout<<"\n-------------------------\n";
}
void hourlyemployee::addhours(){
    int h;
    cout<<"Enter number of hours you want to add:";
    cin>>h;
    hoursworked=hoursworked+h;
}
double hourlyemployee::pay(){
    employee::pay();
    sum=hoursworked*h_rate;
    return sum;
}
