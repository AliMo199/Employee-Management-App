#ifndef BENEFIT_H
#define BENEFIT_H
#include <iostream>
#include <string>
using namespace std;

class benefit
{
    public:
        benefit();
        virtual ~benefit();
        void getbenefit();
        void displaybenefit();

    protected:
        string info1,info2,coverage;
        double amount1,amount2;
        char ch;
    private:
};

#endif // BENEFIT_H
