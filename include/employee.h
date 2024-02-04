#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include "benefit.h"
#include "department.h"
using namespace std;

class employee
{
    public:
        employee();
        virtual ~employee();
        virtual void getinfo();
        virtual void displayinfo();
        virtual double pay();
        string getname();
        int getid();
        string gettitle();
        void showbenefit();
        void editbenefit();
    protected:
        int emp_id;
        string emp_name,emp_phone,emp_email,emp_title;
        benefit benefitlist;
        department *e_department;
    private:
};

#endif
