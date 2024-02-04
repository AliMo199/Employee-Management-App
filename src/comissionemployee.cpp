#include "comissionemployee.h"

comissionemployee::comissionemployee(){}

comissionemployee::~comissionemployee(){}

void comissionemployee::getinfo(){
    employee::getinfo();
    cout<<"Enter employee target:";
    cin>>target;
    cout<<"Enter commission rate:";
    cin>>c_rate;
}
void comissionemployee::displayinfo(){
    employee::displayinfo();
    c_sum=target*c_rate;
    cout<<"\nsalary(pay):"<<c_sum;
    cout<<"\n--------------------------\n";
}
double comissionemployee::pay(){
    employee::pay();
    c_sum=target*c_rate;
    return c_sum;
}
