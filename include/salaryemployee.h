#ifndef SALARYEMPLOYEE_H
#define SALARYEMPLOYEE_H
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

class salaryemployee : public employee{
    public:
        salaryemployee();
        virtual ~salaryemployee();
        void getinfo();
        void displayinfo();
        double pay();
    protected:
        double salary;
    private:
};

#endif
