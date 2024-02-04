#include "department.h"

department::department(){}

void department::getdep(){
    cout<<"Enter Dep. id:";
    cin>>id;
    cout<<"Enter Department name: ";
    cin.ignore();
    getline(cin,dep_name);
}

void department::printdep(){
    cout<<"\nId:"<<id<<"\tDepartment: "<<dep_name;
}
department::~department(){}
