#include "employee.h"

employee::employee(){}

employee::~employee(){}

void employee::getinfo(){
    e_department=new department;
    e_department->getdep();
    cout<<"\nEnter employee id:";
    cin>>emp_id;
    cout<<"Enter name: ";
    cin.ignore();
    getline(cin,emp_name);
    cout<<"Enter Job title: ";
    getline(cin,emp_title);
    cout<<"Enter Phone number: ";
    getline(cin,emp_phone);
    cout<<"Enter Email address: ";
    getline(cin,emp_email);
    benefitlist.getbenefit();
}
void employee::displayinfo(){
    e_department->printdep();
    cout<<"\nEmployee id:"<<emp_id;
    cout<<"\nEmployee name: "<<emp_name;
    cout<<"\nEmployee job title: "<<emp_title;
    cout<<"\nPhone number:"<<emp_phone;
    cout<<"\nEmail: "<<emp_email;
    benefitlist.displaybenefit();
}
double employee::pay(){
}
string employee::getname(){
    return emp_name;
}
int employee::getid(){
    return emp_id;
}
string employee::gettitle(){
    return emp_title;
}
void employee::showbenefit(){
    benefitlist.displaybenefit();
}
void employee::editbenefit(){
    benefitlist.getbenefit();
}
