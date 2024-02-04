#ifndef COMISSIONEMPLOYEE_H
#define COMISSIONEMPLOYEE_H
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

class comissionemployee : public employee{
    public:
        comissionemployee();
        virtual ~comissionemployee();
        void getinfo();
        void displayinfo();
        double pay();
    protected:
        double target,c_rate;
        double c_sum=target*c_rate;
    private:
};

#endif
