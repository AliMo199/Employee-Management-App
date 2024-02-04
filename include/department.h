#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>
#include <string>
using namespace std;

class department
{
    public:
        department();
        void getdep();
        void printdep();
        virtual ~department();

    protected:
        unsigned int id;
        string dep_name;

    private:
};

#endif
