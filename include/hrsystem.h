#ifndef HRSYSTEM_H
#define HRSYSTEM_H
#include <iostream>
#include <string>
#include "employee.h"
#include "salaryemployee.h"
#include "hourlyemployee.h"
#include "comissionemployee.h"
#include "manageremployee.h"
using namespace std;

class hrsystem
{
    public:
        hrsystem();
        virtual ~hrsystem();
        void addemp();
        void showemp();
        void totalsalary();
        int findname(string);
        int findid(int);
        int findtitle(string);
        void editemp();
        void deleteemp();
        void editben();
        void showben();
        void empsearch(string);
        void titlesearch(string);
        void idsearch(int);
    protected:

    private:
        employee **emp_list;
        int emp_count;
        unsigned int emp_size;
};

#endif
