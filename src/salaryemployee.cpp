#include "salaryemployee.h"

salaryemployee::salaryemployee(){}

salaryemployee::~salaryemployee(){}

void salaryemployee::getinfo(){
    employee::getinfo();
    cout<<"\nEnter pay per month:";
    cin>>salary;
}
void salaryemployee::displayinfo(){
    employee::displayinfo();
    cout<<"\nSalary:"<<salary;
    cout<<"\n---------------------------\n";
}
double salaryemployee::pay(){
    employee::pay();
    return salary;
}
