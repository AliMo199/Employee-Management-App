#include "manageremployee.h"

manageremployee::manageremployee(){}

manageremployee::~manageremployee(){}

void manageremployee::getinfo(){
    employee::getinfo();
    cout<<"\nEnter base salary:";
    cin>>m_salary;
    cout<<"Enter bonus amount:";
    cin>>bonus;
}
void manageremployee::displayinfo(){
    employee::displayinfo();
    s=m_salary+bonus;
    cout<<"Base salary:"<<m_salary;
    cout<<"\nBonus:"<<bonus;
    cout<<"\nSalary with bonus total:"<<s;
    cout<<"\n-----------------------------\n";
}
void manageremployee::addbonus(){
    double b;
    cout<<"Add bonus amount:";
    cin>>b;
    bonus=b+bonus;
}
double manageremployee::pay(){
    employee::pay();
    s=m_salary+bonus;
    return s;
}
