#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include <iostream>
#include <string>
#include "employee.h"
using namespace std;

class hourlyemployee : public employee {
    public:
        hourlyemployee();
        virtual ~hourlyemployee();
        void getinfo();
        void displayinfo();
        void addhours();
        double pay();
    protected:
        double hoursworked,h_rate;
        double sum=hoursworked*h_rate;
    private:
};

#endif
