#ifndef MANAGEREMPLOYEE_H
#define MANAGEREMPLOYEE_H
#include <iostream>
#include <string>
#include "employee.h"
#include "salaryemployee.h"
using namespace std;

class manageremployee : public salaryemployee{
    public:
        manageremployee();
        virtual ~manageremployee();
        void getinfo();
        void displayinfo();
        void addbonus();
        double pay();
    protected:
        double bonus,m_salary,s;
    private:
};

#endif // MANAGEREMPLOYEE_H
